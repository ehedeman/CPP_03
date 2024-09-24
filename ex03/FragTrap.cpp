/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:05:54 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/24 12:54:35 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
//	this->name		= "default";
	this->hit_p		= 100;
	this->energy_p	= 100;
	this->attack_d	= 30;
	std::cout << "Frag-Default Constructor called for " <<
	this->name << "." << std::endl;
}


FragTrap::FragTrap( std::string name ): ClapTrap(name + "_ClapTrap")
{
	this->hit_p		= 100;
	this->energy_p	= 100;
	this->attack_d	= 30;
//	this->name		= name;
	std::cout << "Frag-Name-Based Constructor called for " <<
	this->name << "." << std::endl;
}

FragTrap::FragTrap( const FragTrap &copy): ClapTrap( copy )
{
	*this			= copy;
	std::cout << "Frag-copy constructor called for " <<
	this->name << "." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag-Destrucor called for " << this->name <<
	"." << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap &frag)
{
	this->name		= frag.name;
	this->hit_p		= frag.hit_p;
	this->energy_p	= frag.energy_p;
	this->attack_d	= frag.attack_d;
	std::cout << "Frag-Assignment operator called for " <<
	this->name << "." << std::endl;
	return (*this);
}

void		FragTrap::highFiveGuys( void )
{
	std::string buff;

	buff = "";
	std::cout << "Wanna give " << this->name <<" a high five? (yes/no)" << std::endl;
	while (!std::cin.eof() && buff == "")
	{
		std::getline(std::cin, buff);
		if (buff == "yes" || buff == "no")
			break ;
		else
			buff = "";
	}
	if (buff == "yes")
		std::cout << "Great! " << this->name << " gives you a high five!" << std::endl;
	else if (buff == "no")
	{
		std::cout << "Naw man.. alright." << std::endl << ".." <<
		std::endl << "*sad " << this->name << " noises in the distance..*" << std::endl;
	}		
}