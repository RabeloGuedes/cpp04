/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 23:54:31 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/01 23:56:58 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ICharacter.hpp>

ICharacter::ICharacter(void) {

}

ICharacter::ICharacter(const ICharacter &obj) {
	(void)obj;
}

ICharacter	&ICharacter::operator=(const ICharacter &obj) {
	if (this != &obj)
		(void)obj;
	return (*this);
}

ICharacter::~ICharacter(void) {

}