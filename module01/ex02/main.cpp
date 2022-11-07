/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:57:25 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/03 20:06:25 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main( void )
{
    string  str = "HI THIS IS BRAIN";
    string* stringPTR = &str; 
    string& stringREF = str;

    cout << &str << endl;
    cout << stringPTR << endl;
    cout << &stringREF << endl;

    cout << endl;

    cout << str << endl;
    cout << *stringPTR << endl;
    cout << stringREF << endl;

    return ( 0 );
}
