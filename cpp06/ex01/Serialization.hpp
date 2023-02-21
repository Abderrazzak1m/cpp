/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:31:14 by amiski            #+#    #+#             */
/*   Updated: 2022/11/26 00:58:36 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
#include<iostream>

struct Data
{
    std::string name;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif