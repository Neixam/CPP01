/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:42:28 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 14:42:30 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie& Zombie::operator=(const Zombie &other)
{
    if (this == &other)
        return *this;
    _name = other.get_name();
    return *this;
}

Zombie::Zombie(const std::string& name)
{
    std::cout << GREEN << "Zombie Constructor: " << name << NEUTRAL << std::endl;
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << RED << "Zombie Destructor: " << _name << NEUTRAL << std::endl;
}

Zombie::Zombie()
{
    std::cout << GREEN << "Zombie Constructor" << NEUTRAL << std::endl;
    _name = "Joe";
}

std::string Zombie::get_name(void) const
{
    return _name;
}

void Zombie::set_name(const std::string& name)
{
    _name = name;
}
