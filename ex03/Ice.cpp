/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:30:11 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/02 12:21:00 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice(void) {
	type = "ice";
}

Ice::Ice(const Ice &obj): AMateria() {
	type = obj.type;
}

Ice	&Ice::operator=(const Ice &obj) {
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Ice::~Ice(void) {

}

AMateria	*Ice::clone(void) const {
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}