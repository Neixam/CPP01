/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:48:09 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 17:48:10 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__
#include <string>

class Weapon
{
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    Weapon      operator=(const Weapon& other);
    std::string getType(void) const;
    void        setType(std::string type);
private:
    std::string _type;
};

#endif
