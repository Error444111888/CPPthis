#include "BTCPrice.h"
#include <iostream>


using namespace std;



BTCPrice::BTCPrice(double Price)
	:Current(Price)
{

}

void BTCPrice::PrintValue()
{
	cout << "Current = " <<  Current << endl;
	cout << "this->Current = " << this->Current  << endl; // << "this" is a pointer
	cout << "(*this).Current = " << (*this).Current  << endl; // << "this" is the pointer from the memory value

}
