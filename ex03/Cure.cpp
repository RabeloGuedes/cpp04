/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:02:31 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/02 12:20:54 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure(void) {
	type = "cure";
}

Cure::Cure(const Cure &obj): AMateria() {
	type = obj.type;
}

Cure	&Cure::operator=(const Cure &obj) {
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Cure::~Cure(void) {

}

AMateria	*Cure::clone(void) const {
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}