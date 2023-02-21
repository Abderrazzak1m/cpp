/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:28:05 by amiski            #+#    #+#             */
/*   Updated: 2022/11/15 22:39:10 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <cmath>

class Fixed
{
    private:
        int RawBits;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& obj);
        Fixed(const int x); 
        Fixed(const float x); 
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=(const Fixed& other);
        int toInt() const;
        float toFloat() const;
        //comparison
        bool operator < (const Fixed& other);
        bool operator > (const Fixed& other);
        bool operator <= (const Fixed& other);
        bool operator >= (const Fixed& other);
        bool operator == (const Fixed& other);
        bool operator != (const Fixed& other);
        //4 increment/decrement
        Fixed operator ++ (); 
        Fixed operator ++ (int);
        Fixed operator -- ();
        Fixed operator -- (int);
        //arithmetic
        Fixed operator +(const Fixed& other);
        Fixed operator -(const Fixed& other);
        Fixed operator *(const Fixed& other);
        Fixed operator /(const Fixed& other);
        //max-min
        static Fixed& min(Fixed&  a, Fixed&   b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed &b);


};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
