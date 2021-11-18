/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:02:48 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/18 03:33:37 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed   a(2.0f);
    Fixed   b(4.2f);
    Fixed   c;

    std::cout << "--- Testing arethmetic ---" << std::endl;
    std::cout << "a + b -> " << a + b << std::endl;
    std::cout << "a - b -> " << a - b << std::endl;
    std::cout << "a * b -> " << a * b << std::endl;
    std::cout << "b / a -> " << b / a << std::endl;
    
    return 0;
}