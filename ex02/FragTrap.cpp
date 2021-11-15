/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:29:44 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/13 13:34:04 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	this->_name = "Default";
	std::cout << "Default  FragTrap (CHILD) constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name)
{
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	this->_name = name;
	std::cout << name << " FragTrap (CHILD) constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " FragTrap (CHILD) destructor called"
			  << std::endl;
}

FragTrap::FragTrap(const FragTrap &source)
{
	std::cout << "FragTrap (CHILD) Copy constructor called" << std::endl;
	*this = source;
}

FragTrap &FragTrap::operator=(const FragTrap &right)
{
	if (this != &right)
	{
		std::string local;
		local = right.getName();
		this->_name = local + "(copy)";
		this->_hitpoints = right.getHitpoints();
		this->_energy_points = right.getEnergyPoints();
		this->_attack_damage = right.getAttackDamage();
		std::cout << "FragTrap (CHILD) Assignment called" << std::endl;
	}
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " requests high fives"
			  << std::endl;
}
