/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:30:28 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/29 13:43:09 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		std::string		name;
		std::string		title;
		Warlock(Warlock& rhs); //prevent compiler from create copy constructor
		Warlock&	operator=(Warlock& rhs); // prevent compiler from create copy assignment

	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();

		const std::string&	getName(void) const;
		const std::string&	getTitle(void) const;
		void				setTitle(const std::string& title);
		void				introduce(void) const;

		void				learnSpell(ASpell* speel);
		void				forgetSpell(std::string name);
		void				launchSpell(std::string name, ATarget& target);
};

#endif
