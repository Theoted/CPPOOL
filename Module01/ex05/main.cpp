/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:08:52 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/07 13:51:57 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    h;

    h.complain("error");
    h.complain("erroaege");
    h.complain("error");
    h.complain("warning");
    h.complain("info");
    h.complain("debug");
    h.complain("error");
    return (0);
}