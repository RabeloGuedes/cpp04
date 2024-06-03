/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:48:40 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/03 11:53:04 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <Dog.hpp>
#include <sstream>

int	main(void) {
	{
		std::cout << std::endl << std::endl;
		AAnimal	*arr[4];
		for (size_t i = 0; i < (sizeof(arr) / sizeof(arr[0]) / 2); i++) {
			arr[i] = new Dog();
		}

		for (size_t i = (sizeof(arr) / sizeof(arr[0]) / 2); i < sizeof(arr) / sizeof(arr[0]); i++) {
			arr[i] = new Cat();
		}

		for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
			std::cout << &arr[i] << std::endl;
			std::stringstream	s;
			s << i;
			for (size_t j = 0; j < 100; j++) {
				std::stringstream	r;
				r << j;
				arr[i]->setIdea(s.str() + ": " + "idea " + r.str());
			}
		}

		std::cout << std::endl << std::endl;
		std::cout << std::endl << std::endl;
		for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
			arr[i]->showIdeas();
		}

		for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
			delete arr[i];
		}
	}
	{
		std::cout << std::endl << std::endl;
		Cat	*a = new Cat;
		for (size_t j = 0; j < 100; j++) {
			std::stringstream	s;
			s << j;
			a->setIdea("idea " + s.str());
		}

		a->showIdeas();

		std::cout << std::endl << std::endl;
		Cat	b = *a;

		delete a;
		std::cout << std::endl << std::endl;
		b.showIdeas();
	}
	return (0);
}