/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:08:36 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/21 21:06:29 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_name = "Default";
	std::cout << "Default  ScavTrap (CHILD) constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name)
{
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_name = name;
	std::cout << name << " ScavTrap (CHILD) constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " ScavTrap (CHILD) destructor called"
			  << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source)
{
	std::cout << "ScavTrap (CHILD) Copy constructor called" << std::endl;
	*this = source;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &right)
{
	if (this != &right)
	{
		std::string local;
		local = right.getName();
		this->_name = local + "(copy)";
		this->_hitpoints = right.getHitpoints();
		this->_energy_points = right.getEnergyPoints();
		this->_attack_damage = right.getAttackDamage();
		std::cout << "ScavTrap (CHILD) Assignment called" << std::endl;
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " entered Gate keeper mode"
			  << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->_energy_points < this->_attack_damage)
		std::cout << "Not enought energy to attack" << std::endl;
	else
	{
		this->_energy_points -= this->_attack_damage;
		std::cout << "ScavTrap " << this->_name << " attack " << target
				  << ", causing " << this->_attack_damage << " points of damage!"
				  << std::endl;
	}
}

void ScavTrap::setEnergy(void)
{
	this->_energy_points = 50;
}