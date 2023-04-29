/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:39:48 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/29 17:43:58 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;  
}

const std::string&	Warlock::getName(void) const
{
	return (this->name);
}

const std::string&	Warlock::getTitle(void) const
{
	return (this->title);
}

void	Warlock::setTitle(const std::string& title)
{
	this->title = title;
}

void	Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	int i;
	int size;
	int flag;

	flag = 1;
	size = this->spells.size();
	i = 0;
	while (i < size)
	{
		if (this->spells[i]->getName() == spell->getName())
			flag = 0;
		i++;
	}
	if (flag)
		this->spells.push_back(spell->clone());
}

void	Warlock::forgetSpell(std::string name)
{
	std::vector<ASpell *>::iterator		it;

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

void	Warlock::launchSpell(std::string name,const ATarget& target)
{
	std::vector<ASpell *>::iterator	it;

	it = this->spells.begin();
	while (it != this->spells.end())
	{
		if ((*it)->getName() == name)
		{
			(*it)->launch(target);
			break;
		}
		it++;
	}
}
