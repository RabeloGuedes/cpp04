/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:53:27 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/02 20:57:23 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>
#include <Ice.hpp>
#include <Cure.hpp>

MateriaSource::MateriaSource(void) {
	for (size_t	i = 0; i < 4; i++) {
		_slots[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &obj): IMateriaSource() {
	for (size_t	i = 0; i < 4; i++) {
		_slots[i] = obj._slots[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj) {
	if (this != &obj) {
		for (size_t	i = 0; i < 4; i++) {
			delete _slots[i];
			_slots[i] = obj._slots[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	for (size_t	i = 0; i < 4; i++) {
		for (size_t j = i + 1; j < 4; j++) {
			if (_slots[i] == _slots[j])
				_slots[j] = NULL;
		}
		delete _slots[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m) {
	size_t	i = 0;

	while (i < 4 && _slots[i] != NULL)
		i++;
	if (i > 3)
		return ;
	_slots[i] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	size_t	i = 0;

	while (i < 4) {
		if (_slots[i] && _slots[i]->getType() == type) {
			return (_slots[i]->clone());
		}
		i++;
	}
	return (NULL);
}
