/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:23 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/01 23:08:25 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

public:
		Zombie( std::string name );

		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name );

		~Zombie(void);
		void announce( void ) const;

private:
	std::string	_name;

};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif