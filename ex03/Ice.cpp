/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:30:11 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/03 12:54:22 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice(void) {
	type = "ice";
}

Ice::Ice(const Ice &obj) {
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