/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:18:31 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/06 14:23:27 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
	private:
		int _value;
		static const int _bits = 8;

	public:
		Fixed();
		Fixed(const int integer);
		Fixed(const float floating);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		static	float pow(float base, int exp);
};

float Fixed::pow(float base, int exp)
{
	float newFloat;

	newFloat = base;
    if (exp == 0)
		return(1);
	if (exp == 1)
		return (base);
	while (--exp)
		newFloat *= base;
	return (newFloat);
}