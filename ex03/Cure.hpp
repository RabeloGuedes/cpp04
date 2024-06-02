/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:50:50 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/01 23:51:05 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <AMateria.hpp>

class	Cure: public AMateria {
	public:
		Cure(void);
		Cure(const Cure &obj);
		Cure		&operator=(const Cure &obj);
		~Cure(void);
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif