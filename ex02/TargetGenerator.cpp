/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:16:52 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/30 19:04:41 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
}

void		TargetGenerator::learnTargetType(ATarget* target)
{
	int	i;
	int size;

	i = 0;
	size = this->target.size();
	while (i < size)
	{
		if (this->target[i]->getType() == target->getType())
			return ;
		i++;
	}
	this->target.push_back(target->clone());
}

void		TargetGenerator::forgetTargetType(std::string const& type)
{
	std::vector<ATarget *>::iterator	it;

	it = this->target.begin();
	while (it != this->target.end())
	{
		if ((*it)->getType() == type)
		{
			delete (*it);
			this->target.erase(it);
			break;
		}
		it++;
	}
}

ATarget*	TargetGenerator::createTarget(std::string const& type)
{
	int i;
	int size;

	i = 0;
	size = this->target.size();
	while (i < size)
	{
		if (this->target[i]->getType() == type)
			return (this->target[i]->clone());
		i++;
	}
	return (nullptr);
}
