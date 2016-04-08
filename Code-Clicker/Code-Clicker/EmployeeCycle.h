#pragma once

#include "Employee.h"

ref class EmployeeCycle :
	public Employee
{
public:
	int cycle; //modyfikator zdarzeñ

public:
	EmployeeCycle(int, int);
};

