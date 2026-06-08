/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:12:29 by asando            #+#    #+#             */
/*   Updated: 2026/06/08 16:34:14 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{}

HumanA::~HumanA(void){}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with " 
		<< this->_weapon.getType() << std::endl;
	return ;
}
