/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:10:38 by amrakibe          #+#    #+#             */
/*   Updated: 2023/03/03 11:22:18 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(const ASpell &obj);
		ASpell&operator=(const ASpell &obj);	
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		const std::string &getName() const;
		const  std::string &getEffects() const;
		virtual ASpell *clone() const = 0;
};
