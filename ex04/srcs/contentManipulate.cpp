/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contentManipulate.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:45:49 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 21:34:24 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

std::string&	replacePattern(std::string& fileContent, std::string toReplace, std::string replaceBy) {
	size_t index = fileContent.find(toReplace);

	while (index != std::string::npos)
	{
		fileContent.erase(index, toReplace.length());
		fileContent.insert(index, replaceBy);
		index = fileContent.find(toReplace, index + replaceBy.length());
	}

	return fileContent;
}
