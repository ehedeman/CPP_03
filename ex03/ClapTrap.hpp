/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:13:18 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/20 14:19:23 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header protection
#pragma once

#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:

	std::string	name;
	unsigned int		hit_p;		//hit points
	unsigned int		energy_p;	//energy points
	unsigned int		attack_d;	//attack demage

public:

	//constructors
						ClapTrap( void );
						ClapTrap( std::string name );
						ClapTrap( const ClapTrap &copy );
	//deconstructor
	virtual				~ClapTrap( void );
	
	//overload assignment operator
	ClapTrap			&operator=(const ClapTrap &clap);

	//get-/set-functions
	void				setHp(unsigned int hp);
	void				setEp(unsigned int ep);
	void				setaD(unsigned int ad);
	void				setName( std::string name );
	std::string			getName( void );
	unsigned int		getHp( void );
	unsigned int		getEp( void );
	unsigned int		getaD( void );

	//functions
	void				attack(const std::string &target);
	void				takeDemage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	
	void				printHP( void );
};


#endif