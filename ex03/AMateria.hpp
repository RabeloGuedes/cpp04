/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 08:46:43 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/02 15:36:14 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <iostream>
# include <ICharacter.hpp>

class	AMateria {
	protected:
		std::string	type;
	public:
		AMateria(void);
		AMateria(const AMateria &obj);
		AMateria(std::string const &type);
		AMateria			&operator=(const AMateria &obj);
		virtual ~AMateria(void);
		std::string const	&getType(void) const;
		virtual	AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif