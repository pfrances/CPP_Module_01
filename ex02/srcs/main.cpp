/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:04 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 09:06:08 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {

	std::string	BrainSalutation = "HI THIS IS BRAIN";
	std::string	*stringPTR = &BrainSalutation;
	std::string	&stringREF = BrainSalutation;

	std::cout << "[str_address]		"<< &BrainSalutation << std::endl;
	std::cout << "[str_address_by_ptr]	"<< &(*stringPTR) << std::endl;
	std::cout << "[str_address_by_ref]	"<< &stringREF << std::endl;

	std::cout << "[str_variable]		"<< BrainSalutation << std::endl;
	std::cout << "[str_variable_by_ptr]	"<< *stringPTR << std::endl;
	std::cout << "[str_variable_by_ref]	"<< stringREF << std::endl;

	return (0);
}
