#include "hire.h"

namespace CodeClicker {
	hire::hire(void)
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(hire::typeid));
		InitializeComponent();
		paid = 0;
		cash = 0;
	}
	hire::hire(array<Employee^>^ _employees) : hire()
	{ 
		employees = _employees;
	}

	void hire::refreshEmployeesPictures()
	{
		for (int i = 0; i < employeesCount; i++)
			employees[i]->refreshPictureBox();
	}

}