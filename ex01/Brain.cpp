/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:22:38 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/30 00:00:20 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
	_index = 0;
	_size = 0;
}

Brain::Brain(const Brain &obj) {
	for (size_t i = 0; i < obj._size; i++) {
		_ideas[i] = obj._ideas[i];
	}
	_index = obj._index;
	_size = obj._size;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &obj) {
	if (this != &obj) {
		for (size_t i = 0; i < obj._size; i++) {
			_ideas[i] = obj._ideas[i];
		}
		_index = obj._index;
		_size = obj._size;
	}
	std::cout << "Brain copy assignment called" << std::endl;
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(std::string newIdea) {
	_ideas[_index] = newIdea;
	_index = (_index + 1) % 100;
	if (_size < 100)
		_size++;
}

std::string	Brain::operator[](size_t index) {
	if (index >= _size)
		return (_ideas[_size - 1]);
	return (_ideas[index]);
}

size_t	Brain::getSize(void) const {
	return (_size);
}