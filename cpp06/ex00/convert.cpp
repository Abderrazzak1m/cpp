/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:08:50 by amiski            #+#    #+#             */
/*   Updated: 2022/11/25 23:09:23 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"convert.hpp"
char get_type(std::string tmp)
{
    std::string str;
    
    if(tmp[0] == '+' || tmp[0] == '-')
        str = &tmp[1];
    else
        str = tmp;
    size_t a = str.find('.');
    unsigned int i;
    if(str == "nanf" || str == "-inff" || str == "inff")
        return('f');
    if(str == "nan" || str == "-inf" || str == "inf")
        return('d');
    if(a < str.size())
    {
        if(!isdigit(str[a + 1]))
            return('e');
        for( i = 0; i < str.size() - 1; i++)
        {
            if(isdigit(str[i]) || str[i] == '.')
            {
                continue;
            }
            else
                return('e');
        }
        if(isdigit(str[i]))
            return('d');
        else if(str[i] == 'f' || str[i] == 'F')
            return('f');
    }
    else
    {
        i = 0;
        if(str.size() == 1 && !isdigit(str[i]))
        {
            if (tmp.length() > 1)
                return ('e');
            return('c');
        }
    }
    for(i = 0; i < str.size() ; i ++)
    {
        if(!isdigit(str[i]))
            return('e');
    }
    return('i');
}
bool isInt(double a)
{
    return(a == static_cast<int>(a));
}
bool isInt2(float a)
{
    return(a == static_cast<int>(a));
}


void char_to(char a)
{   
    std::cout << "char: " << a << std::endl;
    std::cout << "int: " << static_cast<int>(a) << std::endl;
    std::cout << "float: " << static_cast<float>(a) << "f"<< std::endl;
    std::cout << "double: " << static_cast<double>(a) << std::endl;
}

void int_to(double a)
{
    if(a < 0 || a > 127)
        std::cout << "char: impossible" << std::endl; 
    else if (a <= 32 || a == 127)
        std::cout << "char:  Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(a) << std::endl;
    
    if (a > INT_MAX || a < INT_MIN)
        std::cout << "int: impossible" << std::endl; 
    else
        std::cout << "int: " << static_cast<int>(a) << std::endl;
    
    std::cout << "float: " << static_cast<float>(a) << "f"<< std::endl;
    std::cout << "double: " << static_cast<double>(a) << std::endl;
}
    
void double_to(double a)
{
    if(a < 0 || a > 127 || a != a)
        std::cout << "char: impossible" << std::endl; 
    else if (a <= 32 || a == 127 )
        std::cout << "char:  Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(a) << std::endl;
 
   if (a > INT_MAX || a < INT_MIN || a != a)
        std::cout << "int: impossible" << std::endl; 
    else
        std::cout << "int: " << static_cast<int>(a) << std::endl;
    std::cout << "float: " << static_cast<float>(a) << "f"<< std::endl;
    std::cout << "double: " << a << std::endl;
    
        
}
void float_to(float a)
{
     if(a < 0 || a > 127 || a != a)
        std::cout << "char: impossible" << std::endl; 
    else if (a <= 32 || a == 127)
        std::cout << "char:  Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(a) << std::endl;
    if (a > INT_MAX || a < INT_MIN || a != a)
        std::cout << "int: impossible" << std::endl; 
    else
        std::cout << "int: " << static_cast<int>(a) << std::endl;
    std::cout << "float: " << a << "f"<< std::endl;
    std::cout << "double: " << static_cast<float>(a) << std::endl;
   
    
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        std::cout << std::fixed;
        std::cout.precision(1);
        switch (get_type(av[1]))
        {
            case 'c':
                char_to(av[1][0]);
                break;
            case 'i':
                int_to(strtod(av[1], NULL));
                break;
            case 'f':
                float_to(strtof(av[1], NULL));
                break;
            case 'd':
                double_to(strtod(av[1], NULL));
                break;
            default:
                std::cout << "char :" << "impossible" << std::endl;
                std::cout << "int :" << "impossible"  << std::endl;
                std::cout << "float: " << "impossible" << std::endl;
                std::cout << "double: " << "impossible" << std::endl;
                break;
        }
    }
    else
    {
        std::cout << "Argument not valid" << std::endl;
        return(1);
    }
    
    return 0;
}