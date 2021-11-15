/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:05:26 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/13 10:26:28 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap john("John Doe");
	ClapTrap chuck("Chuck Norris");
	ScavTrap foreign;
	foreign = john;

	john.attack("Chuck Norris");
	chuck.takeDamage(0);
	chuck.takeDamage(2);
	chuck.beRepaired(2);
	chuck.takeDamage(10);
	john.takeDamage(50);
	foreign.attack("John Doe");
	foreign.guardGate();
	return 0;
}
