/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:13:25 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/20 13:28:18 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


static void clap_until_they_die(ClapTrap &a, ClapTrap &b)
{
	std::cout << a.getName() << " vs " << b.getName() << "!" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		a.attack(b.getName());	//a attacks b
		b.takeDemage(a.getaD());
		std::cout << std::endl;
	}
}

static void clap_with_repair(ClapTrap &c, ClapTrap &d)
{
	std::cout << c.getName() << " vs " << d.getName() << "!" << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << 10 - i << " EP left!" << std::endl;
		c.attack(d.getName());
		if (c.getEp())
			d.takeDemage(c.getaD());
	
		d.beRepaired(c.getaD());
		std::cout << std::endl;
	}
	//until their EP run out
}

void	ClapTraps( void )
{
	ClapTrap a("C1");	//a gets constructed with default 0 attack demage
	a.setaD(3);				//attack demage is set
	
	ClapTrap b(a);			//b is constructed by copying a (to show that)
							//copy constructor and assignment operator work
	ClapTrap	c("C3");
	c.setaD(4);
	ClapTrap	d("C4");
	d.setaD(5);
	std::cout << std::endl;
	
	b.setaD(2);				//attack demage and name of b are set to
	b.setName("C2");	//distinguish better
	
	std::cout << "Welcome to our fighters " << a.getName() <<
	", " << b.getName() <<
	", " << c.getName() <<
	" and " << d.getName() <<
	"!" << std::endl <<
	std::endl;

	clap_until_they_die(a, b);
	std::cout << std::endl;
	clap_with_repair(c, d);
}

static void scav_until_they_die(ScavTrap &a, ScavTrap &b)
{
	std::cout << a.getName() << " vs " << b.getName() << "!" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		a.attack(b.getName());	//a attacks b
		b.takeDemage(a.getaD());
		std::cout << std::endl;
	}
}

static void scav_with_repair(ScavTrap &c, ScavTrap &d)
{
	std::cout << c.getName() << " vs " << d.getName() << "!" << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << 10 - i << " EP left!" << std::endl;
		c.attack(d.getName());
		if (c.getEp())
			d.takeDemage(c.getaD());
	
		d.beRepaired(c.getaD());
		std::cout << std::endl;
	}
	//until their EP run out
}

static void ScavTraps( void )
{
	std::cout << std::endl;
	ScavTrap a("S1");	//a gets constructed with default 0 attack demage		//attack demage is set
	
	ScavTrap b(a);			//b is constructed by copying a (to show that)
							//copy constructor and assignment operator work
	ScavTrap	c("S3");
	ScavTrap	d("S4");
	std::cout << std::endl;
	
	b.setName("S2");	//distinguish better
	
	std::cout << "Welcome to our fighters " << a.getName() <<
	", " << b.getName() <<
	", " << c.getName() <<
	" and " << d.getName() <<
	"!" << std::endl <<
	std::endl;

	a.guardGate();
	a.guardGate();
	
	std::cout << std::endl;
	
	scav_until_they_die(a, b);
	std::cout << std::endl;
	scav_with_repair(c, d);
}

int main(void)
{
//	ClapTraps();
	ScavTraps();
	return (0);
}