/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:48:03 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 17:48:04 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(const std::string& name);
    ~HumanB();
    HumanB&     operator=(const HumanB &other);
    Weapon      *getWeapon(void) const;
    std::string getName(void) const;
    void        setWeapon(Weapon &weapon);
    void        attack(void);
private:
    HumanB();
    std::string _name;
    Weapon      *_weapon;
};

#endif
