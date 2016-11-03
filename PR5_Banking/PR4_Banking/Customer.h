#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
private:
	string name;
	string address;
	unsigned int age;
	unsigned int teleNumber;
	string acctType;
public:
	// /////////////////CONSTRUCTOR(S)////////////////// //
	Customer(string _name, string _address, unsigned int _age, unsigned int _teleNumber, string _acctType)
	{
		name = _name;
		address = _address;
		age = _age;
		teleNumber = _teleNumber;
		acctType = _acctType;
	}
	// //////////////////////////////////////////////// //

	// /////////////////ACCESSOR FXNS ////////////////// //
	const string gName() { return name; }
	const string gAddress() { return address; }
	const unsigned int gAge() { return age; }
	const unsigned int gTele() { return teleNumber; }
	const string gType() { return acctType; }
	// ///////////////////////////////////////////////// //

	// /////////////////MUTATOR FXNS//////////////////// //
	void cName(string nName) { name = nName; }
	void cAddress(string nAddress) { address = nAddress; }
	void cAge(unsigned int nAge) { age = nAge; }
	void cTele(unsigned int nTele) { teleNumber = nTele; }
	void cType(string nType) { acctType = nType; }
	// ///////////////////////////////////////////////// //

};


#endif