/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:13:25 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/20 11:42:20 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


static void until_they_die(ClapTrap &a, ClapTrap &b)
{
	std::cout << a.getName() << " vs " << b.getName() << "!" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		a.attack(b.getName());	//a attacks b
		b.takeDemage(a.getaD());
		std::cout << std::endl;
	}
}

static void with_repair(ClapTrap &c, ClapTrap &d)
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

int main(void)
{
	ClapTrap a("Norbert");	//a gets constructed with default 0 attack demage
	a.setaD(3);				//attack demage is set
	
	ClapTrap b(a);			//b is constructed by copying a (to show that)
							//copy constructor and assignment operator work
	ClapTrap	c("Henri");
	c.setaD(4);
	ClapTrap	d("Giesela");
	d.setaD(5);
	std::cout << std::endl;
	
	b.setaD(2);				//attack demage and name of b are set to
	b.setName("Hubert");	//distinguish better
	
	std::cout << "Welcome to our fighters " << a.getName() <<
	", " << b.getName() <<
	", " << c.getName() <<
	" and " << d.getName() <<
	"!" << std::endl <<
	std::endl;

	until_they_die(a, b);
	std::cout << std::endl;
	with_repair(c, d);
	return (0);
}