/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:18:39 by asando            #+#    #+#             */
/*   Updated: 2026/06/08 16:29:23 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	delete heapZombie;
	randomChump("StackZombie");
	return 0;
}
