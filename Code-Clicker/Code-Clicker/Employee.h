#pragma once

#include "MyForm.h"

namespace CodeClicker {

	ref class MyForm;

	public ref class Employee
	{
		static int heightOnHireDialog = 140;
		static int pictureTop = 40; // TODO + inne wartoœci
		static int describeLeft = 290;

	public:
		//TODO operator bool - zwracana wartoœæ isHired [KSZ]

		MyForm^ form;
		int number;

		int pay;
		bool isHired;//czy pomocnik jest wynajêty?
		int factor;//wydajnosc pomocnika nr 1
		int progress;//progres pomocnika nr 1
		int speed;//szybkoœæ pomocnika nr 1

		System::Windows::Forms::PictureBox^  P;
		System::Windows::Forms::PictureBox^  Bhire;
		System::Windows::Forms::Label^  Lname;
		System::Windows::Forms::Label^  Lrole;
		System::Windows::Forms::Label^  Lcost;
		System::Windows::Forms::Label^  Lupkeep;
		System::Windows::Forms::Label^  Ldescription;

	public:
		Employee(MyForm^ form, int number, int factor, int speed, int pay, System::String^ pictureImageFile, System::String^ hireImageFile, System::String^ nameFontFamilyName, int nameHeight, System::String^ name, System::String^ role, System::String^ upKeepText, System::String^ descriptionText);

		void refreshHireButton();
		void refreshPictureBox();

	protected:
		System::Void Bhire_Click(System::Object^  sender, System::EventArgs^  e);
	};


	ref class EmployeeCycle : public Employee
	{
	public:
		int cycle; //modyfikator zdarzeñ

	public:
		EmployeeCycle(MyForm^ form, int number, int factor, int speed, int pay, System::String^ pictureImageFile, System::String^ hireImageFile, System::String^ nameFontFamilyName, int _nameHeight, System::String^ name, System::String^ role, System::String^ upKeepText, System::String^ descriptionText);
	};


	ref class EmployeePoor : public Employee
	{
	public:
		bool poor; //czy staæ na wyp³atê

	public:
		EmployeePoor(MyForm^ form, int number, int factor, int speed, int pay, System::String^ pictureImageFile, System::String^ hireImageFile, System::String^ nameFontFamilyName, int _nameHeight, System::String^ name, System::String^ role, System::String^ upKeepText, System::String^ descriptionText);
	};


	ref class EmployeePremium : public Employee
	{
	public:
		int premium; //czêstotliwoœæ ¿¹dania premii

	public:
		EmployeePremium(MyForm^ form, int number, int factor, int speed, int pay, System::String^ pictureImageFile, System::String^ hireImageFile, System::String^ nameFontFamilyName, int _nameHeight, System::String^ name, System::String^ role, System::String^ upKeepText, System::String^ descriptionText);
	};
}