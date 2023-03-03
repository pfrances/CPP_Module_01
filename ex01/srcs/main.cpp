/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:04 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/03 21:16:12 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {

	int	nb_horde = 5;

	Zombie	Normal_Zombie("Normal_Z");
	Zombie	*Horde_Zombie = zombieHorde(nb_horde, "Horde_Z");

	Normal_Zombie.announce();

	for (int i = 0; i < nb_horde; i++) {
		Horde_Zombie[i].announce();
	}

	delete [] Horde_Zombie;


	return (0);
}
