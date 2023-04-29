/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:09:07 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/29 13:58:18 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(const std::string& type)
{
	std::cout << "ATarget constructor called" << std::endl;
	this->type = type;
}

const std::string&	ATarget::getType(void) const
{
	return (this->type);
}

ATarget::~ATarget()
{
	std::cout << "ATarget destructor called"<< std::endl;
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->getType() << " has been " << spell.getEffects() << std::endl;
}
