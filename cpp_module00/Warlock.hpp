/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:44:56 by amrakibe          #+#    #+#             */
/*   Updated: 2023/03/02 09:36:53 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(const Warlock &obj);
        Warlock&operator=(const Warlock &obj);
    public:
        ~Warlock();
        Warlock(const std::string  &name, const std::string &Title);
        void setTitle(const std::string &name);
        void    introduce() const;
        const std::string &getName() const;
        const std::string &getTitle() const;
};