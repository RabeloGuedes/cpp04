/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:45:48 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/01 17:41:55 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <AMateria.hpp>

class	Ice: public AMateria {
	public:
		Ice(void);
		Ice(const Ice &obj);
		Ice			&operator=(const Ice &obj);
		~Ice(void);
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif