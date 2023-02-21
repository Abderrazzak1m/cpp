/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:31:13 by amiski            #+#    #+#             */
/*   Updated: 2022/11/15 22:54:27 by amiski           ###   ########.fr       */
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
    return (this->RawBits);
}

void Fixed::setRawBits(int const raw)
{
    this->RawBits = raw;
}


Fixed::Fixed(const int x)
{
    std::cout<< "Int constructor called" <<std::endl;
    
    this->RawBits = x << this->bits;
}

Fixed::Fixed(const float y)
{
    std::cout<< "Float constructor called" <<std::endl;
    this->RawBits = roundf(y * (1 << this->bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

int Fixed::toInt() const
{
   return(this->RawBits >> this->bits);
}
float Fixed::toFloat() const
{
   return((float)this->RawBits / (1 << this->bits));
}