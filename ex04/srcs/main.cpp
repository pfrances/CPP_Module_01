/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:38:04 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 21:15:35 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int	main( int argc, char *argv[] ) {

	if ( argc != 4)
	{
		std::cout << "This need three arguments:\n	1) filename\n	2) s1\n	3) s2" << std::endl;
		return (1);
	}

	std::string inputFileName = argv[1];
	std::string fileContent = readFile(inputFileName);
	if (fileContent == "") {
		return (2);
	}

	fileContent = replacePattern(fileContent, argv[2], argv[3]);

	if (writeFile(inputFileName.append(".replace"), fileContent) == false) {
		return (3);
	}

	return (0);
}
