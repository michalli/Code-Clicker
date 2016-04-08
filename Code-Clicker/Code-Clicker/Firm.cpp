#include "Firm.h"

namespace CodeClicker {

	Firm::Firm(MyForm^ _form, int _number, System::Drawing::Size _LSize, System::String^ _LText, System::Drawing::Size _DescriptionSize, System::String^ _DescriptionText, System::Drawing::Size _CostSize)
	{
		form = _form;
		number = _number;

		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(upgradefirm::typeid));

		B = (gcnew System::Windows::Forms::Button());
		L = (gcnew System::Windows::Forms::Label());
		Ldescription = (gcnew System::Windows::Forms::Label());
		Lcost = (gcnew System::Windows::Forms::Label());
		Lperk = (gcnew System::Windows::Forms::Label());

		L->AutoSize = true;
		L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		L->Location = System::Drawing::Point(30, 30 + (number * 63));
		L->Size = _LSize;
		L->Text = _LText;

		Ldescription->AutoSize = true;
		Ldescription->Location = System::Drawing::Point(30, 40+(number*63));
		Ldescription->Size = _DescriptionSize;
		Ldescription->Text = _DescriptionText;

		Lcost->AutoSize = true;
		Lcost->ForeColor = System::Drawing::Color::Red;
		Lcost->Location = System::Drawing::Point(30, 55 + (number * 63));
		Lcost->Size = _CostSize;

		Lcost->Text = L"KOSZT:   500z³";

		this->L2cost->Text = L"KOSZT:   1 500z³";

		this->L3cost->Text = L"KOSZT:   5 000z³";

		this->L4cost->Text = L"KOSZT:   20 000z³";

		this->L1perk->Size = System::Drawing::Size(241, 13);
		this->L1perk->TabIndex = 31;
		this->L1perk->Text = L"ZYSK:   dodatkowa z³otówka za ka¿d¹ liniê kodu";

		this->L2perk->AutoSize = true;
		this->L2perk->ForeColor = System::Drawing::Color::Lime;
		this->L2perk->Location = System::Drawing::Point(146, 115);
		this->L2perk->Name = L"L2perk";
		this->L2perk->Size = System::Drawing::Size(240, 13);
		this->L2perk->TabIndex = 36;
		this->L2perk->Text = L"ZYSK:   dodatkowe trzy z³ote za ka¿d¹ liniê kodu";

		this->L3perk->AutoSize = true;
		this->L3perk->ForeColor = System::Drawing::Color::Lime;
		this->L3perk->Location = System::Drawing::Point(146, 180);
		this->L3perk->Name = L"L3perk";
		this->L3perk->Size = System::Drawing::Size(262, 13);
		this->L3perk->TabIndex = 41;
		this->L3perk->Text = L"ZYSK:   dodatkowe szeœæ z³otych za ka¿d¹ liniê kodu";

		this->L4perk->AutoSize = true;
		this->L4perk->ForeColor = System::Drawing::Color::Lime;
		this->L4perk->Location = System::Drawing::Point(146, 243);
		this->L4perk->Name = L"L4perk";
		this->L4perk->Size = System::Drawing::Size(273, 13);
		this->L4perk->TabIndex = 46;
		this->L4perk->Text = L"ZYSK:   dodatkowe dziesiêæ z³otych za ka¿d¹ liniê kodu";

		this->B1->Location = System::Drawing::Point(462, 28);
		this->B1->Name = L"B1";
		this->B1->Size = System::Drawing::Size(120, 39);
		this->B1->TabIndex = 32;
		this->B1->Text = L"Zakup";
		this->B1->UseVisualStyleBackColor = true;
		this->B1->Visible = false;

		this->B2->Location = System::Drawing::Point(462, 89);
		this->B2->Name = L"B2";
		this->B2->Size = System::Drawing::Size(120, 39);
		this->B2->TabIndex = 37;
		this->B2->Text = L"Zakup";
		this->B2->UseVisualStyleBackColor = true;
		this->B2->Visible = false;

		this->B3->Location = System::Drawing::Point(462, 154);
		this->B3->Name = L"B3";
		this->B3->Size = System::Drawing::Size(120, 39);
		this->B3->TabIndex = 42;
		this->B3->Text = L"Zakup";
		this->B3->UseVisualStyleBackColor = true;
		this->B3->Visible = false;

		this->B4->Location = System::Drawing::Point(462, 217);
		this->B4->Name = L"B4";
		this->B4->Size = System::Drawing::Size(120, 39);
		this->B4->TabIndex = 47;
		this->B4->Text = L"Zakup";
		this->B4->UseVisualStyleBackColor = true;
		this->B4->Visible = false;

		this->Controls->Add(this->B4);
		this->Controls->Add(this->L4perk);
		this->Controls->Add(this->L4cost);
		this->Controls->Add(this->L4description);
		this->Controls->Add(this->L4);
		this->Controls->Add(this->B3);
		this->Controls->Add(this->L3perk);
		this->Controls->Add(this->L3cost);
		this->Controls->Add(this->L3description);
		this->Controls->Add(this->L3);
		this->Controls->Add(this->B2);
		this->Controls->Add(this->L2perk);
		this->Controls->Add(this->L2cost);
		this->Controls->Add(this->L2description);
		this->Controls->Add(this->L2);
		this->Controls->Add(this->B1);
		this->Controls->Add(this->L1perk);
		this->Controls->Add(this->L1cost);
		this->Controls->Add(this->L1description);
		this->Controls->Add(this->L1);
	}
}