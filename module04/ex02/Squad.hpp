#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

class Squad : public ISquad
{
private:
	int				count_;
	t_list			*units_;
	t_list			*cur_;
public:
	Squad();
	virtual ~Squad();
	Squad(Squad const &copy);
	Squad	&operator=(Squad const &ref);
	
	int				getCount();
	ISpaceMarine	*getUnit(int);
	int				push(ISpaceMarine *);
};

Squad::Squad() : count_(0), units_(nullptr)
{
}

Squad::~Squad()
{
	while (units_)
	{
		cur_ = units_;
		units_ = units_->next;
		delete cur_->data;
		delete cur_;
	}
}

Squad::Squad(Squad const &copy)
{
	while (copy.units_)
	{

	}
}

Squad			&Squad::operator=(Squad const &ref)
{
}

int				Squad::getCount()
{
	return (count_);
}

ISpaceMarine	*Squad::getUnit(int n)
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
}


#endif