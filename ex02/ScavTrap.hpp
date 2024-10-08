/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:43:41 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/20 12:06:37 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

	bool 		guarding_gate;

public:

				ScavTrap( void );
				ScavTrap( const ScavTrap &copy );
				ScavTrap( std::string name );

				~ScavTrap();
	
	ScavTrap	&operator=(const ScavTrap &sca);
	
	void		attack(const std::string &target);
	void		guardGate( void );
};


#endif