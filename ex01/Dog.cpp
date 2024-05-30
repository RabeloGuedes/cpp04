/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:44:43 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/29 23:48:12 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(void) {
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	_b = new Brain();
}

Dog::Dog(const Dog &obj) {
	type = obj.type;
	std::cout << "Dog copy constructor called" << std::endl;
	delete _b;
	_b = new Brain(*obj._b);
}

Dog	&Dog::operator=(const Dog &obj) {
	if (this != &obj) {
		type = obj.type;
		delete _b;
		_b = new Brain(*obj._b);
	}
	std::cout << "Dog copy assignment called" << std::endl;
	return (*this);
}

Dog::~Dog(void) {
	delete _b;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog makes sound: Auuuu Auuuu" << std::endl;
}

void	Dog::setIdea(std::string newIdea) {
	_b->setIdea(newIdea);
}

void	Dog::showIdeas(void) {
	std::cout << "Dog's brain address: " << _b << std::endl;
	for (size_t i = 0; i < _b->getSize(); i++) {
		std::cout << (*_b)[i] << std::endl;
	}
}