/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:42:16 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/03 12:56:58 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <MateriaSource.hpp>

int	main(void) {
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