#pragma once
#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

using std::string;

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates,
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
protected:
	string name;
	string address;
	unsigned int age;
	string teleNumber;
	unsigned int custID;

	double savings_interest;
	double check_interest;
	double check_charge;
	int overdarft_penalty;

public:
	// /////////////////CONSTRUCTOR(S)////////////////// //
	Customer(string _name, string _address, unsigned int _age, string _teleNumber, unsigned int _custID)
	{
		name = _name;
		address = _address;
		age = _age;
		teleNumber = _teleNumber;
		custID = _custID;
	}
	// //////////////////////////////////////////////// //

	// /////////////////ACCESSOR FXNS ////////////////// //
	const string get_name() { return name; }
	const string get_address() { return address; }
	const unsigned int get_age() { return age; }
	const string get_tele() { return teleNumber; }
	const unsigned int get_id() { return custID; }
	// ///////////////////////////////////////////////// //

	// /////////////////MUTATOR FXNS//////////////////// //
	void ch_name(string nName) { name = nName; }
	void ch_address(string nAddress) { address = nAddress; }
	void ch_age(unsigned int nAge) { age = nAge; }
	void ch_tele(unsigned int nTele) { teleNumber = nTele; }
	void ch_id(unsigned int nID) { custID = nID; }
	// ///////////////////////////////////////////////// //

	// /////////////////VIRTUAL FXNS//////////////////// //
	virtual const double get_sinterest() = 0;
	virtual const double get_cinterest() = 0;
	virtual const double get_ccharge() = 0;
	virtual const int get_penalty() = 0;
	// ///////////////////////////////////////////////// //
};


// Adult Account Type
class Adult : public Customer
{

public:
	Adult(string _name, string _address, unsigned int _age, string _teleNumber, unsigned int _custID)
		:
		Customer(_name, _address, _age, _teleNumber, _custID)
	{
		savings_interest = .02;
		check_interest = 0.002;

		check_charge = 3;
		overdarft_penalty = 15;
	}

	const double get_sinterest() { return savings_interest; }
	const double get_cinterest() { return check_interest; }
	const double get_ccharge() { return check_charge; }
	const int get_penalty() { return overdarft_penalty; }
};
// End Type

//--------------------------------------------------//

// Senior Account Type
class Senior : public Customer
{
public:
	Senior(string _name, string _address,  unsigned int _age, string _teleNumber, unsigned int _custID)
		:
		Customer(_name, _address, _age, _teleNumber, _custID)
	{
		savings_interest = .04;
		check_interest = 0.004;

		check_charge = 1;
		overdarft_penalty = 8;
	}


	const double get_sinterest() { return savings_interest; }
	const double get_cinterest() { return check_interest; }
	const double get_ccharge() { return check_charge; }
	const int get_penalty() { return overdarft_penalty; }
};
// End Type

//--------------------------------------------------------//

// Student Account Type
class Student : public Customer
{
public:

	Student(string _name, string _address, unsigned int _age, string _teleNumber, unsigned int _custID)
		:
		Customer(_name, _address, _age, _teleNumber, _custID)
	{
		savings_interest = .03;
		check_interest = 0.005;

		check_charge = 2;
		overdarft_penalty = 10;
	}


	const double get_sinterest() { return savings_interest; }
	const double get_cinterest() { return check_interest; }
	const double get_ccharge() { return check_charge; }
	const int get_penalty() { return overdarft_penalty; }
};
// End Type

#endif