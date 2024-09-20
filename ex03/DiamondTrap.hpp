/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:47:01 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/20 14:35:36 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP

#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		name;
public:
					DiamondTrap( void );
					DiamondTrap( std::string name );
					DiamondTrap( const DiamondTrap &copy );
					
	virtual			~DiamondTrap();
	DiamondTrap		&operator=(const DiamondTrap &dia);
	
	void			attack( std::string &target );
	void			whoAmI( void );
};


#endif