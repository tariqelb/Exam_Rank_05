/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:44:53 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/29 14:59:29 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;
class ASpell
{
	protected:
		std::string		name;
		std::string		effects;

	public:
		ASpell(const std::string& name, const std::string& effects);
		virtual	~ASpell();	

		std::string			getName(void) const;
		std::string			getEffects(void) const;
		virtual ASpell*		clone(void) const = 0;
		void				launch(const ATarget& target) const;
};

#endif
