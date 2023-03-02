/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:40:25 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 10:42:40 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : type(type) {

}

Weapon::~Weapon( void ) {

}

const std::string&	Weapon::getType( void ) const {
	return (this->type);
}

void	Weapon::setType( std::string newType ) {
	this->type = newType;
}