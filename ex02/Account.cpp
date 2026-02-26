/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:57:26 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/26 11:57:39 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(){}
Account::Account(int initial_deposit)
	:_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount << ";created"
		<< std::endl;
	Account::_nbAccounts++;
}
Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount << ";closed"
		<< std::endl;
}

int	Account::checkAmount() const
{
	return (this->_amount);
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount() << ";deposits:"
		<< Account::getNbDeposits() << ";withdrawals:"
		<< Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< Account::checkAmount() << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:"
		<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int	withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount;
	if (this->_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal << ";amount:"
		<< this->_amount << ";nb_withdrawals:"
		<< this->_nbWithdrawals << std::endl;
	return (true);
}

void	Account::_displayTimestamp(void)
{
	std::time_t now = std::time(0);
	std::tm *tmi = std::localtime(&now);
	char buff[20];
	std::strftime(buff, sizeof(buff), "[%Y%m%d_%H%M%S] ", tmi);
    std::cout << buff;
}
