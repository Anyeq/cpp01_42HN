/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:11:28 by asando            #+#    #+#             */
/*   Updated: 2026/06/04 14:45:01 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){}

Weapon::~Weapon(){}

const std::string&	Weapon::getType() const {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
	return ;
}
