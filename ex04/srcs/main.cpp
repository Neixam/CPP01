/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:11:23 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/18 19:11:29 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "StreamEditor.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "usage:\n" << av[0] << " filename find_string replace_string" << std::endl;
        return (0);
    }
    StreamEditor streamEditor(av[1], av[2], av[3]);

    if (streamEditor.replace())
        std::cerr << av[0] << ": expression find_string is empty" << std::endl;
    return (0);
}