/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:15:38 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 09:36:23 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {

public:
	HumanA( std::string name, Weapon &Weapon );
	~HumanA( void );
	void attack( void ) const;

private:
	std::string	name;
	Weapon&		myWeapon;

};

#endif