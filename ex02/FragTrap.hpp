/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:05:50 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/20 13:13:22 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header protection
#pragma once

#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	
public:
				FragTrap( void );
				FragTrap( std::string name );
				FragTrap( const FragTrap &copy );
				~FragTrap();
	
	FragTrap	&operator=( const FragTrap &frag );
	
	void		highFiveGuys( void );
};

#endif