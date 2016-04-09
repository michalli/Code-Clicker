#include "Employee.h"

namespace CodeClicker {

	Employee::Employee(MyForm^ _form, int _number, int _factor, int _speed, int _pay, System::String^ _pictureImageFile,
		System::String^ _hireImageFile, System::String^ _nameFontFamilyName, int _nameHeight, System::String^ _name,
		System::String^ _role, System::String^ _upKeepText, System::String^ _descriptionText)
	{
		form = _form;
		number = _number;

		isHired = false;
		pay = _pay;
		factor = _factor;
		speed = _speed;

		progress = 0;

		P = (gcnew System::Windows::Forms::PictureBox());
		Bhire = (gcnew System::Windows::Forms::PictureBox());
		Lname = (gcnew System::Windows::Forms::Label());
		Lrole = (gcnew System::Windows::Forms::Label());
		Lcost = (gcnew System::Windows::Forms::Label());
		Lupkeep = (gcnew System::Windows::Forms::Label());
		Ldescription = (gcnew System::Windows::Forms::Label());

		P->ImageLocation = String::Format(L"{0}{1}{2}", AppDomain::CurrentDomain->BaseDirectory, "..\\Code-Clicker\\grafika\\", _pictureImageFile);
		P->Location = System::Drawing::Point(65, pictureTop + (heightOnHireDialog*number));
		P->Size = System::Drawing::Size(200, 135);

		Bhire->Cursor = System::Windows::Forms::Cursors::Hand;
		Bhire->ImageLocation = String::Format(L"{0}{1}{2}", AppDomain::CurrentDomain->BaseDirectory, "..\\Code-Clicker\\grafika\\", _hireImageFile);
		Bhire->Location = System::Drawing::Point(575, pictureTop + (heightOnHireDialog*number));
		Bhire->Size = System::Drawing::Size(154, 84);
		Bhire->TabStop = false;
		Bhire->Tag = pay;
		Bhire->Visible = false;
		Bhire->Click += gcnew System::EventHandler(this, &Employee::Bhire_Click);

		Lname->AutoSize = true; //TODO czy potrzebne [KSZ]
		Lname->BackColor = System::Drawing::Color::Transparent;
		Lname->Location = System::Drawing::Point(describeLeft, pictureTop + (heightOnHireDialog*number));
		Lname->Font = (gcnew System::Drawing::Font(_nameFontFamilyName, 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lname->Size = System::Drawing::Size(10, _nameHeight);
		Lname->Text = _name;

		Lrole->AutoSize = true;
		Lrole->BackColor = System::Drawing::Color::Transparent;
		Lrole->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lrole->Location = System::Drawing::Point(describeLeft, Lname->Bottom);
		Lrole->Text = _role;

		Lcost->AutoSize = true;
		Lcost->BackColor = System::Drawing::Color::Transparent;
		Lcost->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lcost->ForeColor = System::Drawing::SystemColors::ControlDark;
		Lcost->Location = System::Drawing::Point(describeLeft, Lrole->Bottom);
		Lcost->Text = System::String::Format(L"{0} z³ na start", pay);

		Lupkeep->AutoSize = true;
		Lupkeep->BackColor = System::Drawing::Color::Transparent;
		Lupkeep->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lupkeep->ForeColor = System::Drawing::SystemColors::ControlDark;
		Lupkeep->Location = System::Drawing::Point(describeLeft, Lcost->Bottom);
		Lupkeep->Text = _upKeepText;

		Ldescription->AutoSize = true;
		Ldescription->BackColor = System::Drawing::Color::Transparent;
		Ldescription->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Ldescription->ForeColor = System::Drawing::SystemColors::ControlDark;
		Ldescription->Location = System::Drawing::Point(describeLeft, Lupkeep->Bottom);
		Ldescription->Text = _descriptionText;

		form->hiredialog->Controls->Add(P);
		form->hiredialog->Controls->Add(Bhire);
		form->hiredialog->Controls->Add(Lname);
		form->hiredialog->Controls->Add(Lrole);
		form->hiredialog->Controls->Add(Lcost);
		form->hiredialog->Controls->Add(Lupkeep);
		form->hiredialog->Controls->Add(Ldescription);
	}

	EmployeePoor::EmployeePoor(MyForm^ _form, int _number, int _factor, int _speed, int _pay, System::String^ _pictureImageFile,
		System::String^ _hireImageFile, System::String^ _nameFontFamilyName, int _nameHeight, System::String^ _name,
		System::String^ _role, System::String^ _upKeepText, System::String^ _descriptionText)
		: Employee(_form, _number, _factor, _speed, _pay, _pictureImageFile, _hireImageFile, _nameFontFamilyName, _nameHeight, _name, _role, _upKeepText, _descriptionText)
	{
		poor = false;
	}
	EmployeeCycle::EmployeeCycle(MyForm^ _form, int _number, int _factor, int _speed, int _pay, System::String^ _pictureImageFile,
		System::String^ _hireImageFile, System::String^ _nameFontFamilyName, int _nameHeight, System::String^ _name,
		System::String^ _role, System::String^ _upKeepText, System::String^ _descriptionText)
		: Employee(_form, _number, _factor, _speed, _pay, _pictureImageFile, _hireImageFile, _nameFontFamilyName, _nameHeight, _name, _role, _upKeepText, _descriptionText)
	{
		cycle = 0;
	}
	EmployeePremium::EmployeePremium(MyForm^ _form, int _number, int _factor, int _speed, int _pay, System::String^ _pictureImageFile,
		System::String^ _hireImageFile, System::String^ _nameFontFamilyName, int _nameHeight, System::String^ _name,
		System::String^ _role, System::String^ _upKeepText, System::String^ _descriptionText)
		: Employee(_form, _number, _factor, _speed, _pay, _pictureImageFile, _hireImageFile, _nameFontFamilyName, _nameHeight, _name, _role, _upKeepText, _descriptionText)
	{
		premium = 0;
	}

	System::Void Employee::Bhire_Click(System::Object^  sender, System::EventArgs^  e)
	{
		form->cash -= pay;

		isHired = true;

		form->refreshEmployeesPictures();
		form->refreshEmployeesHireButton();
	}

	void Employee::refreshPictureBox() //TODO nazwa
	{
		form->Phireds[number]->Visible = isHired;
	}
	void Employee::refreshHireButton()
	{
		Bhire->Visible = (form->cash >= pay); //TODO Ile razy pracownik mo¿e byæ wynajêty? [KSZ]
	}
}