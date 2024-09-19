/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:13:21 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/19 14:15:05 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

//constructors
ClapTrap::ClapTrap( const std::string name ): name(name)
{
	std::cout << "Constructor called." << std::endl;
	this->hit_p		= 10;
	this->energy_p	= 10;
	this->attack_d	= 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destrucor called." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

//overload operator
ClapTrap		&ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "Assignment operator called." << std::endl;
	this->name = clap.name;
	this->hit_p = clap.hit_p;
	this->energy_p = clap.energy_p;
	this->attack_d = clap.attack_d;
	return (*this);
}



//get-/set-functions
void				ClapTrap::setHp(unsigned int hp){this->hit_p = hp;}
void				ClapTrap::setEp(unsigned int ep){this->energy_p = ep;}
void				ClapTrap::setaD(unsigned int ad){this->attack_d = ad;}
std::string			ClapTrap::getName( void ){return (this->name);}
unsigned int		ClapTrap::getHp( void ){return (this->hit_p);}
unsigned int		ClapTrap::getEp( void ){return (this->energy_p);}
unsigned int		ClapTrap::getaD( void ){return (this->attack_d);}


//functions
void				ClapTrap::attack(const std::string &target)
{
	if (!this->energy_p)
	{
		std::cout << "Oh no! " << this->name << "has no EP left " << 
		"to attack!" << std::endl;
		return ;
	}
	this->energy_p--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << 
	", causing " << this->attack_d << " points of damage!" << std::endl;
}

void				ClapTrap::takeDemage(unsigned int amount)
{
	if (!this->hit_p)
	{
		std::cout << "Stop it! " << this->name << " is already dead!" << std::endl;
		return ;
	}
	if (this->hit_p - amount > 0)
		this->hit_p -= amount;
	else
		this->hit_p = 0;
	if (!this->hit_p)
	std::cout << "Oh no! " << this->name << " has died!" << std::endl;
}

void				ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->energy_p)
	{
		std::cout << "Oh no! " << this->name << "has no EP left " << 
		"to repair itseld!" << std::endl;
		return ;
	}
	this->hit_p += amount;
	std::cout << this->name << " repaired itself! It not has " << this->hit_p << 
	"Hit points left!" << std::endl;
}