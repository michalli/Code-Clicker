#include "Employee.h"

namespace CodeClicker {

	Employee::Employee(MyForm^ _form, int _number, int _factor, int _speed, int _pay, System::Drawing::Image^ _image, System::String^ _nameFontFamilyName, System::Drawing::Size _nameSize, System::String^ _name, System::Drawing::Size _roleSize, System::String^ _role, System::Drawing::Size _costSize, System::Drawing::Size _upKeepSize, System::String^ _upKeepText)
	{
		form = _form;
		number = _number;

		isHired = false;
		pay = _pay;
		factor = _factor;
		speed = _speed;

		progress = 0;

		Bhire = (gcnew System::Windows::Forms::PictureBox());
		Lname = (gcnew System::Windows::Forms::Label());
		Lrole = (gcnew System::Windows::Forms::Label());
		Lcost = (gcnew System::Windows::Forms::Label());
		Lupkeep = (gcnew System::Windows::Forms::Label());

		Bhire->Cursor = System::Windows::Forms::Cursors::Hand;
		Bhire->Image = _image;
		Bhire->Location = System::Drawing::Point(573, 60 + 140 * number);
		Bhire->Size = System::Drawing::Size(154, 84);
		Bhire->TabStop = false;
		Bhire->Tag = pay;
		Bhire->Visible = false;
		Bhire->Click += gcnew System::EventHandler(this, &Employee::Bhire_Click);

		Lname->AutoSize = true;
		Lname->BackColor = System::Drawing::Color::Transparent;
		Lname->Location = System::Drawing::Point(291, 40 + 140 * number);
		Lname->Font = (gcnew System::Drawing::Font(_nameFontFamilyName, 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lname->Size = _nameSize;
		Lname->Text = _name;

		Lrole->AutoSize = true;
		Lrole->BackColor = System::Drawing::Color::Transparent;
		Lrole->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lrole->Location = System::Drawing::Point(294, 87 + 140 * number);
		Lrole->Size = _roleSize; //TODO tylko width jako parametr (height jest zawsze 19)
		Lrole->Text = _role;

		Lcost->AutoSize = true;
		Lcost->BackColor = System::Drawing::Color::Transparent;
		Lcost->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lcost->ForeColor = System::Drawing::SystemColors::ControlDark;
		Lcost->Location = System::Drawing::Point(295, 125 * (number + 1));
		Lcost->Size = _costSize;
		Lcost->Text = System::String::Format(L"{0} z³ na start", pay);

		Lupkeep->AutoSize = true;
		Lupkeep->BackColor = System::Drawing::Color::Transparent;
		Lupkeep->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lupkeep->ForeColor = System::Drawing::SystemColors::ControlDark;
		Lupkeep->Location = System::Drawing::Point(295, 143 + 125 * number);
		Lupkeep->Size = _upKeepSize;
		Lupkeep->Text = _upKeepText;

		form->hiredialog->Controls->Add(Bhire);
		form->hiredialog->Controls->Add(Lname);
		form->hiredialog->Controls->Add(Lrole);
		form->hiredialog->Controls->Add(Lcost);
		form->hiredialog->Controls->Add(Lupkeep);
	}
	EmployeePoor::EmployeePoor(MyForm^ _form, int _number, int _factor, int _speed, int _pay, System::Drawing::Image^ _image, System::String^ _nameFontFamilyName, System::Drawing::Size _nameSize, System::String^ _name, System::Drawing::Size _roleSize, System::String^ _role, System::Drawing::Size _costSize, System::Drawing::Size _upKeepSize, System::String^ _upKeepText) : Employee(_form, _number, _factor, _speed, _pay, _image, _nameFontFamilyName, _nameSize, _name, _roleSize, _role, _costSize, _upKeepSize, _upKeepText)
	{
		poor = false;
	}
	EmployeeCycle::EmployeeCycle(MyForm^ _form, int _number, int _factor, int _speed, int _pay, System::Drawing::Image^ _image, System::String^ _nameFontFamilyName, System::Drawing::Size _nameSize, System::String^ _name, System::Drawing::Size _roleSize, System::String^ _role, System::Drawing::Size _costSize, System::Drawing::Size _upKeepSize, System::String^ _upKeepText) : Employee(_form, _number, _factor, _speed, _pay, _image, _nameFontFamilyName, _nameSize, _name, _roleSize, _role, _costSize, _upKeepSize, _upKeepText)
	{
		cycle = 0;
	}
	EmployeePremium::EmployeePremium(MyForm^ _form, int _number, int _factor, int _speed, int _pay, System::Drawing::Image^ _image, System::String^ _nameFontFamilyName, System::Drawing::Size _nameSize, System::String^ _name, System::Drawing::Size _roleSize, System::String^ _role, System::Drawing::Size _costSize, System::Drawing::Size _upKeepSize, System::String^ _upKeepText) : Employee(_form, _number, _factor, _speed, _pay, _image, _nameFontFamilyName, _nameSize, _name, _roleSize, _role, _costSize, _upKeepSize, _upKeepText)
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