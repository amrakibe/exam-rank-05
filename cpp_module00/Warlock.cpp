/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:40 by amrakibe          #+#    #+#             */
/*   Updated: 2023/03/02 09:36:57 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string   &name, const std::string  &Title)
{
    this->name = name;
    this->title = Title;
    std::cout <<this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

void    Warlock::setTitle(const std::string &title)
{
    this->title = title;
}

const std::string &Warlock::getName() const
{
    return (this->name);
}

const std::string &Warlock::getTitle() const
{
    return (this->title);
}

void Warlock::introduce()const
{
    std::cout << this->name<< ": I am " <<  this->name << "," << this->title << "!" << std::endl;
}