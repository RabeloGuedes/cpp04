/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:55:01 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/02 15:43:35 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
class	AMateria;

class	ICharacter {
	public:
		ICharacter(void);
		ICharacter(const ICharacter &obj);
		ICharacter	&operator=(const ICharacter &obj);
		virtual	~ICharacter(void);
		virtual	std::string const &	getName(void) const = 0;
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter &target) = 0;
};

#endif