/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:09:36 by mbarut            #+#    #+#             */
/*   Updated: 2022/02/02 16:58:15 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ft
{
	/* ft::is_same
	** Sets its member constant 'value' to true if the given types are the same,
	** otherwise to false.
	*/

	template <typename T, typename U>
	struct is_same
	{
		static const bool value = false;
	};
	
	template <typename T>
	struct is_same<T, T>
	{
		static const bool value = true;
	};

	/* ft::enable_if
	** Forms its member constant 'type' if the given condition is true,
	** otherwise 'type' is not formed.
	*/

	template <bool condition, class T = void>
	struct enable_if
	{
		
	};

	template <class T>
	struct enable_if <true, T>
	{
		typedef T type;
	};
	
	/* ft::integral_constant */
	
	template <class T, T v>
	struct integral_constant 
	{
		static const T value = v;
		typedef T value_type;
		typedef integral_constant<T, v> type;
	};

	template <class T, T v> const 
	T integral_constant<T, v>::value;

	/* true_type, false_type */

	typedef integral_constant<bool, true>  true_type;
	typedef integral_constant<bool, false> false_type;

	/* ft::is_integral
	** Sets its member constant 'value' to true if the given type is an integral,
	** if not to false.
	*/
	template <class T> struct is_integral : public false_type { };

	template <> struct is_integral<bool> : public true_type { };
	template <> struct is_integral<char> : public true_type { };
	template <> struct is_integral<unsigned char> : public true_type { };
	template <> struct is_integral<signed char> : public true_type { };
	template <> struct is_integral<short> : public true_type { };
	template <> struct is_integral<unsigned short> : public true_type { };
	template <> struct is_integral<int> : public true_type { };
	template <> struct is_integral<unsigned int> : public true_type { };
	template <> struct is_integral<long long> : public true_type { };
	template <> struct is_integral<unsigned long long> : public true_type { };

	/* c00l factorial trick, no calculation made during runtime */
	
	template <unsigned n>
	struct factorial : ft::integral_constant<long long, n * factorial<n - 1>::value> { };

	template <>
	struct factorial<0> : ft::integral_constant<long long, 1> { }; 

}

#pragma endregion