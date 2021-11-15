/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:15:47 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/13 10:02:32 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap()
	: _name("Default"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name)
	: _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHitpoints() const
{
	return (this->_hitpoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points);
}

int ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage);
}

void ClapTrap::attack(std::string const &target)
{
	if (this->_energy_points < this->_attack_damage)
		std::cout << "Not enought energy to attack" << std::endl;
	else
	{
		this->_energy_points -= this->_attack_damage;
		std::cout << "ClapTrap " << this->_name << " attack " << target
				  << ", causing " << this->_attack_damage
				  << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints <= amount)
	{
		std::cout << "ClapTrap " << this->_name << " taked "
				  << this->_hitpoints << " points of damage and died!"
				  << std::endl;
		this->_hitpoints = 0;
	}
	else
	{
		this->_hitpoints -= amount;
		std::cout << "ClapTrap " << this->_name << " taked ";
		std::cout << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout << "ClapTrap " << this->_name << " repaired ";
	std::cout << amount << " points!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &right)
{
	if (this != &right)
	{
		std::string local;
		local = right.getName();
		this->_name = local + "(copy)";
		this->_hitpoints = right.getHitpoints();
		this->_energy_points = right.getEnergyPoints();
		this->_attack_damage = right.getAttackDamage();
		std::cout << "Assignment called" << std::endl;
	}
	return (*this);
}
