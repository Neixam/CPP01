/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:52:06 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 13:52:07 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

void Harl::debug()
{
    std::cout << "It's debug time go smash the bugs !!" << std::endl;
}

void Harl::info()
{
    std::cout << "Info for you or me or we or they or any else" << std::endl;
}

void Harl::warning()
{
    std::cout << "Warn a warning warning you" << std::endl;
}

void Harl::error()
{

    std::cout << "It's an error (like me for my parent)" << std::endl;
}

void Harl::complain(std::string level)
{
    static const struct
    {
        std::string ownLevel;
        void        (Harl::*act)();
    }   levelAct[] =
            {
                    { "DEBUG", &Harl::debug },
                    { "INFO", &Harl::info },
                    { "WARNING", &Harl::warning },
                    { "ERROR", &Harl::error }
            };

    for (int i = 0; i < 4; i++)
    {
        if (level == levelAct[i].ownLevel)
        {
            (this->*levelAct[i].act)();
            return ;
        }
    }
    std::cout << level << ": isn't existing level" << std::endl;
}

Harl::Harl()
{
    std::cout << GREEN << "Constructor Harl" << NEUTRAL << std::endl;
}

Harl::~Harl()
{
    std::cout << RED << "Destructor Harl" << NEUTRAL << std::endl;
}

Harl::Harl(const std::string& minLevel)
{
    static const std::string levels[] =
            {
                    "DEBUG",
                    "INFO",
                    "WARNING",
                    "ERROR"
            };
    int i;

    std::cout << GREEN << "Constructor Harl" << NEUTRAL << std::endl;
    for (i = 0; i < 4; i++)
        if (minLevel == levels[i])
            break;
    _level = i;
}

int Harl::getLevel() const
{
    return _level;
}
