/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:20:57 by amiski            #+#    #+#             */
/*   Updated: 2022/11/15 21:53:04 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->RawBits = 0;
    std::cout<< "Default constructor called" <<std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout<< "Copy constructor called" <<std::endl;
    *this = obj;
}

Fixed::~Fixed()
{
    std::cout<< "Destructor called" <<std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout<< "Copy assignment operator called" <<std::endl;
    if (this != &other)
        this->RawBits = other.getRawBits();
    return *this;
}
int Fixed::getRawBits(void) const
{
    std::cout<< "getRawBits member function called" <<std::endl;
    return (this->RawBits);
}

void Fixed::setRawBits(int const raw)
{
    std::cout<< "setRawBits member function called" <<std::endl;
    this->RawBits = raw;
}