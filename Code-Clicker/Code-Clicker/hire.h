#pragma once

#include "EmployeeControl.h"
#include "Employee.h"

namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class EmployeeControl;

	/// <summary>
	/// Podsumowanie informacji o hire
	/// </summary>
	public ref class hire : public System::Windows::Forms::Form
	{
		//TODO do shared
		static const int employeesCount = 4;
	public:
		hire(void);

		void check(int _cash, bool* e); //TODO nazwa

		bool* getemployees(); //TODO nazwa
		int getpaid() {
			return paid;
		}

		void refreshEmployeesPictures();

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~hire()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  P1;
	private: System::Windows::Forms::PictureBox^  P2;
	private: System::Windows::Forms::PictureBox^  P3;
	private: System::Windows::Forms::Label^  L2premium;
	private: System::Windows::Forms::Label^  L3absence;
	private: System::Windows::Forms::Label^  L3trans;
	private: System::Windows::Forms::Label^  L4determination;
	private: System::Windows::Forms::Label^  L4laziness;
	private: System::Windows::Forms::Label^  L4rebel;

	private:
		array<EmployeeControl^>^  employees;
		array<Employee^>^  employees2;
	public:
		int paid;
		int cash;


	private: System::Windows::Forms::PictureBox^  Bback;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
			 /// zawartoœæ tej metody z edytorem kodu.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(hire::typeid));

				 //TODO do klasy

				 this->P1 = (gcnew System::Windows::Forms::PictureBox());
				 this->P2 = (gcnew System::Windows::Forms::PictureBox());

				 this->L2premium = (gcnew System::Windows::Forms::Label());
				 this->Bback = (gcnew System::Windows::Forms::PictureBox());
				 this->L3absence = (gcnew System::Windows::Forms::Label());
				 this->P3 = (gcnew System::Windows::Forms::PictureBox());
				 this->L3trans = (gcnew System::Windows::Forms::Label());
				 this->L4determination = (gcnew System::Windows::Forms::Label());
				 this->L4laziness = (gcnew System::Windows::Forms::Label());
				 this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				 this->L4rebel = (gcnew System::Windows::Forms::Label());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // P1
				 // 
				 this->P1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P1.Image")));
				 this->P1->Location = System::Drawing::Point(64, 39);
				 this->P1->Name = L"P1";
				 this->P1->Size = System::Drawing::Size(200, 135);
				 this->P1->TabIndex = 1;
				 this->P1->TabStop = false;
				 // 
				 // P2
				 // 
				 this->P2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P2.Image")));
				 this->P2->Location = System::Drawing::Point(64, 180);
				 this->P2->Name = L"P2";
				 this->P2->Size = System::Drawing::Size(200, 135);
				 this->P2->TabIndex = 2;
				 this->P2->TabStop = false;
				 // 
				 // L2premium
				 // 
				 this->L2premium->AutoSize = true;
				 this->L2premium->BackColor = System::Drawing::Color::Transparent;
				 this->L2premium->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->L2premium->ForeColor = System::Drawing::SystemColors::ControlDark;
				 this->L2premium->Location = System::Drawing::Point(295, 286);
				 this->L2premium->Name = L"L2premium";
				 this->L2premium->Size = System::Drawing::Size(102, 15);
				 this->L2premium->TabIndex = 13;
				 this->L2premium->Text = L"mo¿e ¿¹daæ premii";
				 // 
				 // Bback
				 // 
				 this->Bback->BackColor = System::Drawing::Color::Transparent;
				 this->Bback->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Bback->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bback.Image")));
				 this->Bback->Location = System::Drawing::Point(350, 605);
				 this->Bback->Name = L"Bback";
				 this->Bback->Size = System::Drawing::Size(116, 65);
				 this->Bback->TabIndex = 26;
				 this->Bback->TabStop = false;
				 this->Bback->Click += gcnew System::EventHandler(this, &hire::Bback_Click);
				 // 
				 // L3absence
				 // 
				 this->L3absence->AutoSize = true;
				 this->L3absence->BackColor = System::Drawing::Color::Transparent;
				 this->L3absence->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->L3absence->ForeColor = System::Drawing::SystemColors::ControlDark;
				 this->L3absence->Location = System::Drawing::Point(295, 417);
				 this->L3absence->Name = L"L3absence";
				 this->L3absence->Size = System::Drawing::Size(175, 15);
				 this->L3absence->TabIndex = 33;
				 this->L3absence->Text = L"czasem nie przychodzi do pracy";
				 // 
				 // P3
				 // 
				 this->P3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P3.Image")));
				 this->P3->Location = System::Drawing::Point(64, 321);
				 this->P3->Name = L"P3";
				 this->P3->Size = System::Drawing::Size(200, 135);
				 this->P3->TabIndex = 27;
				 this->P3->TabStop = false;
				 // 
				 // L3trans
				 // 
				 this->L3trans->AutoSize = true;
				 this->L3trans->BackColor = System::Drawing::Color::Transparent;
				 this->L3trans->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->L3trans->ForeColor = System::Drawing::SystemColors::ControlDark;
				 this->L3trans->Location = System::Drawing::Point(295, 432);
				 this->L3trans->Name = L"L3trans";
				 this->L3trans->Size = System::Drawing::Size(113, 15);
				 this->L3trans->TabIndex = 34;
				 this->L3trans->Text = L"mo¿e wpaœæ w trans";
				 // 
				 // L4determination
				 // 
				 this->L4determination->AutoSize = true;
				 this->L4determination->BackColor = System::Drawing::Color::Transparent;
				 this->L4determination->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->L4determination->ForeColor = System::Drawing::SystemColors::ControlDark;
				 this->L4determination->Location = System::Drawing::Point(295, 573);
				 this->L4determination->Name = L"L4determination";
				 this->L4determination->Size = System::Drawing::Size(193, 15);
				 this->L4determination->TabIndex = 42;
				 this->L4determination->Text = L"wzrost motywacji pod koniec cyklu";
				 // 
				 // L4laziness
				 // 
				 this->L4laziness->AutoSize = true;
				 this->L4laziness->BackColor = System::Drawing::Color::Transparent;
				 this->L4laziness->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->L4laziness->ForeColor = System::Drawing::SystemColors::ControlDark;
				 this->L4laziness->Location = System::Drawing::Point(295, 558);
				 this->L4laziness->Name = L"L4laziness";
				 this->L4laziness->Size = System::Drawing::Size(186, 15);
				 this->L4laziness->TabIndex = 41;
				 this->L4laziness->Text = L"brak motywacji na pocz¹tku cyklu";
				 // 
				 // pictureBox2
				 // 
				 this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
				 this->pictureBox2->Location = System::Drawing::Point(64, 462);
				 this->pictureBox2->Name = L"pictureBox2";
				 this->pictureBox2->Size = System::Drawing::Size(200, 135);
				 this->pictureBox2->TabIndex = 35;
				 this->pictureBox2->TabStop = false;
				 // 
				 // L4rebel
				 // 
				 this->L4rebel->AutoSize = true;
				 this->L4rebel->BackColor = System::Drawing::Color::Transparent;
				 this->L4rebel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->L4rebel->ForeColor = System::Drawing::SystemColors::ControlDark;
				 this->L4rebel->Location = System::Drawing::Point(295, 587);
				 this->L4rebel->Name = L"L4rebel";
				 this->L4rebel->Size = System::Drawing::Size(230, 15);
				 this->L4rebel->TabIndex = 43;
				 this->L4rebel->Text = L"nie pracuje gdy brak pieniêdzy na wyp³atê";
				 // 
				 // hire
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::Blue;
				 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->ClientSize = System::Drawing::Size(794, 672);
				 this->Controls->Add(this->L4rebel);
				 this->Controls->Add(this->L4determination);
				 this->Controls->Add(this->L4laziness);
				 this->Controls->Add(this->pictureBox2);
				 this->Controls->Add(this->L3trans);
				 this->Controls->Add(this->L3absence);
				 this->Controls->Add(this->P3);
				 this->Controls->Add(this->Bback);
				 this->Controls->Add(this->L2premium);
				 this->Controls->Add(this->P2);
				 this->Controls->Add(this->P1);
				 this->DoubleBuffered = true;
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->MaximizeBox = false;
				 this->Name = L"hire";
				 this->ShowIcon = false;
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Wynajem";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void Bback_Click(System::Object^  sender, System::EventArgs^  e) {
		//przycisk wstecz
		this->Close();
	}
	};

}
