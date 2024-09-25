/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:46:56 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/25 14:01:14 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap( void ): ClapTrap("default_clap_name")
{
	this->name			= "default";
	this->ScavTrap::energy_p = 50;
	this->hit_p			= FragTrap::hit_p;	//FragTrap HP = 100
	this->energy_p		= ScavTrap::energy_p;	//ScavTrap EP = 50
	this->attack_d		= FragTrap::attack_d;	//FragdTrap AD = 30
	this->guarding_gate = false;
	std::cout << "Diamond-Default Constructor called for " <<
	this->name << "." << std::endl;
}

DiamondTrap::DiamondTrap( std::string _name ): ClapTrap(_name + "_clap_name")
{
	this->ScavTrap::energy_p = 50;
	this->name			= _name;
	this->hit_p			= FragTrap::hit_p;	//FragTrap HP = 100
	this->energy_p		= ScavTrap::energy_p;	//ScavTrap EP = 50
	this->attack_d		= FragTrap::attack_d;	//FragdTrap AD = 30
	this->guarding_gate = false;
	std::cout << "Diamond-Name-Based Constructor called for " <<
	this->name << "." << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy ): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this 				= copy;
	std::cout << "Diamond-copy constructor called for " <<
	this->name << "." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond-Destrucor called for " << this->name <<
	"." << std::endl;
}

DiamondTrap		&DiamondTrap::operator=(const DiamondTrap &dia)
{
	this->name			= dia.name;
	this->hit_p			= dia.hit_p;
	this->energy_p		= dia.energy_p;
	this->attack_d		= dia.attack_d;
	this->guarding_gate	= dia.guarding_gate;
	std::cout << "Diamond-Assignment operator called for " <<
	this->name << "." << std::endl;
	return (*this);
}

void			DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap Name: "	<< this->name		<<
	std::endl << "ClapTrap Name "		<< ClapTrap::name	<<
	std::endl;
}