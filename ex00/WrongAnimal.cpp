/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:43:24 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/28 08:16:34 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal(void) {
	type = "None";
	std::cout << "WrongAnimal " << type << " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
	type = obj.type;
	std::cout << "WrongAnimal " << type << " copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj) {
	if (this != &obj)
		type = obj.type;
	std::cout << "WrongAnimal " << type << " copy assignment called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal " << type << " destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Generic WrongAnimal does not make sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (type);
}