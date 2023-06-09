/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:56:03 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/29 17:49:38 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
//	std::cout << "Fwoosh constructor called" << std::endl;
}

Fwoosh::~Fwoosh()
{
//	std::cout << "Fwoosh destructor called" << std::endl;
}

Fwoosh*	Fwoosh::clone(void) const
{
	Fwoosh* obj = new Fwoosh();
	return (obj);
}
