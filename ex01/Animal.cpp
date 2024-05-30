/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:43:24 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/29 23:16:18 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal(void) {
	type = "None";
	std::cout << "Animal " << type << " default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj) {
	type = obj.type;
	std::cout << "Animal " << type << " copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &obj) {
	if (this != &obj)
		type = obj.type;
	std::cout << "Animal " << type << " copy assignment called" << std::endl;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal " << type << " destructor called" << std::endl;
}

void	Animal::makeSound(void) const {
	std::cout << "Generic animal does not make sound" << std::endl;
}

std::string	Animal::getType(void) const {
	return (type);
}

void	Animal::setIdea(std::string newIdea) {
	(void)newIdea;
}

void	Animal::showIdeas(void) {

}