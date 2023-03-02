/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:23 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 10:43:24 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

public:
						Weapon(  std::string type );
						~Weapon( void );

	void				setType( std::string newType );
	const std::string&	getType( void ) const;

private:
	std::string	type;
};

#endif