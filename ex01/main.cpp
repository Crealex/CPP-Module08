/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:22:11 by atomasi           #+#    #+#             */
/*   Updated: 2025/10/10 10:17:12 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span spanou(6);
	try
	{
		spanou.addNumber(3);
		spanou.addNumber(6);
		spanou.addNumber(42);
		spanou.addNumber(666);
		spanou.addNumber(-4);
		spanou.addNumber(43);
		spanou.addNumber(-2);
		spanou.addNumber(56);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	spanou.printMultiset();
	std::cout << "longest span: " << spanou.longestSpan() << std::endl;
	std::cout << "shortest span: " << spanou.shortestSpan() << std::endl;


}
