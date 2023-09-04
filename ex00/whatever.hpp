/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:06:29 by jholl             #+#    #+#             */
/*   Updated: 2022/05/24 23:10:33 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template < typename T >
T const & min(T const & a, T const & b)
{
	if (a < b)
		return (a);
	else if (a > b)
		return (b);
	else 
		return (b);
}

template < typename T >
T const & max(T const & a, T const & b)
{
	if (a < b)
		return (b);
	else if (a > b)
		return (a);
	else 
		return (b);
}

template < typename T >
void	swap(T & a, T & b)
{
	T swap;

	swap = b;
	b = a;
	a = swap;
}

#endif
