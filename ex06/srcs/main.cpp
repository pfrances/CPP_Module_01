/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:04 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 23:19:06 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char *argv[] )
{
	Harl Harl_2;

	if (argc < 2) {
		std::cout << "Harl is pretty calm today." << std::endl;
		return (0);
	} else if (argc > 2) {
		std::cout << "Too much complaining. Please be reasonable Harl." << std::endl;
		return (0);
	}

	Harl_2.complain(argv[1]);

	return (0);
}
