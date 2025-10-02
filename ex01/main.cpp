/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:22:11 by atomasi           #+#    #+#             */
/*   Updated: 2025/10/02 17:04:33 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span spanou(5);
	try
	{
		spanou.addNumber(3);
		spanou.addNumber(5);
		spanou.addNumber(42);
		spanou.addNumber(666);
		spanou.addNumber(-4);
		spanou.addNumber(-2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	spanou.printMultiset();
	std::cout << "longest span: " << spanou.longestSpan() << std::endl;


}
