/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:04:49 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/21 21:05:04 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(ScavTrap const &source);
	ScavTrap(std::string const name);
	virtual ~ScavTrap();
	void attack(std::string const &target);
	ScavTrap &operator=(ScavTrap const &right);
	void guardGate();
	void setEnergy(void);
};

#endif
