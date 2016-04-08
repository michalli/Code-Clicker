#pragma once

#include "MyForm.h"

namespace CodeClicker {

	ref class MyForm;

	ref class Firm
	{
		MyForm^ form;
		int number;

	private: System::Windows::Forms::Button^  B;
	private: System::Windows::Forms::Label^  L;
	private: System::Windows::Forms::Label^  Ldescription;
	private: System::Windows::Forms::Label^  Lcost;
	private: System::Windows::Forms::Label^  Lperk;

	public:
		Firm();
	};

}