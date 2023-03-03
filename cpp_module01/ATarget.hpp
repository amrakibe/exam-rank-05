/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:29:26 by amrakibe          #+#    #+#             */
/*   Updated: 2023/03/02 17:56:58 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ATarget
{
    private:
        std::string type;
    public:
        virtual ~ATarget();
        const std::string  &getType() const;
        ATarget *clone() const;
        void setTaype(const std::string &type)
};
