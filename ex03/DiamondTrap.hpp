/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:22:15 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/15 13:10:04 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(DiamondTrap const &source);
	DiamondTrap(std::string const name);
	~DiamondTrap();
	DiamondTrap &operator=(DiamondTrap const &right);
	using ScavTrap::attack;
	void whoAmI() const;

private:
	std::string _name;
};

#endif
