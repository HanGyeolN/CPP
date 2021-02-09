/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:54:03 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:54:03 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : count_(0), units_(nullptr), cur_(nullptr)
{
}

Squad::~Squad()
{
	while (units_)
	{
		cur_ = units_;
		units_ = units_->next;
		delete static_cast<ISpaceMarine *>(cur_->data);
		delete cur_;
	}
}

Squad::Squad(Squad const &copy)
{
	t_list	*iter;

	count_ = copy.count_;
	units_ = nullptr;
	cur_ = nullptr;
	iter = copy.units_;
	while (iter)
	{
		push(((ISpaceMarine *)(iter->data))->clone());
		iter = iter->next;
	}
}

Squad			&Squad::operator=(Squad const &ref)
{
	t_list	*iter;

	while (units_)
	{
		cur_ = units_;
		units_ = units_->next;
		delete static_cast<ISpaceMarine *>(cur_->data);
		delete cur_;
	}
	count_ = ref.count_;
	units_ = nullptr;
	cur_ = nullptr;
	iter = ref.units_;
	while (iter)
	{
		push(((ISpaceMarine *)(iter->data))->clone());
		iter = iter->next;
	}
	return (*this);
}

int				Squad::getCount() const
{
	return (count_);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	int		i;
	t_list	*next;

	if (n >= count_)
	{
		return (0);
	}
	i = 0;
	next = units_;
	while (i < n)
	{
		next = next->next;
		i++;
	}
	return (static_cast<ISpaceMarine *>(next->data));
}

int				Squad::push(ISpaceMarine *unit)
{
	if (unit == 0)
		return (0);
	if (units_ == nullptr)
	{
		units_ = new t_list;
		cur_ = units_;
	}
	else
	{
		cur_->next = new t_list;
		cur_ = cur_->next;
	}
	cur_->data = static_cast<void *>(unit);
	cur_->next = nullptr;
	count_++;
	return (count_);
}