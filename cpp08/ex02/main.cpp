/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 07:04:01 by amiski            #+#    #+#             */
/*   Updated: 2022/11/28 07:04:02 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MutantStack.hpp"

int main()
{
    {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    }

    std::cout << "----------------------------- check for list -------------------------------------\n";
    {
        std::list<int> list1;
        list1.push_back(5);
        list1.push_back(17);
        std::cout << list1.back() << std::endl;
        list1.pop_back();
        std::cout << list1.size() << std::endl;
        list1.push_back(3);
        list1.push_back(5);
        list1.push_back(737);
        //[...]
        list1.push_back(0);
        std::list<int>::iterator it = list1.begin();
        std::list<int>::iterator ite = list1.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout<<"--------------------test for string-----------------\n";
    {
        MutantStack<std::string> stack1;
        stack1.push("string1");
        stack1.push("string2");
        stack1.push("string3");
        stack1.pop();
        stack1.push("1337");
        MutantStack<std::string>::iterator it1 = stack1.begin();
        MutantStack<std::string>::iterator it2 = stack1.end();
         while (it1 != it2)
        {
            std::cout << *it1 << std::endl;
            it1++;
        }
    }
    }
    return 0;
}