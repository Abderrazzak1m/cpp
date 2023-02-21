/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:18:10 by amiski            #+#    #+#             */
/*   Updated: 2022/11/09 15:53:34 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include <iomanip>
#include<string>
class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string secret;

public:
    Contact();
    ~Contact();
     std::string getFirst_name();
    void setFirst_name(std::string first_name);
    std::string getLast_name();
    void setLast_name(std::string last_name);
    std::string getNick_name();
    void setNick_name(std::string nick_name);
    std::string getPhone_number();
    void setPhone_number(std::string phone_number);
    std::string getSecret();
    void setSecret(std::string secret);
    void display(int index);
    void display1();
};

