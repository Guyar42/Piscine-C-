/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:56:24 by guyar             #+#    #+#             */
/*   Updated: 2023/09/04 19:36:59 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <map>
#include <string>
#include <iostream>
#include <cstdlib>

bool strIsDigit(std::string const & str);
int ft_count(std::string str, char c);
bool dateParse(std::string str);
bool valParse(std::string insecond);