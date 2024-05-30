/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:47:23 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/28 08:18:49 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <WrongAnimal.hpp>

class	WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(const WrongCat &obj);
		WrongCat	&operator=(const WrongCat &obj);
		~WrongCat(void);
};

#endif