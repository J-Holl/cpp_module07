/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:17:46 by jholl             #+#    #+#             */
/*   Updated: 2022/05/24 23:46:04 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T >
void	iter(T tab[], size_t size, void (*f)(T const &))
{
	for (size_t i = 0 ; i < size ; i++)
	{
		(f)(tab[i]);
	}
}

template < typename T >
void	getIterContent(T const & content)
{
	std::cout << "|" << content << "| ";
}

#endif
