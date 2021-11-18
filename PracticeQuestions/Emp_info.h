#pragma once
#include "Employee.h"
#include "Emp_union.h"

class Emp_info : public Employee, public Emp_union
{
	float salary;
};

