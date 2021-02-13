/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:42:03 by hna               #+#    #+#             */
/*   Updated: 2021/02/12 13:31:41 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include <fstream>

namespace SHRUBERRY_CREATION_FORM_CONST
{
	const std::string	NAME = "shruberry creation";
	const int			SIGN_REQ = 145;
	const int			EXEC_REQ = 137;
	const std::string	TREE = "\
                     .o00o\n\
                   o000000oo\n\
                  00000000000o\n\
                 00000000000000\n\
              oooooo  00000000  o88o\n\
           ooOOOOOOOoo  ```''  888888\n\
         OOOOOOOOOOOO'.qQQQQq. `8888'\n\
        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n\
        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n\
         OOOOOOOOO QQQQQQQQQQ/ /QQ\n\
           OOOOOOOOO `QQQQQQ/ /QQ'\n\
             OO:F_P:O `QQQ/  /Q'\n\
                \\\\. \\ |  // |\n\
                d\\ \\\\\\|_////\n\
                qP| \\\\ _' `|Ob\n\
                   \\  / \\  \\Op\n\
                   |  | O| |\n\
           _       /\\. \\_/ /\\\\\n\
            `---__/|_\\\\   //|  __\n\
                  `-'  `-'`-'-'\n";
}

class ShrubberyCreationForm : public Form
{
private:
	std::string		target_;

public:
	ShrubberyCreationForm(std::string const &target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	void	action() const;

private:
	ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &ref);
};

#endif