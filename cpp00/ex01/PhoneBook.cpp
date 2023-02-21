/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:30:13 by amiski            #+#    #+#             */
/*   Updated: 2022/11/09 16:08:03 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
int PhoneBook::dispaly_all()
{
    int i = -1;
    std::string str;
    int l;
    std::cout<<"     index|first_name| last_name| nick_name" << std::endl;
    while(++i < this->nbr_contact)
        this->contact[i].display(i);
    if(i == 0)
        this->contact[0].display(-1);  
    std::cout << "enter an index to search a contact : ";
    std::getline(std::cin, str);
    if(std::cin.eof())
        return (0);
    if((str.c_str())[0] >='0' && (str.c_str())[0] <= '9')
    {
        l = atoi(str.c_str());
        if(l >= 0 && l < this->nbr_contact)
        {
            
            this->contact[l].display1();
        }
        else
            std::cout<< "doesn't exist" << std::endl;
    }
    else
        std::cout<< "expecting a digit !" << std::endl;
    return(1);
}
PhoneBook::PhoneBook()
{
    this->index = 0;
    this->nbr_contact = 0;
}

PhoneBook::~PhoneBook()
{
}
void PhoneBook::add(Contact contact)
{
    if(this->nbr_contact != 8)
        this->nbr_contact++;
    if(this->index < 7)
        this->contact[index++] = contact;
    else
    {
        this->contact[index] = contact;
        this->index = 0;
    } 
}