#include "Firm.h"

namespace CodeClicker {

	Firm::Firm(MyForm^ _form, int _number, int _cost, int _additionalMoneyPerCodeLine, System::Drawing::Size _LSize,
		System::String^ _LText, System::Drawing::Size _DescriptionSize, System::String^ _DescriptionText,
		System::Drawing::Size _CostSize, System::Drawing::Size _PerkSize)
	{
		form = _form;
		number = _number;

		cost = _cost;
		additionalMoneyPerCodeLine = _additionalMoneyPerCodeLine;

		B = (gcnew System::Windows::Forms::Button());
		L = (gcnew System::Windows::Forms::Label());
		Ldescription = (gcnew System::Windows::Forms::Label());
		Lcost = (gcnew System::Windows::Forms::Label());
		Lperk = (gcnew System::Windows::Forms::Label());

		B->Location = System::Drawing::Point(462, 28 + (number * 63));
		B->Size = System::Drawing::Size(120, 39);
		B->Text = L"Zakup";
		B->UseVisualStyleBackColor = true;
		B->Visible = false;

		L->AutoSize = true;
		L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
		L->Location = System::Drawing::Point(30, 30 + (number * 63));
		L->Size = _LSize;
		L->Text = _LText;

		Ldescription->AutoSize = true;
		Ldescription->Location = System::Drawing::Point(30, 40 + (number * 63));
		Ldescription->Size = _DescriptionSize;
		Ldescription->Text = _DescriptionText;

		Lcost->AutoSize = true;
		Lcost->ForeColor = System::Drawing::Color::Red;
		Lcost->Location = System::Drawing::Point(30, 55 + (number * 63));
		Lcost->Size = _CostSize;
		Lcost->Text = String::Format(L"KOSZT:   {0}z³", cost);

		Lperk->AutoSize = true;
		Lperk->ForeColor = System::Drawing::Color::Lime;
		Lperk->Location = System::Drawing::Point(146, 55 + (number * 63));
		Lperk->Size = _PerkSize;
		Lperk->Text = String::Format(L"ZYSK:   {0} za ka¿d¹ liniê kodu", additionalMoney(additionalMoneyPerCodeLine));

		form->upgradefirmDialog->Controls->Add(B);
		form->upgradefirmDialog->Controls->Add(L);
		form->upgradefirmDialog->Controls->Add(Ldescription);
		form->upgradefirmDialog->Controls->Add(Lcost);
		form->upgradefirmDialog->Controls->Add(Lperk);
	}

	System::String^ Firm::additionalMoney(int money)
	{
		//TODO
		//przyk³ady:
		/*
		dodatkowa z³otówka

			dodatkowe trzy z³ote

			dodatkowe szeœæ z³otych

			dodatkowe dziesiêæ z³otych
			*/

		return "pupa";
	}
}