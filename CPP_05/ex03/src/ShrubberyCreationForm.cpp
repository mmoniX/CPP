/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:36:55 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/02 13:36:57 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	target = "Shrub";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string starget) : AForm("ShrubberyCreationForm", 145, 137)
{
	target = starget;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), target(obj.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		target = obj.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// void diamondTree(std::ofstream &outputfile)
// {
// 	int n = 15, row, col;
// 	for (row = 1; row <= n; row++)
// 	{
// 		for (col = 1; col <= n - row; col++)
//             outputfile << " ";
//         for (col = 1; col <= 2*row-1; col++)
//             outputfile << "*";
//         outputfile << "\n";
//     }
//     for (row = n-1; row >= 1; row--)
//     {
//         for (col = 1; col <= n - row; col++)
//             outputfile << " ";
//         for (col = 1; col <= 2*row-1; col++)
//             outputfile << "*";
//         outputfile << "\n";
//     }
// }

void shrubTree(std::ofstream &outputfile)
{
    outputfile << "                                             \n";
    outputfile << "                                             \n";
    outputfile << "                   & &\n";
    outputfile << "                && && & &\n";
    outputfile << "             && && && & && &\n";
    outputfile << "           &&  &&&& &&  & && &&\n";
    outputfile << "         &&\\/&\\|& ()|/ @, && &&\n";
    outputfile << "       &&&&\\/(/&/&||/& /_/)_&/_& &&\n";
    outputfile << "      &() &\\/&|()|/&\\/ '%\" & ()& &\n";
    outputfile << "     &_\\/&_/&&& |& |&&/&__%%_/_& & &&\n";
    outputfile << "    && & && & &| &| /& & %% ()& /&& &&\n";
    outputfile << "    ()&_---()&\\&\\|&&-&&--%%---()~ &&\n";
    outputfile << "            &&     \\|||\n";
    outputfile << "                     |||\n";
    outputfile << "                     |||\n";
    outputfile << "                     |||\n";
    outputfile << "            , -=-~  .-^- _\n";
    outputfile << "           <  , -~-=~^-~=- ~-~=-\n";
    outputfile << "            `-~  -~  -~  -~  -~  -~\n";
    outputfile << "                                             \n";
    outputfile << "                                             \n";
}

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream outputfile(target + "_shrubbery");
	if (!outputfile.is_open())
        throw std::runtime_error("Failed to open outputfile");	
    std::cout << "Creating shrubbery for " << target << std::endl;
    shrubTree(outputfile);
    outputfile.close();
}
