/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:17:51 by jholl             #+#    #+#             */
/*   Updated: 2022/05/25 12:37:13 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	double	arr_double[5] = {-1.503, 2.632, -3.7, 0, 8};
	char	arr_char[4] = {'t', 'o', 't', 'o'};
	std::string arr_string[3] = {"toto le jojo", "jojo le toto", "vovo le vuvu"};

	::iter(arr_double, 5, ::getIterContent);
	std::cout << std::endl;
	::iter(arr_char, 4, ::getIterContent);
	std::cout << std::endl;
	::iter(arr_string, 3, ::getIterContent);
	std::cout << std::endl;

	return (0);
}
