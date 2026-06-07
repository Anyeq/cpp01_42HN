/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 13:04:33 by asando            #+#    #+#             */
/*   Updated: 2026/06/07 13:08:03 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
	}

	Replace r(argv[1], argv[2], argv[3]);
	if (!r.process())
		return (1);
	return (0);
}
