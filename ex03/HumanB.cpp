/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:12:42 by asando            #+#    #+#             */
/*   Updated: 2026/06/04 20:28:33 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name), _weapon(NULL){}

HumanB::~HumanB(void){}

void	HumanB::attack(void) const {
	if (this->_weapon) {
		std::cout << this->_name << " attacks with "
			<< this->_weapon->getType() << std::endl;
	}
	else {
		std::cout << this->_name << " has no weapon" << std::endl;
	}
	return ;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
	return ;
}
