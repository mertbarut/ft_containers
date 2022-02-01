/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:19:31 by mbarut            #+#    #+#             */
/*   Updated: 2022/02/01 14:47:18 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <ostream>
#include <vector>
#include <iterator>
#include <iostream>
#include <utility>
#include <string>

#include "../ft/ft_vector.hpp"
#include "../ft/ft_iterator.hpp"
#include "../ft/ft_pair.hpp"

/* vectors & its iterators */

int main()
{
	ft::vector<int> v1;
	ft::vector<int> v2;

	ft::vector<int>::iterator it1;
	ft::vector<int>::iterator it2;
	ft::vector<int>::iterator it3;
	ft::vector<int>::const_iterator it_const;
	ft::vector<int>::reverse_iterator it_r;
	ft::vector<int>::const_reverse_iterator it_rconst;
	
	v1.reserve(12);
	v1.push_back( 0 );
	v1.push_back( 1 );
	v1.push_back( 2 );
	v1.push_back( 3 );
	v1.push_back( 4 );
	v1.push_back( 5 );
	v1.push_back( 6 );
	v1.push_back( 7 );
	v1.push_back( 8 );
	v1.push_back( 9 );
	v1.push_back( 10 );
	v1.push_back( 11 );

	std::cout << "v1 = [ ";
	for (it1 = v1.begin(); it1 < v1.end(); ++it1)
		std::cout << *it1 << " ";
	std::cout << "]" << std::endl;
	std::cout << std::endl;
	
	it1 = v1.begin();
	it2 = v1.begin() + 3;
	it3 = v1.end() - 1;

	std::cout << "it1 = v1.begin()" << std::endl;
	std::cout << "it2 = v1.begin() + 3" << std::endl;
	std::cout << "it3 = v1.end() - 2;" << std::endl;
	std::cout << std::endl;

	/* Access */

	std::cout << "*(it1): " << *(it1) << std::endl;

	/* Arithmetic */
	std::cout << "*(it1 + 1): " << *(it1 + 1) << std::endl;
	std::cout << "*(1 + it1): " << *(1 + it1) << std::endl;
	std::cout << "*(it2 - 1): " << *(it2 - 1) << std::endl;
	std::cout << "*(-1 + it2): " << *(-1 + it2) << std::endl;

	/* Increment/decrement */
	std::cout << "*(it1++): " << *(it1++) << " -> " << *it1 << std::endl;
	std::cout << "*(it2++): " << *(it2++) << " -> " << *it2 << std::endl;
	std::cout << "*(++it1): " << *(++it1) << " -> " << *it1 << std::endl;
	std::cout << "*(++it2): " << *(++it2) << " -> " << *it2 << std::endl;
	std::cout << "*(it1--): " << *(it1--) << " -> " << *it1 << std::endl;
	std::cout << "*(it2--): " << *(it2--) << " -> " << *it2 << std::endl;
	std::cout << "*(--it1): " << *(--it1) << " -> " << *it1 << std::endl;
	std::cout << "*(--it2): " << *(--it2) << " -> " << *it2 << std::endl;

	/* Increment/decrement assignment */
	std::cout << "*(it1 += 3): " << *it1 << " -> " << *(it1 += 3) << std::endl;
	std::cout << "*(it2 += 3): " << *it2 << " -> " << *(it2 += 3) << std::endl;
	std::cout << "*(it1 -= 1): " << *it1 << " -> " << *(it1 -= 1) << std::endl;
	std::cout << "*(it2 -= 1): " << *it2 << " -> " << *(it2 -= 1) << std::endl;

	/* Reverse iterator */

	ft::reverse_iterator<ft::vector<int>::iterator> it4( v1.rbegin() + 6 );
	ft::reverse_iterator<ft::vector<int>::iterator> it5( v1.rbegin() );
	std::cout << "*(it4): " << *(it4) << std::endl;
	
	std::cout << "*(it4++): " << *(it4++) << " -> " << *it4 << std::endl;
	std::cout << "*(++it4): " << *(++it4) << " -> " << *it4 << std::endl;
	std::cout << "*(it4--): " << *(it4--) << " -> " << *it4 << std::endl;
	std::cout << "*(--it4): " << *(--it4) << " -> " << *it4 << std::endl;

	std::cout << "*(it4 + 3): " << *(it4 + 3) << std::endl;
	std::cout << "*(it4 - 3): " << *(it4 - 3) << std::endl;
	std::cout << "it4 - it5: " << it4 - it5 << std::endl;

	return 0;
}

//int main()
//{
//	ft::pair<ft::string, ft::string> person01 = ft::make_pair("John", "Smith");
//	ft::pair<ft::string, ft::string> person02("Max", "Miller");
//
//	ft::cout << person02.first << ft::endl;
//	ft::cout << (person02 < person01) << ft::endl;
//
//	ft::cout << ft::factorial<20>::value << ft::endl;
//
//	ft::vector<int> v1;
//	v1.reserve(12);
//	v1.push_back(0);
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	v1.push_back(5);
//	v1.push_back(6);
//	v1.push_back(7);
//	v1.push_back(8);
//	v1.push_back(9);
//	ft::cout << v1.at(2) << ft::endl;
//
//	ft::cout << ft::integral_constant<int, 7>::value << ft::endl;
//}
//