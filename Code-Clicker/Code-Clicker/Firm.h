#pragma once

#include "MyForm.h"

using namespace std;

namespace CodeClicker {

	ref class MyForm;

	ref class Firm
	{
		MyForm^ form;
		int number;
		int cost;
		int additionalMoneyPerCodeLine;

	private: System::Windows::Forms::Button^  B;
	private: System::Windows::Forms::Label^  L;
	private: System::Windows::Forms::Label^  Ldescription;
	private: System::Windows::Forms::Label^  Lcost;
	private: System::Windows::Forms::Label^  Lperk;

	public:
		Firm(MyForm^ _form, int _number, int _cost, int _additionalMoneyPerCodeLine, System::Drawing::Size _LSize, System::String^ _LText, System::Drawing::Size _DescriptionSize, System::String^ _DescriptionText, System::Drawing::Size _CostSize, System::Drawing::Size _PerkSize);

	private:
		System::String^ additionalMoney(int money);

	};

}