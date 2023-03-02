/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:04 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/01 23:04:51 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {
	Zombie	Normal_Zombie("Normal_Z");
	Zombie	*New_Zombie = newZombie("New_Z");

	Normal_Zombie.announce();

	randomChump("Random_Z");

	New_Zombie->announce();

	delete New_Zombie;

	return (0);
}
