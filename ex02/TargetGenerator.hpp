/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:10:39 by tel-bouh          #+#    #+#             */
/*   Updated: 2023/04/30 18:55:41 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	private:
		std::vector<ATarget *> target;

		TargetGenerator(TargetGenerator& rhs);
		TargetGenerator&	operator=(TargetGenerator& rhs);
	
	public:
		TargetGenerator();
		~TargetGenerator();

		void		learnTargetType(ATarget* target);
		void		forgetTargetType(std::string const&	type);
		ATarget*	createTarget(std::string const&	type);
};

#endif
