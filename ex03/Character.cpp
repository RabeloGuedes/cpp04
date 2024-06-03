/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:05:34 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/03 12:54:00 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>
# include <AMateria.hpp>

Character::Character(void) {
	_unequiped = NULL;
	_unequipedSize = 0;
	_unequipedLen = 0;
	for (size_t i = 0; i < 4; i++) {
		_slots[i] = NULL;
	}
}

Character::Character(const Character &obj) {
	_name = obj._name;
	_unequiped = NULL;
	_unequipedSize = 0;
	_unequipedLen = 0;
	for (size_t i = 0; i < 4; i++) {
		if (obj._slots[i])
			_slots[i] = obj._slots[i]->clone();
		else
			_slots[i] = NULL;
	}
}

Character::Character(std::string name) {
	_name = name;
	_unequiped = NULL;
	_unequipedSize = 0;
	_unequipedLen = 0;
	for (size_t i = 0; i < 4; i++) {
		_slots[i] = NULL;
	}
}

Character	&Character::operator=(const Character &obj) {
	if (this != &obj) {
		_name = obj._name;
		_unequiped = NULL;
		_unequipedSize = 0;
		_unequipedLen = 0;
		for (size_t i = 0; i < 4; i++) {
			delete _slots[i];
			if (obj._slots[i])
				_slots[i] = obj._slots[i]->clone();
			else
				_slots[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character(void) {
	for (size_t i = 0; i < 4; i++) {
		for (size_t j = i + 1; j < 4; j++) {
			if (_slots[i] == _slots[j])
				_slots[j] = NULL;
		}
		delete _slots[i];
	}
	for (size_t i = 0; i < _unequipedLen; i++) {
		delete _unequiped[i];
	}
	delete []_unequiped;
}

std::string const &Character::getName(void) const {
	return (_name);
}

void	Character::equip(AMateria *m) {
	size_t	i = 0;

	while (i < 4 && _slots[i] != NULL)
		i++;
	if (i < 4) {
		_slots[i] = m;
		for (size_t i = 0; i < _unequipedLen; i++) {
			if (_unequiped[i] == m)
				_unequiped[i] = NULL;
		}
	}
	else
		std::cout << "Inventory is full, can not equipe: " << m->getType() << std::endl;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	if (!_slots[idx]) {
		std::cout << "Trying to unequip AMateria of an empty slot" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (_slots[i] == _slots[idx] && i != idx) {
			_slots[idx] = NULL;
			return ;
		}
	}
	for (size_t i = 0; i < _unequipedLen; i++) {
		if (_unequiped[i] == _slots[idx]) {
			_slots[idx] = NULL;
			return ;
		}
	}
	if (_unequipedSize <= _unequipedLen) {
		AMateria	**newUnequipedArray = new AMateria *[_unequipedSize + 4];
		for (size_t i = 0; i < _unequipedSize; i++) {
			newUnequipedArray[i] = _unequiped[i];
			_unequiped[i] = NULL;
		}
		_unequipedSize += 4;
		delete []_unequiped;
		_unequiped = newUnequipedArray;
	}
	_unequiped[_unequipedLen] = _slots[idx];
	_unequipedLen++;
	_slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return ;
	if (!_slots[idx]) {
		std::cout << "Trying to use AMateria of an empty slot" << std::endl;
		return ;
	}
	_slots[idx]->use(target);
}
