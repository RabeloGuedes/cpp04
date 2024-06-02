/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:46:13 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/01 17:00:27 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria(void) {

}

AMateria::AMateria(const AMateria &obj) {
	type = obj.type;
}

AMateria::AMateria(std::string const &type) {
	this->type = type;
}

AMateria	&AMateria::operator=(const AMateria &obj) {
	if (this != &obj)
		type = obj.type;
	return (*this);
}

AMateria::~AMateria(void) {

}

std::string const	&AMateria::getType(void) const {
	return (type);
}

void	AMateria::use(ICharacter &target) {
	(void)target;
}