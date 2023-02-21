/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 05:41:18 by amiski            #+#    #+#             */
/*   Updated: 2022/11/27 19:03:58 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include<iostream>

template <typename T> class Array
{
    private:
        T *arry;
        unsigned int n;
    public:
        Array()
        {
            this->arry = new T[0];
            n = 0;
        }
        Array(unsigned int n)
        {
            this->arry = new T[n];
            this->n = n;
        }
        Array(const Array& obj)
        {
            this->arry = new T[obj.n];
            for (unsigned int i = 0; i < obj.n ; i++)
                this->arry[i] = obj.arry[i];
            this->n = obj.n;
        }
        Array& operator=(const Array& obj)
        {
            if(this != &obj)
            {
                if(this->arry)
                    delete[] this->arry;
                this->arry = new T[obj.n];
                for (unsigned int i = 0; i < obj.n ; i++)
                    this->arry[i] = obj.arry[i];
                this->n = obj.n;
            }
            return(*this);
        }

        T& operator[](int index)
        {
         if(index >= (int) this->n || index < 0)
          {  throw std::out_of_range("out of range");
          }
          return(this->arry[index]); 
        }

        T& operator[](int index) const
        {
         if(index >= (int)n || index < 0)
          {
            throw std::out_of_range("out of range");
          }
          return(this->arry[index]); 
        }

        unsigned int size() const
        {
            return(this->n);
        }
        ~Array()
        {
            delete[] arry;
        }
};




#endif