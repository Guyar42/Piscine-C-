/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:12:53 by guyar             #+#    #+#             */
/*   Updated: 2023/01/25 12:43:32 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>


class Contact {
	public:

	Contact( void );
	~Contact( void );
	
	int getIndex(void) const;
	void setInfo(int i);
	void getName() const;
	void getInfo() const;
	void setInfoEmpty(int i);
	
	private:
	
	int	index;
	std::string FirstName;
	std::string LasteName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
};



#endif