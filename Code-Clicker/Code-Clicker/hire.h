#pragma once

namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o hire
	/// </summary>
	public ref class hire : public System::Windows::Forms::Form
	{
	public:
		hire(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

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
	private: System::Windows::Forms::Button^  Bhire1;
	private: System::Windows::Forms::Label^  Lhired1name;
	private: System::Windows::Forms::Label^  Lname;
	private: System::Windows::Forms::Label^  Lrole;
	private: System::Windows::Forms::Label^  Lcost;

	private: System::Windows::Forms::Label^  Ldescription;
	private: System::Windows::Forms::Label^  Lhired1role;
	private: System::Windows::Forms::Label^  Lhired1cost;

	private: System::Windows::Forms::Label^  Lhired1description;



	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Bhire1 = (gcnew System::Windows::Forms::Button());
			this->Lhired1name = (gcnew System::Windows::Forms::Label());
			this->Lname = (gcnew System::Windows::Forms::Label());
			this->Lrole = (gcnew System::Windows::Forms::Label());
			this->Lcost = (gcnew System::Windows::Forms::Label());
			this->Ldescription = (gcnew System::Windows::Forms::Label());
			this->Lhired1role = (gcnew System::Windows::Forms::Label());
			this->Lhired1cost = (gcnew System::Windows::Forms::Label());
			this->Lhired1description = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Bhire1
			// 
			this->Bhire1->Enabled = false;
			this->Bhire1->Location = System::Drawing::Point(751, 47);
			this->Bhire1->Name = L"Bhire1";
			this->Bhire1->Size = System::Drawing::Size(107, 26);
			this->Bhire1->TabIndex = 0;
			this->Bhire1->Text = L"zatrudnij";
			this->Bhire1->UseVisualStyleBackColor = true;
			this->Bhire1->Click += gcnew System::EventHandler(this, &hire::Bhire1_Click);
			// 
			// Lhired1name
			// 
			this->Lhired1name->AutoSize = true;
			this->Lhired1name->Location = System::Drawing::Point(21, 54);
			this->Lhired1name->Name = L"Lhired1name";
			this->Lhired1name->Size = System::Drawing::Size(76, 13);
			this->Lhired1name->TabIndex = 1;
			this->Lhired1name->Text = L"Zosia Samosia";
			// 
			// Lname
			// 
			this->Lname->AutoSize = true;
			this->Lname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Lname->ForeColor = System::Drawing::Color::Navy;
			this->Lname->Location = System::Drawing::Point(21, 21);
			this->Lname->Name = L"Lname";
			this->Lname->Size = System::Drawing::Size(93, 13);
			this->Lname->TabIndex = 2;
			this->Lname->Text = L"Imiê i nazwisko";
			// 
			// Lrole
			// 
			this->Lrole->AutoSize = true;
			this->Lrole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Lrole->ForeColor = System::Drawing::Color::Navy;
			this->Lrole->Location = System::Drawing::Point(136, 21);
			this->Lrole->Name = L"Lrole";
			this->Lrole->Size = System::Drawing::Size(33, 13);
			this->Lrole->TabIndex = 3;
			this->Lrole->Text = L"Rola";
			// 
			// Lcost
			// 
			this->Lcost->AutoSize = true;
			this->Lcost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Lcost->ForeColor = System::Drawing::Color::Navy;
			this->Lcost->Location = System::Drawing::Point(230, 21);
			this->Lcost->Name = L"Lcost";
			this->Lcost->Size = System::Drawing::Size(169, 13);
			this->Lcost->TabIndex = 4;
			this->Lcost->Text = L"Koszt wynajêcia i utrzymania";
			// 
			// Ldescription
			// 
			this->Ldescription->AutoSize = true;
			this->Ldescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Ldescription->ForeColor = System::Drawing::Color::Navy;
			this->Ldescription->Location = System::Drawing::Point(542, 21);
			this->Ldescription->Name = L"Ldescription";
			this->Ldescription->Size = System::Drawing::Size(32, 13);
			this->Ldescription->TabIndex = 6;
			this->Ldescription->Text = L"Opis";
			// 
			// Lhired1role
			// 
			this->Lhired1role->AutoSize = true;
			this->Lhired1role->Location = System::Drawing::Point(136, 54);
			this->Lhired1role->Name = L"Lhired1role";
			this->Lhired1role->Size = System::Drawing::Size(67, 13);
			this->Lhired1role->TabIndex = 7;
			this->Lhired1role->Text = L"programistka";
			// 
			// Lhired1cost
			// 
			this->Lhired1cost->AutoSize = true;
			this->Lhired1cost->Location = System::Drawing::Point(230, 54);
			this->Lhired1cost->Name = L"Lhired1cost";
			this->Lhired1cost->Size = System::Drawing::Size(296, 13);
			this->Lhired1cost->TabIndex = 8;
			this->Lhired1cost->Text = L"500 z³ na start i po³owa z generowanych przez siebie zysków";
			// 
			// Lhired1description
			// 
			this->Lhired1description->AutoSize = true;
			this->Lhired1description->Location = System::Drawing::Point(542, 54);
			this->Lhired1description->Name = L"Lhired1description";
			this->Lhired1description->Size = System::Drawing::Size(152, 13);
			this->Lhired1description->TabIndex = 10;
			this->Lhired1description->Text = L"generuje dodatkowe linie kodu";
			// 
			// hire
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->ClientSize = System::Drawing::Size(870, 100);
			this->Controls->Add(this->Lhired1description);
			this->Controls->Add(this->Lhired1cost);
			this->Controls->Add(this->Lhired1role);
			this->Controls->Add(this->Ldescription);
			this->Controls->Add(this->Lcost);
			this->Controls->Add(this->Lrole);
			this->Controls->Add(this->Lname);
			this->Controls->Add(this->Lhired1name);
			this->Controls->Add(this->Bhire1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"hire";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wynajem";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Bhire1_Click(System::Object^  sender, System::EventArgs^  e) {
//...			 
}
};
}
