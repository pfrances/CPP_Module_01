/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:15:52 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 10:08:22 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {

public:
	HumanB( std::string name );
	~HumanB( void );

	void attack( void ) const;
	void setWeapon( Weapon &Weapon );

private:
	std::string	name;
	Weapon*		myWeapon;

};

#endif