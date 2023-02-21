/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:31:19 by amiski            #+#    #+#             */
/*   Updated: 2022/11/15 22:54:07 by amiski           ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
