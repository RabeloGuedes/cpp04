/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:43:24 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/30 14:08:09 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>

AAnimal::AAnimal(void) {
	type = "None";
	std::cout << "AAnimal " << type << " default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj) {
	type = obj.type;
	std::cout << "AAnimal " << type << " copy constructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &obj) {
	if (this != &obj)
		type = obj.type;
	std::cout << "AAnimal " << type << " copy assignment called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal " << type << " destructor called" << std::endl;
}

void	AAnimal::makeSound(void) const {
	std::cout << "Generic animal does not make sound" << std::endl;
}

std::string	AAnimal::getType(void) const {
	return (type);
}

void	AAnimal::setIdea(std::string newIdea) {
	(void)newIdea;
}

void	AAnimal::showIdeas(void) {

}