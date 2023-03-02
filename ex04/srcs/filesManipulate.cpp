/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesManipulate.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:46:16 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 21:03:54 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

std::string readFile(const std::string& filename)
{
	std::ifstream file(filename.c_str());

	if (!file)
	{
		std::cerr << "Unable to open '" << filename << "'." << std::endl;
		return "";
	}

	std::stringstream buffer;
	buffer << file.rdbuf();

	file.close();

	return buffer.str();
}

bool writeFile(const std::string& filename, const std::string& content)
{
	std::ofstream file(filename.c_str());

	if (!file)
	{
		std::cerr << "Unable to open '" << filename << "'." << std::endl;
		return false;
	}

	file << content;

	file.close();

	return true;
}
