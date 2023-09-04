/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:48:16 by jholl             #+#    #+#             */
/*   Updated: 2022/05/25 12:41:08 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template < typename T >
class Array
{
	public :
		Array():
		_array(NULL), _size(0)
		{
		};

		Array(unsigned int n):
		_array(new T[n]()), _size(n)
		{
		};

		Array(Array const & cpy):
		_array(new T[cpy.size()]()), _size(cpy.size())
		{
			for (size_t i = 0 ; i < _size ; i++)
				_array[i] = cpy._array[i];
		};

		~Array()
		{
			if (_array)
				delete [] _array;
		};

		Array & operator=(Array const & rhs)
		{
			if (_array)
				delete [] _array;
			_size = rhs.size();
			_array = new T[rhs.size()]();

			for (size_t i = 0; i < _size; i++)
			{
				_array[i] = rhs._array[i];
			}
			
			return (*this);
		}

		T & operator[](size_t i) const
		{
			if (!_array || i < 0 || i >= _size)
				throw Array::WrongIndexException();
			else
				return (_array[i]);
		}

		size_t size(void) const
		{
			return (_size);
		};

		class WrongIndexException:
		public std::exception
		{
			public:
				virtual const char* what(void) const throw()
				{
					return ("Wrong Index Exception");
				}
		};

	private :
		T* _array;
		size_t _size;
};

#endif
