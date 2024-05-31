/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:48:40 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/31 08:13:40 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <Dog.hpp>

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
			for (size_t j = 0; j < 100; j++) {
				arr[i]->setIdea(std::to_string(i) + ": " + "idea " + std::to_string(j));
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
		Cat	*a = new Cat;
		for (size_t j = 0; j < 100; j++) {
			a->setIdea("idea " + std::to_string(j));
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