/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:42:41 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/27 20:08:38 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>

class	Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog &obj);
		Dog	&operator=(const Dog &obj);
		~Dog(void);
		void	makeSound(void) const;
};

#endif