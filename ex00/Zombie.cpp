/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:19:23 by asando            #+#    #+#             */
/*   Updated: 2026/05/30 23:03:18 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
	std::cout << "Zombie Created" << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " is destroyed" << std::endl;
	return ;
}

void	Zombie::setZombieName(std::string name) {
	this->_name = name;
	return ;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ";
	return ;
}
