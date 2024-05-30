/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:37:59 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/29 23:48:59 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(void) {
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	_b = new Brain();
}

Cat::Cat(const Cat &obj) {
	std::cout << "Cat copy constructor called" << std::endl;
	type = obj.type;
	delete _b;
	_b = new Brain(*obj._b);
}

Cat	&Cat::operator=(const Cat &obj) {
	std::cout << "Cat copy assignment called" << std::endl;
	if (this != &obj) {
		type = obj.type;
		delete _b;
		_b = new Brain(*obj._b);
	}
	return (*this);
}

Cat::~Cat(void) {
	delete _b;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const{
	std::cout << "Cat makes sound: Meoooow Meoooow" << std::endl;
}

void	Cat::setIdea(std::string newIdea) {
	_b->setIdea(newIdea);
}

void	Cat::showIdeas(void) {
	std::cout << "Cat's brain address: " << _b << std::endl;
	for (size_t i = 0; i < _b->getSize(); i++) {
		std::cout << (*_b)[i] << std::endl;
	}
}