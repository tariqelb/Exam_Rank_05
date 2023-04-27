/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:30:28 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/27 18:17:35 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock
{
	private:
		std::string		name;
		std::string		title;
		Warlock(Warlock& rhs);
		Warlock&	operator=(Warlock& rhs);

	public:
		Warlock(const std::string& name, const std::string& title);
	//	Warlock(Warlock& rhs) = delete;
	//	Warlock&	operator=(Warlock& rhs) = delete;
		~Warlock();

		const std::string&	getName(void) const;
		const std::string&	getTitle(void) const;
		void				setTitle(const std::string& title);
		void				introduce(void) const;
};

#endif
