/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:17:02 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/02 17:15:27 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <AMateria.hpp>

class	IMateriaSource {
	public:
		virtual	~IMateriaSource(void) {};
		virtual void		learnMateria(AMateria *m) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif