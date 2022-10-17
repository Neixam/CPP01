/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:47:45 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 17:47:46 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "../includes/HumanA.hpp"

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

HumanA::~HumanA()
{
    std::cout << RED << "HumanA Destructor: " << _name << ", " << _weapon->getType() << NEUTRAL << std::endl;
}

HumanA HumanA::operator=(const HumanA &other)
{
    if (this == &other)
        return *this;
    _name = other.getName();
    _weapon = other.getWeapon();
    return *this;
}

void HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanA::HumanA()
{
    std::cout << GREEN << "HumanA Constructor" << NEUTRAL << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon)
{
    std::cout << GREEN << "HumanA Constructor: " << name << ", " << weapon.getType() << NEUTRAL << std::endl;
    _name = name;
    _weapon = &weapon;
}

std::string HumanA::getName(void) const
{
    return _name;
}

Weapon* HumanA::getWeapon(void) const
{
    return _weapon;
}
