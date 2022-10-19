/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:23:02 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/19 12:23:03 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP
#include <string>

class Harl
{
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
private:
    void    debug();
    void    info();
    void    warning();
    void    error();
};


#endif
