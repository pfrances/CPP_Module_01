/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:23 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 22:12:29 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

public:
			Harl( void );
			~Harl( void );

	void	complain( std::string level ) const;

private:
	void	debug( void ) const;
	void	info( void ) const;
	void	warning( void ) const;
	void	error( void ) const;

};

#endif