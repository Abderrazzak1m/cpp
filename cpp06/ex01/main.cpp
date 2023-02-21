/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:34:53 by amiski            #+#    #+#             */
/*   Updated: 2022/11/25 23:59:18 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));   
}
Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));   
}
int main()
{
    Data b;
    b.name = "amiski";
    float *j;
    j = reinterpret_cast<float*>(&b);
    std::cout << j << std::endl; 
    std::cout << (reinterpret_cast<Data *>(j))->name << std::endl;
    uintptr_t a = serialize(&b);
    std:: cout << a << std::endl;
    std:: cout << &b << std::endl;//meme addr de a mais en hexa
    std::cout << (deserialize(a))->name << std::endl;
    std::cout << (deserialize(serialize(&b)))->name << std::endl;
}