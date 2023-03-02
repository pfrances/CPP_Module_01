/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:15:23 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 09:38:32 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &Weapon ) : name(name), myWeapon(Weapon) {

}

HumanA::~HumanA( void ) {

}

void	HumanA::attack( void ) const {
	std::cout << this->name << " attacks with their " << this->myWeapon.getType() << std::endl;
}
