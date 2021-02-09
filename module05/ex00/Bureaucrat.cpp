#include "Bureaucrat.hpp"

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high.");
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low.");
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name_(name)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	grade_ = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : name_(copy.name_), grade_(copy.grade_)
{
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &ref)
{
	grade_ = ref.grade_;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (name_);
}

int			Bureaucrat::getGrade() const
{
	return (grade_);
}

void		Bureaucrat::increaseGrade()
{
	if (grade_ - 1 < 1)
		throw (GradeTooHighException());
	grade_--;
}

void		Bureaucrat::decreaseGrade()
{
	if (grade_ + 1 > 150)
		throw (GradeTooLowException());
	grade_++;
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (os);
}