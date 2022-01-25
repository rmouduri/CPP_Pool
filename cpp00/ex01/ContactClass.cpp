/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouduri <rmouduri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:25:55 by rmouduri          #+#    #+#             */
/*   Updated: 2022/01/25 16:10:06 by rmouduri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

const std::string Contact::getFirstName(void) const
{
	return this->_firstName;
}

const std::string Contact::getLastName(void) const
{
	return this->_lastName;
}

const std::string Contact::getNickname(void) const
{
	return this->_nickname;
}

const std::string Contact::getPhoneNumber(void) const
{
	return this->_phoneNumber;
}

const std::string Contact::getDarkestSecret(void) const
{
	return this->_darkestSecret;
}

void Contact::setFirstName(std::string s)
{
	this->_firstName = s;
}

void Contact::setLastName(std::string s)
{
	this->_lastName = s;
}

void Contact::setNickname(std::string s)
{
	this->_nickname = s;
}

void Contact::setPhoneNumber(std::string s)
{
	this->_phoneNumber = s;
}

void Contact::setDarkestSecret(std::string s)
{
	this->_darkestSecret = s;
}
