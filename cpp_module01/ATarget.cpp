/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:44:05 by amrakibe          #+#    #+#             */
/*   Updated: 2023/03/03 15:20:30 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget *ATarget::clone() const
{
    return new ATarget(*this);
}

const std::string &ATarget::getType() const
{
    return(this->type);
}

void ATarget::setTaype(const std::string &type)
{
    this->type = type;
}

ATarget::~ATarget(){ 
}
