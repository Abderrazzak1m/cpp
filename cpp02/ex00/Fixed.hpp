/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:13:05 by amiski            #+#    #+#             */
/*   Updated: 2022/11/15 21:53:12 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include<iostream>

class Fixed
{
    private:
        int RawBits;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& obj);   
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=(const Fixed& other);
};

#endif