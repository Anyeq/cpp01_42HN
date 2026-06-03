/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 22:15:28 by asando            #+#    #+#             */
/*   Updated: 2026/06/03 20:04:48 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	if (N <= 0) {
		return (NULL);
	}
	Zombie	*res = new Zombie[N];
	for (int i = 0; i < N; i++) {
		res[i].setZombieName(name);
	}
	return (res);
}
