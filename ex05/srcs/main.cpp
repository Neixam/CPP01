/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:23:17 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 12:23:18 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    {
        Harl harl;

        harl.complain("DEBUG");
        harl.complain("INFO");
        harl.complain("WARNING");
        harl.complain("ERROR");
    }
    {
        Harl harl;
        Harl harl1;
        Harl harl2;

        harl.complain("WARNING");
        harl1.complain("ERROR");
        harl2.complain("INFO");
    }
    {
        Harl harl;

        harl.complain("TEST");
        harl.complain("error");
    }
}