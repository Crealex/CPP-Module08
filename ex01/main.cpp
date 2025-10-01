/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:22:11 by atomasi           #+#    #+#             */
/*   Updated: 2025/10/01 16:34:12 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span spanou(5);

	spanou.addNumber(3);
	spanou.addNumber(5);

	spanou.printMultiset();
}
