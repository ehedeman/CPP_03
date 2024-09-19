/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:13:25 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/19 14:13:51 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Norbert");
	a.setaD(3);
	ClapTrap b("Hubert");
	b.setaD(2);
	a.attack(b.getName());
	b.takeDemage(a.getaD());
	b.attack(a.getName());
	a.takeDemage(b.getaD());
	a.attack(b.getName());
	b.takeDemage(a.getaD());
	a.attack(b.getName());
	b.takeDemage(a.getaD());
	return (0);
}