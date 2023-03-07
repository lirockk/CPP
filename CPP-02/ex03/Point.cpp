/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:04:35 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/07 12:30:59 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/****************** Constructors & Destructor ******************/
Point::Point(void) : _x(0), _y(0)
{
	// std::cout << "Default point constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	// std::cout << "Float point constructor called" << std::endl;
}

Point::Point(const Point &p)
{
	*this = p;
	// std::cout << "Copy point constructor called" << std::endl;
}

Point::~Point(void)
{
	// std::cout << "Point destructor called" << std::endl;
}
/**************************************************/



/****************** Member functions ******************/
Fixed	Point::getX(void) const
{
	return (this->_x.toFloat());
}

Fixed	Point::getY(void) const
{
	return (this->_y.toFloat());
}
/******************************************************/


/****************** Operator overloading ******************/
Point	&Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		(Fixed) this->_x = rhs.getX();
		(Fixed) this->_y = rhs.getY();
	}
	return (*this);
}
/**********************************************************/
