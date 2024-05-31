/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:39:11 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/30 14:08:27 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class	AAnimal {
	protected:
		std::string	type;
	public:
		AAnimal(void);
		AAnimal(const AAnimal &obj);
		AAnimal	&operator=(const AAnimal &obj);
		virtual ~AAnimal(void);
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
		virtual	void	setIdea(std::string newIdea);
		virtual	void	showIdeas(void);
};

#endif