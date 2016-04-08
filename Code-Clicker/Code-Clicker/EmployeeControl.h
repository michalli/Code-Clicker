#ifndef EMP_CTRL_H
#define EMP_CTRL_H

#include "hire.h"

namespace CodeClicker { //TODO u¿yæ gdzie indziej

	ref class hire;// : public System::Windows::Forms::Form;

						//TODO do jednej klasy z Employee
	public ref class EmployeeControl
	{
	public:
		hire^ form; //TODO!!! referencja
		int number;
		bool isHired;
		int pay;

		System::Windows::Forms::PictureBox^  Bhire;
		System::Windows::Forms::Label^  Lname;
		System::Windows::Forms::Label^  Lrole;
		System::Windows::Forms::Label^  Lcost;
		System::Windows::Forms::Label^  Lupkeep;

	public:
		EmployeeControl(hire^, int, int, System::Drawing::Image^, System::String^, System::Drawing::Size, System::String^, System::Drawing::Size, System::String^, System::Drawing::Size, System::Drawing::Size, System::String^);

		System::Void check(bool);

		void refreshPictureBox();

	protected:
		System::Void Bhire_Click(System::Object^  sender, System::EventArgs^  e);

	};
}

#endif