/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:43:38 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/20 13:44:16 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap()
{
	this->guarding_gate	= false;
	this->name			= "default";
	this->hit_p			= 100;
	this->energy_p		= 50;
	this->attack_d		= 20;
	std::cout << "Scav-Default constructor called for " << this->name << "." << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap ( name )
{
	this->guarding_gate = false;
	this->hit_p			= 100;
	this->energy_p		= 50;
	this->attack_d		= 20;
	this->name			= name;
	std::cout << "Scav-Name-Based Constructor called for " << this->name << "." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &copy): ClapTrap( copy )
{
	*this				= copy;
	std::cout << "Scav-copy constructor called for " << this->name << "." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav-Destrucor called for " << this->name << "." << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &sca)
{
	this->guarding_gate	= sca.guarding_gate;
	this->name			= sca.name;
	this->hit_p			= sca.hit_p;
	this->energy_p		= sca.energy_p;
	this->attack_d		= sca.attack_d;
	std::cout << "Scav-Assignment operator called for " << this->name << "." << std::endl;
	return (*this);
}

void		ScavTrap::attack( const std::string &target )
{
	if (!this->energy_p)
	{
		std::cout << "Oh no! " << this->name << "has no EP left " << 
		"to attack!" << std::endl;
		return ;
	}
	this->energy_p--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << 
	", causing " << this->attack_d << " points of damage!" << std::endl;
}

void		ScavTrap::guardGate( void )
{
	this->guarding_gate = !this->guarding_gate;
	if (this->guarding_gate)
		std::cout << this->name << " is now guarding the gate!" << std::endl;
	else if (!this->guarding_gate)
		std::cout << this->name << " is no longer guarding the gate!" << std::endl;
}