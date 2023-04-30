/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:52:55 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/30 19:05:12 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
	int i;
	int size;

	i = 0;
	size = this->spells.size();
	while (i < size)
	{
		delete spells[i];
		i++;
	}
}

void	SpellBook::learnSpell(ASpell* spell)
{
	int i;
	int size;

	i = 0;
	size = this->spells.size();
	while (i < size)
	{
		if (this->spells[i]->getName() == spell->getName())
			return ;
		i++;
	}
	this->spells.push_back(spell->clone());
}

void	SpellBook::forgetSpell(std::string const& name)
{
	std::vector<ASpell *>::iterator	it;

	it = this->spells.begin();
	while (it != this->spells.end())
	{
		if ((*it)->getName() == name)
		{
			delete (*it);
			this->spells.erase(it);
			break;
		}
		it++;
	}
}

ASpell*	SpellBook::createSpell(std::string const& name)
{
	int i;
	int size;

	i = 0;
	size = this->spells.size();
	while (i < size)
	{
		if (this->spells[i]->getName() == name)
			return (this->spells[i]->clone());
		i++;
	}
	return (nullptr);
}
