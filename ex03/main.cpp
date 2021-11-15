/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:05:26 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/13 20:31:52 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	DiamondTrap diamond("Axel");

	std::cout << diamond.ScavTrap::getEnergyPoints() << std::endl;
	std::cout << diamond.getEnergyPoints() << std::endl;
	std::cout << diamond.FragTrap::getHitpoints() << std::endl;
	std::cout << diamond.getHitpoints() << std::endl;
	std::cout << diamond.FragTrap::getAttackDamage() << std::endl;
	std::cout << diamond.getAttackDamage() << std::endl;
	diamond.attack("Somebody");
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();

	return 0;
}
