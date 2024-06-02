/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:42:16 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/03 00:19:39 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <MateriaSource.hpp>

int	main(void) {
	// AMateria	*ice = new Ice();
	// AMateria	*cure = new Cure();
	// Character	fighter("Kakarott");

	// Ice	a;
	// AMateria	*b = a.clone();
	// AMateria	*c = cure->clone();
	// std::cout << "type: " << b->getType() << std::endl;
	// std::cout << "type: " << c->getType() << std::endl;
	// delete ice;
	// delete cure;
	// delete b;
	// delete c;
	// {
	// 	AMateria	*floor[10];

	// 	for (size_t i = 0; i < (sizeof(floor) / sizeof(*floor) / 2); i++) {
	// 		floor[i] = new Ice();
	// 	}

	// 	for (size_t i = (sizeof(floor) / sizeof(*floor) / 2); i < (sizeof(floor) / sizeof(*floor)); i++) {
	// 		floor[i] = new Cure();
	// 	}

	// 	ICharacter	*fighter = new Character("Kakarott");
	// 	ICharacter	*enemy = new Character("Vegetta");

	// 	fighter->equip(floor[2]);
	// 	fighter->equip(floor[8]);

	// 	fighter->use(0, *enemy);
	// 	fighter->use(3, *enemy);

	// 	fighter->unequip(0);
	// 	fighter->use(0, *enemy);
	// 	fighter->unequip(1);

	// 	delete fighter;
	// 	delete enemy;

	// 	for (size_t i = 0; i < sizeof(floor) / sizeof(*floor); i++) {
	// 		delete floor[i];
	// 	}
	// }
	{
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		AMateria* tmp2;
	
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp2 = src->createMateria("cure");
		me->equip(tmp2);
		ICharacter* bob = new Character("bob");

		me->equip(tmp);
		me->equip(tmp2);
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
}