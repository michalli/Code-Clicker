#pragma once
#include "Employee.h"
ref class EmployeePremium :
	public Employee
{
public:
	int premium; //czêstotliwoœæ ¿¹dania premii

public:
	EmployeePremium(int, int);
};

