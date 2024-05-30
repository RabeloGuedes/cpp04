/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:47:23 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/29 21:11:08 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>
# include <Brain.hpp>

class	Cat: public Animal {
	private:
		Brain	*_b;
	public:
		Cat(void);
		Cat(const Cat &obj);
		Cat	&operator=(const Cat &obj);
		~Cat(void);
		void		makeSound(void) const;
		void	setIdea(std::string newIdea);
		void	showIdeas(void);
};

#endif