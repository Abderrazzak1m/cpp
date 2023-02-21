/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:50:47 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 16:10:37 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int grade_to_sign, int grade_to_exec) :AForm(name, grade_to_sign, grade_to_exec)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{
    if(this != &obj)
        *this = obj;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if(this != &obj)
        this->is_signed = obj.is_signed;
    return(*this);
}

void ShrubberyCreationForm::action() const
{
    std::ofstream out (this->getName() + "_shrubbery");
    if(out.is_open())
    out <<"                    . . .\n"
"                   .        .  .     ..    .\n"
"                .                 .         .  .\n"
"                      .          .\n"
"                         .      .                ..\n"
"             .  .          .            .              .\n"
"             .  .            '.,        .               .\n"
"             .  .              'b      *\n"
"             .   .              '$    #.                ..\n"
"             . . .    .           $:   #:               .\n"
"             ..      .  ..      *#  @):        .   . .\n"
"                          .     :@,@):   ,.**:'   .\n"
"              .      .,         :@@*: ..**'      .   .\n"
"                       '#o.    .:(@'.@**-  .\n"
"               .  .       'bq,..:,@@*'   ,*      .  .\n"
"                          ,p$q8,:@)'  .p*'      .\n"
"                   .     '  . '@@Pp@@*'    .  .\n"
"                    .  . ..    Y7'.'     .  .\n"
"                              :@):.\n"
"                           .::(@:.\n"
"            ***@@@***@@@**.:@:'.**@@@***@@@@@@@@@@@@\n";
}
    
