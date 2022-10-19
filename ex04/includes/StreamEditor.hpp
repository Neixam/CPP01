/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamEditor.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:11:13 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/18 19:11:14 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef STREAM_EDITOR_HPP
#define STREAM_EDITOR_HPP
#include <string>
#include <fstream>

class StreamEditor
{
public:
    StreamEditor(const std::string& filename, const std::string& find, const std::string& replace);
    ~StreamEditor();
    int replace();
private:
    std::ifstream   _in;
    std::ofstream   _out;
    std::string     _find;
    std::string     _replace;
};

#endif
