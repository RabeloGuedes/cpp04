/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:17:35 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/29 23:47:16 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain {
	private:
		std::string	_ideas[100];
		size_t		_index;
		size_t		_size;
	public:
		Brain(void);
		Brain(const Brain &obj);
		Brain		&operator=(const Brain &obj);
		~Brain(void);
		void		setIdea(std::string newIdea);
		size_t		getSize(void) const;
		std::string	operator[](size_t index);
};

#endif