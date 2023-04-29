/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:01:02 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/29 14:59:25 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;
class ATarget
{
	private:
		std::string	type;

	public:
		ATarget(const std::string& type);
		virtual	~ATarget();

		const std::string&		getType(void) const;
		virtual ATarget*		clone(void) const = 0;
		void					getHitBySpell(const ASpell& spell) const; // try to remove the const
};

#endif
