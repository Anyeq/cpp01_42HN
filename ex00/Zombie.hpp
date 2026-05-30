/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:19:06 by asando            #+#    #+#             */
/*   Updated: 2026/05/30 23:03:33 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie {
	private:
		std::string	_name;

	public:
		Zombie(void);
		~Zombie(void);
		void	setZombieName(std::string name);
		void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif
