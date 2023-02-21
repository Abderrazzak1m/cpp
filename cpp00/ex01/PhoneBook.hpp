/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:20:15 by amiski            #+#    #+#             */
/*   Updated: 2022/11/09 15:29:59 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include"Contact.hpp"


class PhoneBook
{
    int index;
    int nbr_contact;
    Contact contact[8];
public:
    PhoneBook();
    ~PhoneBook();
    void add(Contact contact);
    int dispaly_all();
};