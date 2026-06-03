/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 22:14:28 by asando            #+#    #+#             */
/*   Updated: 2026/05/31 22:33:57 by asando           ###   ########.fr       */
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

void	Zombie::announce(void){
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ" << std::endl;
	return ;
}

void	Zombie::setZombieName(std::string name){
	this->_name = name;
	return ;
}
