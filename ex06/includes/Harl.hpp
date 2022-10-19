/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:50:26 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 13:50:27 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3

class Harl
{
public:
    Harl();
    Harl(const std::string& minLevel);
    ~Harl();
    void    complain(std::string level);
    int     getLevel() const;
private:
    void        debug();
    void        info();
    void        warning();
    void        error();
    int         _level;
};

#endif
