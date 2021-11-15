/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:30:23 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/15 13:09:47 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default  Diamondtrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = this->FragTrap::_hitpoints;
	this->_energy_points = this->ScavTrap::_energy_points;
	this->_attack_damage = this->FragTrap::_attack_damage;
	std::cout << "Constructor of DiamondTrap " << this->_name
			  << " has been called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << " DiamondTrap (GRANDCHILD) destructor called"
			  << std::endl;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap name is " << this->_name << std::endl
			  << "ClapTrap name is " << ClapTrap::_name << std::endl;
}

