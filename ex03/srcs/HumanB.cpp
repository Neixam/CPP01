/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:47:49 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 17:47:49 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "../includes/HumanB.hpp"

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

HumanB::HumanB(std::string name)
{
    _name = name;
    std::cout << GREEN << "HumanB Constructor: " << _name << NEUTRAL << std::endl;
}

HumanB::~HumanB()
{
    std::cout << RED << "HumanB Destructor: " << _name << ", " << _weapon->getType() << NEUTRAL << std::endl;
}

HumanB HumanB::operator=(const HumanB &other)
{
    if (this == &other)
        return *this;
    _name = other.getName();
    _weapon = other.getWeapon();
    return *this;
}

Weapon *HumanB::getWeapon(void) const
{
    return _weapon;
}

std::string HumanB::getName(void) const
{
    return _name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB()
{
    std::cout << GREEN << "HumanB Constructor" << NEUTRAL << std::endl;
}
