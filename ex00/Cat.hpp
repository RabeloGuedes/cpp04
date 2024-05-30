/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:47:23 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/27 20:08:27 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>

class	Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat &obj);
		Cat	&operator=(const Cat &obj);
		~Cat(void);
		void		makeSound(void) const;
};

#endif