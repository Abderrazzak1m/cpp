/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:19:13 by amiski            #+#    #+#             */
/*   Updated: 2022/11/09 15:58:09 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static std::string trunc(std::string str)
{
    if(str.length() > 10)
        return(str.substr(0, 9) + ".");
    return(str);
}
void Contact::display1()
{
    std::cout<< "First_name  : " << this->getFirst_name() << std::endl;
    std::cout<< "Last_name   : " << this->getLast_name() << std::endl;
    std::cout<< "Nick_name   : " << this->getNick_name() << std::endl;
    std::cout<< "Phone_number: " << this->getPhone_number() << std::endl;
    std::cout<< "Secret      : " << this->getSecret() << std::endl;
}

void Contact::display(int index)
{
    if(index == -1)
    {
        std::cout <<std::right << std::setw(10) << "-" << "|";
        std::cout <<std::right << std::setw(10) << "-" << "|";
        std::cout <<std::right << std::setw(10) << "-" << "|";
        std::cout <<std::right << std::setw(10) << "-" << std::endl;
        return ;
    }
    std::cout <<std::right << std::setw(10) << trunc(std::to_string(index)) << "|";
    std::cout <<std::right << std::setw(10) << trunc(this->first_name) << "|";
    std::cout <<std::right << std::setw(10) << trunc(this->last_name) << "|";
    std::cout <<std::right << std::setw(10) << trunc(this->nick_name) << std::endl;
}
Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getFirst_name()
{
    return this->first_name;
}

void Contact::setFirst_name(std::string first_name)
{
    this->first_name = first_name;
}

std::string Contact::getLast_name()
{
    return this->last_name;
}

void Contact::setLast_name(std::string last_name)
{
    this->last_name = last_name;
}

std::string Contact::getNick_name()
{
    return this->nick_name;
}

void Contact::setNick_name(std::string nick_name)
{
    this->nick_name = nick_name;
}

std::string Contact::getPhone_number()
{
    return this->phone_number;
}

void Contact::setPhone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}

std::string Contact::getSecret()
{
    return this->secret;
}

void Contact::setSecret(std::string secret)
{
    this->secret = secret;
}