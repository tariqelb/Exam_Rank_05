/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:55:22 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/29 17:51:51 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects)
{
	this->name = name;
	this->effects = effects;
}

std::string	ASpell::getName(void) const
{
	return (this->name);
}

std::string	ASpell::getEffects(void) const
{
	return (this->effects);
}

ASpell::~ASpell()
{
}

void	ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}

