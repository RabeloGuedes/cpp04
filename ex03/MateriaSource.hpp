/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:45:21 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/02 17:15:23 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <IMateriaSource.hpp>

class	MateriaSource: public IMateriaSource {
	private:
		AMateria	*_slots[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &obj);
		MateriaSource	&operator=(const MateriaSource &obj);
		~MateriaSource(void);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const &type);
};

#endif