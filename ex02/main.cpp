/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:47:17 by jholl             #+#    #+#             */
/*   Updated: 2022/05/25 01:23:03 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Test
{
	public : 
		Test():
		_x(1000)
		{
		};

		Test(int x):
		_x(x)
		{
		};

		Test(Test const & cpy)
		{
			_x = cpy._x;
		};

		~Test()
		{
		};

		Test & operator=(Test const & cpy)
		{
			_x = cpy._x;
			return (*this);
		};

		int getX(void) const
		{
			return (_x);
		};

	private : 
		int _x;
};

std::ostream &operator<<(std::ostream & lhs, Test const &rhs)
{
	lhs << rhs.getX();
	return (lhs);
}

int main(void)
{

	/*	
 	int * a = new int();
	std::cout << *a << std::endl;
	delete a;
	*/

	{
		//Default constructor
		Array<std::string> toto_le_tutu;
		std::cout << "size: " << toto_le_tutu.size() << std::endl;
		//Exception cause no array
		try
		{
			for (size_t i = 0; i < 10; i++)
				std::cout << "|" << toto_le_tutu[i] << "| ";
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		//Constructor with n
		Array<std::string> toto_le_tutu(10);
		std::cout << "size: " << toto_le_tutu.size() << std::endl;
		// try to read with [] 
		for (size_t i = 0; i < toto_le_tutu.size(); i++)
			std::cout << "|" << toto_le_tutu[i] << "| ";
		std::cout << std::endl;
		// try to write with [] 
		for (size_t i = 0; i < 10; i++)
			toto_le_tutu[i] = std::string("jojo");
		for (size_t i = 0; i < 10; i++)
			std::cout << "|" << toto_le_tutu[i] << "| ";
		std::cout << std::endl;

		//Constructor cpy
		Array<std::string> fan_de_toto(toto_le_tutu);
		std::cout << "cpy part, size:" << fan_de_toto.size() << std::endl;
		for (size_t i = 0; i < fan_de_toto.size(); i++)
			std::cout << "|" << fan_de_toto[i] << "| ";
		std::cout << std::endl;

		Array<std::string> coco_le_bubu(5);
		std::cout << "size: " << coco_le_bubu.size() << std::endl;
		for (size_t i = 0; i < coco_le_bubu.size(); i++)
			std::cout << "|" << coco_le_bubu[i] << "| ";
		std::cout << std::endl;
		//Overload assignement
		coco_le_bubu = fan_de_toto;
		std::cout << "size: " << coco_le_bubu.size() << std::endl;
		for (size_t i = 0; i < coco_le_bubu.size(); i++)
			std::cout << "|" << coco_le_bubu[i] << "| ";
		std::cout << std::endl;

		const Array<const int> juju_le_const(3);
		std::cout << juju_le_const.size() << std::endl;
		for (size_t i = 0; i < juju_le_const.size(); i++)
			std::cout << "|" << juju_le_const[i] << "| ";
		// juju_le_const[0] = 5; impossible cause const
	}
		std::cout << std::endl;
	{
		//Array of a class
		Array<Test> toto_le_tutu(6);
		std::cout << "size: " << toto_le_tutu.size() << std::endl;
		for (size_t i = 0; i < toto_le_tutu.size(); i++)
			std::cout << "|" << toto_le_tutu[i] << "| ";
		std::cout << std::endl;
		for (size_t i = 0; i < toto_le_tutu.size(); i++)
			toto_le_tutu[i] = Test(100000);
		for (size_t i = 0; i < toto_le_tutu.size(); i++)
			std::cout << "|" << toto_le_tutu[i] << "| ";
		std::cout << std::endl;
		//Exception with a class for finish
		try
		{
			std::cout << toto_le_tutu[-2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
