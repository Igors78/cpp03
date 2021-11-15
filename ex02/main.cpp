/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:05:26 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/13 13:44:47 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap john("John Doe");
	ClapTrap chuck("Chuck Norris");
	FragTrap frog("Crazy Frog");
	ClapTrap twin(chuck);

	john.attack("Chuck Norris");
	frog.takeDamage(0);
	frog.takeDamage(2);
	frog.beRepaired(2);
	frog.takeDamage(10);
	john.takeDamage(50);
	frog.attack("John Doe");
	john.guardGate();
	twin.attack("Chuck Norris");
	frog.highFivesGuys();
	return 0;
}
