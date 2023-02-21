/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:16:31 by amiski            #+#    #+#             */
/*   Updated: 2022/11/09 15:31:36 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

 std::string get_ln(std::string str1)
    {
        std::string str;
        do
        {
            std::cout<< str1<< std::endl; 
            std::getline(std::cin, str);
            if(std::cin.eof())
                return ("");
            if (str.empty())
                std::cout<< "empty ! ";     
        }
        while(str.empty());
        return(str);
    }

int main()
{
    Contact a;
    PhoneBook book; 
    std::string str;
    
    while(1)
    {
        std::cout<< "ENTRER ADD , SEARCH OR EXIT"<< std::endl; 
        std::getline(std::cin, str);
        if(std::cin.eof())
            break ;
        if(str == "ADD")
        {
           
            a.setFirst_name(get_ln("set your first name"));
            if(a.getFirst_name() == "")
                break;
            a.setLast_name(get_ln("set your last name"));
            if(a.getLast_name() == "")
                break;
            a.setNick_name(get_ln("set your nick name"));
            if(a.getNick_name() == "")
                break;
            a.setPhone_number(get_ln("set your phone number"));
            if(a.getPhone_number() == "")
                break;
            a.setSecret(get_ln("set your secret"));
            if(a.getSecret() == "")
                break;
            book.add(a);
        }
        else if(str == "SEARCH")
        {        
            if(!book.dispaly_all())
                break ;
        }
        else if(str == "EXIT")
            break;
    }
    return (0);
}