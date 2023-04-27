/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:39:05 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/27 18:06:50 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int main()
{
	{
	  Warlock const richard("Richard", "Mistress of Magma");
	  richard.introduce();
	  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	  Warlock* jack = new Warlock("Jack", "the Long");
	  jack->introduce();
	  jack->setTitle("the Mighty");
	  jack->introduce();

	  delete jack;
	}
//	Warlock bob;
//	Warlock bob("Bob", "the magnificent");
//	Warlock jim("Jim", "the nauseating");
//	bob = jim;
//	Warlock jack(jim);
  return (0);
}
