/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:31:39 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 17:31:40 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string stringVAL = "HI THIS IS BRAIN";
    std::string &stringREF = stringVAL;
    std::string *stringPTR = &stringVAL;

    std::cout << std::hex << &stringVAL << std::endl;
    std::cout << std::hex << stringPTR << std::endl;
    std::cout << std::hex << &stringREF << std::endl;

    std::cout << stringVAL << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}