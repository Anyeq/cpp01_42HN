/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:12:18 by asando            #+#    #+#             */
/*   Updated: 2026/06/04 19:46:04 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class	HumanB {
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon& weapon);
};

#endif

