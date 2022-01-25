/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouduri <rmouduri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:25:55 by rmouduri          #+#    #+#             */
/*   Updated: 2022/01/25 12:15:28 by rmouduri         ###   ########.fr       */
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
	return this->firstName;
}

const std::string Contact::getLastName(void) const
{
	return this->lastName;
}

const std::string Contact::getNickname(void) const
{
	return this->nickname;
}

const std::string Contact::getPhoneNumber(void) const
{
	return this->phoneNumber;
}

const std::string Contact::getDarkestSecret(void) const
{
	return this->darkestSecret;
}

void Contact::setFirstName(std::string s)
{
	this->firstName = s;
}

void Contact::setLastName(std::string s)
{
	this->lastName = s;
}

void Contact::setNickname(std::string s)
{
	this->nickname = s;
}

void Contact::setPhoneNumber(std::string s)
{
	this->phoneNumber = s;
}

void Contact::setDarkestSecret(std::string s)
{
	this->darkestSecret = s;
}
