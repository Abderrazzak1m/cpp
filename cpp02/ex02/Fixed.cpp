/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:27:59 by amiski            #+#    #+#             */
/*   Updated: 2022/11/15 22:42:03 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->RawBits = 0;
}

Fixed::Fixed(const Fixed& obj)
{
    *this = obj;
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
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
    this->RawBits = x << this->bits;
}

Fixed::Fixed(const float y)
{
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
/*--------------comparison------------------*/
bool Fixed::operator < (const Fixed& other)
{
    if(this->RawBits < other.RawBits)
        return(true);
    return(false);
}
bool Fixed::operator > (const Fixed& other)
{
    if(this->RawBits > other.RawBits)
        return(true);
    return(false);
}
bool Fixed::operator <= (const Fixed& other)
{
    if(this->RawBits <= other.RawBits)
        return(true);
    return(false);
}
bool Fixed::operator >= (const Fixed& other)
{
    if(this->RawBits >= other.RawBits)
        return(true);
    return(false);
}
bool Fixed::operator == (const Fixed& other)
{
    if(this->RawBits == other.RawBits)
        return(true);
    return(false);
}
bool Fixed::operator != (const Fixed& other)
{
    if(this->RawBits != other.RawBits)
        return(true);
    return(false);
}

/*--------------increment/decrement------------------*/
Fixed Fixed::operator++ ()
{
    ++this->RawBits;
    return(*this);
}
Fixed Fixed::operator ++(int)
{
    Fixed tmp = *this;
    this->RawBits++;
    return(tmp);
}
Fixed Fixed::operator-- ()
{
    --this->RawBits;
    return(*this);
}
Fixed Fixed::operator --(int )
{
    Fixed tmp = *this;
    this->RawBits--;
    return(tmp);
}
/*--------------arithmetic------------------*/

Fixed Fixed::operator*(const Fixed& other)
{
    return(Fixed(this->toFloat() * other.toFloat()));
}
Fixed Fixed::operator-(const Fixed& other)
{
    return(Fixed(this->toFloat() - other.toFloat()));
}
Fixed Fixed::operator+(const Fixed& other)
{
    return(Fixed(this->toFloat() + other.toFloat()));
}
Fixed Fixed::operator/(const Fixed& other)
{
    return(Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a.RawBits > b.RawBits)
        return b;
    return (a);
}
const Fixed& Fixed::min(const Fixed& a,const Fixed& b)
{
    if(a.RawBits > b.RawBits)
        return b;
    return (a);
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if(a.RawBits < b.RawBits)
        return b;
    return (a);
}
const Fixed& Fixed::max(const Fixed& a,const Fixed& b)
{
    if(a.RawBits < b.RawBits)
        return b;
    return (a);
}