/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:10:38 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/30 17:58:38 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"

class ASpell;

class SpellBook
{
	private:
		std::vector<ASpell *>	spells;

		SpellBook(SpellBook& rhs);
		SpellBook&	operator=(SpellBook& rhs);

	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const& name);
		ASpell*	createSpell(std::string const& name);
};

#endif
