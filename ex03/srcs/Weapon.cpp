/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:47:53 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 17:47:54 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "../includes/Weapon.hpp"

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

Weapon::Weapon()
{
    std::cout << GREEN << "Weapon Constructor" << NEUTRAL << std::endl;
}

Weapon::~Weapon()
{
    std::cout << RED << "Weapon Destructor: " << _type << NEUTRAL << std::endl;
}

Weapon Weapon::operator=(const Weapon &other)
{
    if (this == &other)
        return *this;
    _type = other.getType();
    return *this;
}

std::string Weapon::getType(void) const
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}

Weapon::Weapon(std::string type)
{
    std::cout << GREEN << "Weapon Constructor: " << type << NEUTRAL << std::endl;
    _type = type;
}

