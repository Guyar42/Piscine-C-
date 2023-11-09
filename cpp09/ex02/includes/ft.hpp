/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:16:09 by guyar             #+#    #+#             */
/*   Updated: 2023/10/11 12:20:48 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <cstdlib>

int ft_count(std::string str, char c);
void strIsDigit(std::string const & str);
void strIsPositive(std::string const & str);
void PmergeMe(char **av);