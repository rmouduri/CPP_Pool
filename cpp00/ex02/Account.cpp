#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	++_nbAccounts;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;

	_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" <<
		(this->_accountIndex < _nbAccounts - 1 ? "\n" : "");
}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout
		<< " accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
	++this->_nbDeposits;
	this->_amount += deposit;
	++_totalNbDeposits;
	_totalAmount += deposit;
	
	_displayTimestamp();
	std::cout
		<< " index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount - deposit
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= this->_amount)
	{
		++this->_nbWithdrawals;
		this->_amount -= withdrawal;
		++_totalNbWithdrawals;
		_totalAmount -= withdrawal;
	
		_displayTimestamp();
		std::cout
			<< " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount + withdrawal
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout
			<< " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:" << "refused" << std::endl;
	}
	return false;
}

int Account::checkAmount(void) const
{
	return 0;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout
		<< " index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532]";
}