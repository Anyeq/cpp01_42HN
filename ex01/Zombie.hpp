/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 22:15:47 by asando            #+#    #+#             */
/*   Updated: 2026/05/31 22:44:15 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_H
# define ZOMBIE_H
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

Zombie	*zombieHorde(int N, std::string name);
#endif
