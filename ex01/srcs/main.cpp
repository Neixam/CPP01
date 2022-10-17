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
        Zombie  *chrisHorde = zombieHorde(10, "Chris");

        for (int i = 0; i < 10; i++)
            chrisHorde[i].announce();
        delete [] chrisHorde;
    }
    {
        Zombie  toto = Zombie("Joe");

        toto.announce();
    }
    return (0);
}