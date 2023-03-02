/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:15:38 by pfrances          #+#    #+#             */
/*   Updated: 2023/03/02 21:31:54 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_HPP
# define INCLUDES_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

bool			writeFile(const std::string& filename, const std::string& content);
std::string		readFile(const std::string& filename);
std::string&	replacePattern(std::string& fileContent, std::string toReplace, std::string replaceBy);

#endif