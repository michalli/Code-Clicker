#include "hire.h"
#include "MyForm.h"

namespace CodeClicker {
	hire::hire(void)
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(hire::typeid));
		InitializeComponent();
		paid = 0;
		cash = 0;

		employees = gcnew array<EmployeeControl^>(employeesCount);
		employees2 = gcnew array<Employee^>(employeesCount);
		employees[0] = gcnew EmployeeControl(this, 0, 100, safe_cast<Image^>(resources->GetObject(L"Bhire0.Image")), L"Buxton Sketch", System::Drawing::Size(196, 39), L"Zosia Samosia", System::Drawing::Size(172, 19), L"pocz¹tkuj¹ca programistka", System::Drawing::Size(79, 15), System::Drawing::Size(235, 15), L"po³owa generowanych przez siebie zysków");
		employees[1] = gcnew EmployeeControl(this, 1, 400, safe_cast<Image^>(resources->GetObject(L"Bhire1.Image")), L"SketchFlow Print", System::Drawing::Size(264, 34), L"Mariusz Denko", System::Drawing::Size(80, 19), L"programista", System::Drawing::Size(79, 15), System::Drawing::Size(235, 15), L"po³owa generowanych przez siebie zysków");
		employees[2] = gcnew EmployeeControl(this, 2, 1000, safe_cast<Image^>(resources->GetObject(L"Bhire2.Image")), L"Segoe Print", System::Drawing::Size(277, 57), L"Alfred Kofeinka", System::Drawing::Size(170, 19), L"doœwiadczony programista", System::Drawing::Size(85, 15), System::Drawing::Size(235, 15), L"po³owa generowanych przez siebie zysków");
		employees[3] = gcnew EmployeeControl(this, 3, 3000, safe_cast<Image^>(resources->GetObject(L"Bhire3.Image")), L"Gabriola", System::Drawing::Size(169, 59), L"Janusz Apacz", System::Drawing::Size(42, 19), L"tester", System::Drawing::Size(85, 15), System::Drawing::Size(246, 15), L"wyp³ata po cyklu zale¿na od produktywnoœci");
	}

	void hire::check(int _cash, bool* e) {
		cash = _cash;
		for (int i = 0; i < employeesCount; i++)
			employees[i]->check(e[i]); //TODO nazwa
	}

	bool* hire::getemployees()
	{
		bool* result = new bool[employeesCount];
		for (int i = 0; i < employeesCount; i++)
			result[i] = employees[i]->isHired;
		return result;
	}

	void hire::refreshEmployeesPictures()
	{
		for (int i = 0; i < employeesCount; i++)
			employees[i]->refreshPictureBox();

			
	}

}