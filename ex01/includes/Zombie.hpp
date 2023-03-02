/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:23 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/01 22:54:01 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

public:
		Zombie( void );

		Zombie( std::string name );

		Zombie*	zombieHorde(int N, std::string name);

		void	setName(std::string name);

		~Zombie(void);
		void announce( void ) const;

private:
	std::string	_name;

};

Zombie* zombieHorde(int N, std::string name);

#endif