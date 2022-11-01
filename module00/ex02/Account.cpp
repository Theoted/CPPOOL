/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:44:23 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/01 15:58:56 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_nbDeposits = 1;
    this->_totalAmount = initial_deposit;

    return ;
}

Account::~Account(void)
{
    return ;
}

void    Account::makeDeposit(int deposit)
{
    this->_amount = deposit;
    this->_nbDeposits++;
    this->_totalAmount += deposit;
}