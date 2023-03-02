/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:40:25 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 23:15:20 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

}

Harl::~Harl( void ) {

}

void	Harl::debug( void ) const {
	std::cout	<< "[DEBUG]		"
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
				<< "I really do!" << std::endl;
}

void	Harl::info( void ) const {
	std::cout	<< "[INFO]		"
				<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn't putenough bacon in my burger! "
				<< "If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ) const{
	std::cout	<< "[WARNING]	"
				<< "I think I deserve to have some extra bacon for free. "
				<< "I've been coming for years whereas you started working here since last month."
				<< std::endl;
}

void	Harl::error( void ) const {
	std::cout	<< "[ERROR]		"
				<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level ) const {
	std::string name[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*func[])() const = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for (int i = 0; i < 4; i++)
	{
		if (level == name[i]) {
			(this->*func[i])();
			return ;
		}
	}
	std::cout << "	[ Probably complaining about insignificant problems ]" << std::endl;
}
