/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:38:54 by guyar             #+#    #+#             */
/*   Updated: 2023/01/25 12:43:21 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H


#include "Contact.hpp"

class PhoneBook {
	public:
	
	PhoneBook( void );
	~PhoneBook( void );
	
	int getContactsIndex(int i) const;
	int getTypedIndexInt() const;
	int checkValideTypedIndex() const;
	int ValideTypedIndex() const;
	void setInfoContacts(int i);
	void getAllInfoContact(int i) const;
	void getContactsName(int i) const;
	void setTypedIndex();
	void setTypedIndexInt();
	void setValideTypedIndexEmpty();
	void setContactInfoEmpty(int i);
	std::string getTypedIndex() const;
	
	
	private:
	
	Contact contacts[8];
	std::string typedIndex;
	int typeIndexInt;
};

#endif