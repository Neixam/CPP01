/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:43:39 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 14:43:41 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    {
        Zombie  *roger = newZombie("Roger");
        Zombie  *albert = newZombie("Albert");
        Zombie  *georges = newZombie("Georges");

        roger->announce();
        randomChump("Patrice");
        albert->announce();
        randomChump("Paul");
        randomChump("Pascal");
        georges->announce();
        delete roger;
        delete albert;
        delete georges;
    }
    {
        Zombie  toto = Zombie("Joe");

        toto.announce();
    }
    return (0);
}