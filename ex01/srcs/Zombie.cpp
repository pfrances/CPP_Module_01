/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:40:25 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/01 22:50:45 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

}

Zombie::Zombie( std::string name ) : _name(name) {

}

Zombie::~Zombie( void ) {
	std::cout << "~[" << this->_name << "]" << " has been deleted." << std::endl;
}

void	Zombie::announce( void ) const {
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}


void Zombie::setName(std::string name) {
	_name = name;
}