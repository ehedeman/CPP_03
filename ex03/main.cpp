/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:17:08 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/24 13:05:15 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	// ClapTrap a("Hubert");
	// FragTrap b("Norbert");
	// ScavTrap c("Engelbert");
	DiamondTrap a("Robert");
//	DiamondTrap d(a);
	DiamondTrap	b("Norbert");

	std::cout << std::endl;
	a.whoAmI();
	std::cout << "HP: "<< a.getHp() << std::endl <<
	"EP: " << a.getEp() << std::endl << "AD: " <<a.getaD()	<<
	std::endl;
	
	b.whoAmI();
	std::cout << "HP: "<< b.getHp() << std::endl <<
	"EP: " << b.getEp() << std::endl << "AD: " << b.getaD()	<<
	std::endl;
	std::cout << std::endl;
}