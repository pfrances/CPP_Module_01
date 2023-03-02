/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:15:44 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 10:39:46 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), myWeapon(NULL) {

}

HumanB::~HumanB( void ) {

}

void HumanB::setWeapon( Weapon &newWeapon ) {

	this->myWeapon = &newWeapon;
}

void	HumanB::attack( void ) const {
	if ( this->myWeapon != NULL ) {
		std::cout << this->name << " attacks with their " << this->myWeapon->getType() << std::endl;
	}
	else {
		std::cout << this->name << " attacks with their hands.. poor " << this->name << std::endl;
	}
}
