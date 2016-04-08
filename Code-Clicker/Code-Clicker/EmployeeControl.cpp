#include "EmployeeControl.h"

namespace CodeClicker {

	EmployeeControl::EmployeeControl(hire^ _form, int _number, int _pay, System::Drawing::Image^ image, System::String^ nameFontFamilyName, System::Drawing::Size nameSize, System::String^ name, System::Drawing::Size roleSize, System::String^ role, System::Drawing::Size costSize, System::Drawing::Size upKeepSize, System::String^ upKeepText)
	{
		isHired = false;

		number = _number;
		form = _form;
		pay = _pay;

		Bhire = (gcnew System::Windows::Forms::PictureBox());
		Lname = (gcnew System::Windows::Forms::Label());
		Lrole = (gcnew System::Windows::Forms::Label());
		Lcost = (gcnew System::Windows::Forms::Label());
		Lupkeep = (gcnew System::Windows::Forms::Label());
		//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(Bhire))->BeginInit();

		Bhire->Cursor = System::Windows::Forms::Cursors::Hand;
		Bhire->Image = image;
		Bhire->Location = System::Drawing::Point(573, 60 + 140 * number);
		Bhire->Size = System::Drawing::Size(154, 84);
		Bhire->TabStop = false;
		Bhire->Tag = pay;
		Bhire->Visible = false;
		Bhire->Click += gcnew System::EventHandler(this, &EmployeeControl::Bhire_Click);

		Lname->AutoSize = true;
		Lname->BackColor = System::Drawing::Color::Transparent;
		Lname->Location = System::Drawing::Point(291, 40 + 140 * number);
		Lname->Font = (gcnew System::Drawing::Font(nameFontFamilyName, 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lname->Size = nameSize;
		Lname->Text = name;

		Lrole->AutoSize = true;
		Lrole->BackColor = System::Drawing::Color::Transparent;
		Lrole->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lrole->Location = System::Drawing::Point(294, 87 + 140 * number);
		Lrole->Size = roleSize; //TODO tylko width jako parametr (height jest zawsze 19)
		Lrole->Text = role;

		Lcost->AutoSize = true;
		Lcost->BackColor = System::Drawing::Color::Transparent;
		Lcost->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lcost->ForeColor = System::Drawing::SystemColors::ControlDark;
		Lcost->Location = System::Drawing::Point(295, 125 * (number + 1));
		Lcost->Size = costSize;
		Lcost->Text = System::String::Format(L"{0} z³ na start", pay);

		Lupkeep->AutoSize = true;
		Lupkeep->BackColor = System::Drawing::Color::Transparent;
		Lupkeep->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		Lupkeep->ForeColor = System::Drawing::SystemColors::ControlDark;
		Lupkeep->Location = System::Drawing::Point(295, 143 + 125 * number);
		Lupkeep->Size = upKeepSize;
		Lupkeep->Text = upKeepText;

		form->Controls->Add(Bhire);
		form->Controls->Add(Lname);
		form->Controls->Add(Lrole);
		form->Controls->Add(Lcost);
		form->Controls->Add(Lupkeep);

		//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(Bhire))->EndInit();
	}

	//wynajem pomocnika		 
	System::Void EmployeeControl::Bhire_Click(System::Object^  sender, System::EventArgs^  e)
	{
		form->paid += pay;
		form->cash -= form->paid;
		isHired = true;

		form->refreshEmployeesPictures();
	}

	void EmployeeControl::refreshPictureBox()
	{
		if (form->cash < pay)
			Bhire->Visible = false;
		//Bhire1->Visible = false; ??? zawsze??? [ tak by³o wczeœniej ]
	}

	System::Void EmployeeControl::check(bool _isHired)
	{
		if (form->cash >= pay && !_isHired)
			Bhire->Visible = true;
	}
}