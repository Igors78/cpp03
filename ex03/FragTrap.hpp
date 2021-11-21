/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:26:35 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/21 21:04:04 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();
	FragTrap(FragTrap const &source);
	FragTrap(std::string const name);
	virtual ~FragTrap();
	FragTrap &operator=(FragTrap const &right);
	void highFivesGuys();
	void setAttackDamage(void);
	void setHitPoints(void);
};

#endif
