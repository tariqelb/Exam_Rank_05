/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:10:35 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/29 13:49:29 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
	std::cout << "Dummy constructor called" << std::endl;
}

Dummy::~Dummy()
{
	std::cout << "Dummy destructor called" << std::endl;
}

Dummy*	Dummy::clone() const
{
	Dummy* obj = new Dummy();
	return (obj);
}
