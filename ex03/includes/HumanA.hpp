/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:47:58 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 17:47:59 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <string>
#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    HumanA&     operator=(const HumanA& other);
    Weapon*     getWeapon(void) const;
    std::string getName(void) const;
    void        attack(void);
private:
    HumanA();
    std::string _name;
    Weapon      *_weapon;
};

#endif
