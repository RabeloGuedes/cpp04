/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:39:11 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/29 21:19:51 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal {
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal &obj);
		Animal	&operator=(const Animal &obj);
		virtual ~Animal(void);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		virtual	void	setIdea(std::string newIdea);
		virtual	void	showIdeas(void);
};

#endif