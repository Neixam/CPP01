/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamEditor.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:11:18 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/18 19:11:19 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamEditor.hpp"
#include <string>
#include <iostream>

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

StreamEditor::StreamEditor(const std::string& filename, const std::string& find, const std::string& replace)
    : _in(filename.c_str()), _out((filename + ".replace").c_str()), _find(find), _replace(replace)
{
    std::cout << GREEN << "Constructor StreamEditor" << NEUTRAL << std::endl;
    if (!_in)
    {
        std::cerr << filename << ": doesn't exist" << std::endl;
        if (_out)
            std::remove((filename + ".replace").c_str());
    }
    if (!_out)
        std::cerr << filename + ".replace" << ": no perm" << std::endl;
}

StreamEditor::~StreamEditor()
{
    std::cout << RED << "Destructor StreamEditor" << NEUTRAL << std::endl;
    _in.close();
    _out.close();
}

int StreamEditor::replace()
{
    std::string line;

    if (_find.empty())
        return (1);
    while (std::getline(_in, line))
    {
        while (!line.empty())
        {
            std::size_t pos = line.find(_find);
            if (!(_out << line.substr(0, pos)))
                return (0);
            if (pos >= line.size())
                break;
            _out << _replace;
            line = line.substr(pos + _find.size());
        }
        _out << std::endl;
    }
    return (0);
}
