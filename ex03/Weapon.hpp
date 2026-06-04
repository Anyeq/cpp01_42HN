/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:11:01 by asando            #+#    #+#             */
/*   Updated: 2026/06/04 19:18:19 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		~Weapon();

		const std::string&	getType() const;
		void				setType(std::string type);
};

#endif
