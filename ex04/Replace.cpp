/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 13:55:07 by asando            #+#    #+#             */
/*   Updated: 2026/06/07 13:17:05 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <string>
#include <iostream>
#include <fstream>

Replace::Replace(std::string filename, std::string str1, std::string str2)
	: _filename(filename), _str1(str1), _str2(str2){}

Replace::~Replace(){}

bool Replace::process() {
	if (_str1.empty()) {
		std::cerr << "Error: s1 could not be empty" << std::endl;
		return (false);
	};

	std::ifstream infile(_filename.c_str());
	if (!infile) {
		std::cerr << "Error: could not open the file" << std::endl;
		return (false);
	}

	std::ofstream outfile((_filename + ".replace").c_str());
	if (!outfile) {
		std::cerr << "Error: could not create .replace file" << std::endl;
		return (false);
	}

	std::string	line;
	while (std::getline(infile, line)) {
		size_t	pos = 0;

		while ((pos = line.find(_str1, pos)) != std::string::npos) {
			line.erase(pos, _str1.length());
			line.insert(pos, _str2);
			pos += _str2.length();
		}

		outfile << line;
		if (!infile.eof()) {
			outfile << std::endl;
		}
	}
	return (true);
}
