#pragma once
#include "Employee.h"
ref class EmployeePoor :
	public Employee
{
public:
	bool poor; //czy staæ na wyp³atê

public:
	EmployeePoor(int, int);
};

