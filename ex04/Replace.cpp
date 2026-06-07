/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 13:55:07 by asando            #+#    #+#             */
/*   Updated: 2026/06/06 17:54:35 by asando           ###   ########.fr       */
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

	return (true);
}
