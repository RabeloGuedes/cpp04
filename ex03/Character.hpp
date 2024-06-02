/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:59:33 by arabelo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:46:40 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <ICharacter.hpp>

class	Character: public ICharacter {
	private:
		AMateria	**_unequiped;
		AMateria	*_slots[4];
		size_t		_unequipedSize;
		size_t		_unequipedLen;
		std::string	_name;
	public:
		Character(void);
		Character(const Character &obj);
		Character(std::string name);
		Character			&operator=(const Character &obj);
		~Character(void);
		std::string const	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif