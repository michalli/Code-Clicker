#pragma once

namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o upgradeemployee4
	/// </summary>
	public ref class upgradeemployee4 : public System::Windows::Forms::Form
	{
	public:
		upgradeemployee4(void)
		{
			InitializeComponent();
		}

		void check(int passedcash, bool e1, bool e2, bool e3){
			cash = passedcash;
			if (passedcash >= 1000 && !e1)B1->Visible = true;
			if (passedcash >= 3000 && !e2)B2->Visible = true;
			if (passedcash >= 5000 && !e3)B3->Visible = true;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~upgradeemployee4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Bback;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Label^  L3perk;
	private: System::Windows::Forms::Label^  L3cost;
	private: System::Windows::Forms::Label^  L3description;
	private: System::Windows::Forms::Label^  L3;
	private: System::Windows::Forms::Button^  B2;
	private: System::Windows::Forms::Label^  L2perk;
	private: System::Windows::Forms::Label^  L2cost;
	private: System::Windows::Forms::Label^  L2description;
	private: System::Windows::Forms::Label^  L2;
	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Label^  L1perk;
	private: System::Windows::Forms::Label^  L1cost;
	private: System::Windows::Forms::Label^  L1description;
	private: System::Windows::Forms::Label^  L1;
	protected:

	private:

		int cash;
		bool perk1;
		bool perk2;
		bool perk3;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(upgradeemployee4::typeid));
			this->Bback = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->L3perk = (gcnew System::Windows::Forms::Label());
			this->L3cost = (gcnew System::Windows::Forms::Label());
			this->L3description = (gcnew System::Windows::Forms::Label());
			this->L3 = (gcnew System::Windows::Forms::Label());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->L2perk = (gcnew System::Windows::Forms::Label());
			this->L2cost = (gcnew System::Windows::Forms::Label());
			this->L2description = (gcnew System::Windows::Forms::Label());
			this->L2 = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->L1perk = (gcnew System::Windows::Forms::Label());
			this->L1cost = (gcnew System::Windows::Forms::Label());
			this->L1description = (gcnew System::Windows::Forms::Label());
			this->L1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
			this->SuspendLayout();
			// 
			// Bback
			// 
			this->Bback->BackColor = System::Drawing::Color::Transparent;
			this->Bback->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bback->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bback.Image")));
			this->Bback->Location = System::Drawing::Point(234, 219);
			this->Bback->Name = L"Bback";
			this->Bback->Size = System::Drawing::Size(143, 67);
			this->Bback->TabIndex = 28;
			this->Bback->TabStop = false;
			this->Bback->Click += gcnew System::EventHandler(this, &upgradeemployee4::Bback_Click);
			// 
			// B3
			// 
			this->B3->Location = System::Drawing::Point(462, 149);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(120, 39);
			this->B3->TabIndex = 72;
			this->B3->Text = L"Zainwestuj";
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Visible = false;
			// 
			// L3perk
			// 
			this->L3perk->AutoSize = true;
			this->L3perk->ForeColor = System::Drawing::Color::Lime;
			this->L3perk->Location = System::Drawing::Point(146, 175);
			this->L3perk->Name = L"L3perk";
			this->L3perk->Size = System::Drawing::Size(254, 13);
			this->L3perk->TabIndex = 71;
			this->L3perk->Text = L"ZYSK:   Janusz Apacz testuje szeœæ linii kodu wiêcej";
			// 
			// L3cost
			// 
			this->L3cost->AutoSize = true;
			this->L3cost->ForeColor = System::Drawing::Color::Red;
			this->L3cost->Location = System::Drawing::Point(30, 175);
			this->L3cost->Name = L"L3cost";
			this->L3cost->Size = System::Drawing::Size(91, 13);
			this->L3cost->TabIndex = 70;
			this->L3cost->Text = L"KOSZT:   5 000z³";
			// 
			// L3description
			// 
			this->L3description->AutoSize = true;
			this->L3description->Location = System::Drawing::Point(30, 162);
			this->L3description->Name = L"L3description";
			this->L3description->Size = System::Drawing::Size(336, 13);
			this->L3description->TabIndex = 69;
			this->L3description->Text = L"to ubezpieczenie zwiêkszy poczucie bezpieczeñstwa Twojego testera";
			// 
			// L3
			// 
			this->L3->AutoSize = true;
			this->L3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L3->Location = System::Drawing::Point(30, 149);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(212, 13);
			this->L3->TabIndex = 68;
			this->L3->Text = L"Ubezpieczenie od pora¿enia pr¹dem";
			// 
			// B2
			// 
			this->B2->Location = System::Drawing::Point(462, 84);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(120, 39);
			this->B2->TabIndex = 67;
			this->B2->Text = L"Zainwestuj";
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Visible = false;
			// 
			// L2perk
			// 
			this->L2perk->AutoSize = true;
			this->L2perk->ForeColor = System::Drawing::Color::Lime;
			this->L2perk->Location = System::Drawing::Point(146, 110);
			this->L2perk->Name = L"L2perk";
			this->L2perk->Size = System::Drawing::Size(259, 13);
			this->L2perk->TabIndex = 66;
			this->L2perk->Text = L"ZYSK:   Janusz Apacz testuje cztery linie kodu wiêcej";
			// 
			// L2cost
			// 
			this->L2cost->AutoSize = true;
			this->L2cost->ForeColor = System::Drawing::Color::Red;
			this->L2cost->Location = System::Drawing::Point(30, 110);
			this->L2cost->Name = L"L2cost";
			this->L2cost->Size = System::Drawing::Size(91, 13);
			this->L2cost->TabIndex = 65;
			this->L2cost->Text = L"KOSZT:   3 000z³";
			// 
			// L2description
			// 
			this->L2description->AutoSize = true;
			this->L2description->Location = System::Drawing::Point(30, 97);
			this->L2description->Name = L"L2description";
			this->L2description->Size = System::Drawing::Size(411, 13);
			this->L2description->TabIndex = 64;
			this->L2description->Text = L"ten zestaw pozwoli poæwiczyæ Twojemu testerowi, przez co nabierze wiêkszej wprawy"
				L"";
			// 
			// L2
			// 
			this->L2->AutoSize = true;
			this->L2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L2->Location = System::Drawing::Point(30, 84);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(150, 13);
			this->L2->TabIndex = 63;
			this->L2->Text = L"Zestaw \"Ma³ego testera\"";
			// 
			// B1
			// 
			this->B1->Location = System::Drawing::Point(462, 23);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(120, 39);
			this->B1->TabIndex = 62;
			this->B1->Text = L"Zainwestuj";
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Visible = false;
			// 
			// L1perk
			// 
			this->L1perk->AutoSize = true;
			this->L1perk->ForeColor = System::Drawing::Color::Lime;
			this->L1perk->Location = System::Drawing::Point(146, 49);
			this->L1perk->Name = L"L1perk";
			this->L1perk->Size = System::Drawing::Size(272, 13);
			this->L1perk->TabIndex = 61;
			this->L1perk->Text = L"ZYSK:   zwiêksza szybkoœæ testowania Janusza Apacza";
			// 
			// L1cost
			// 
			this->L1cost->AutoSize = true;
			this->L1cost->ForeColor = System::Drawing::Color::Red;
			this->L1cost->Location = System::Drawing::Point(30, 49);
			this->L1cost->Name = L"L1cost";
			this->L1cost->Size = System::Drawing::Size(91, 13);
			this->L1cost->TabIndex = 60;
			this->L1cost->Text = L"KOSZT:   1 000z³";
			// 
			// L1description
			// 
			this->L1description->AutoSize = true;
			this->L1description->Location = System::Drawing::Point(30, 36);
			this->L1description->Name = L"L1description";
			this->L1description->Size = System::Drawing::Size(306, 13);
			this->L1description->TabIndex = 59;
			this->L1description->Text = L"dziêki temu podrêcznikowi, Twój tester bêdzie wiedzia³ co robiæ";
			// 
			// L1
			// 
			this->L1->AutoSize = true;
			this->L1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L1->Location = System::Drawing::Point(30, 23);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(113, 13);
			this->L1->TabIndex = 58;
			this->L1->Text = L"Podrêcznik testera";
			// 
			// upgradeemployee4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(607, 297);
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
			this->Controls->Add(this->Bback);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"upgradeemployee4";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ulepszenia zwiêkszaj¹ce umiejêtnoœci Janusza Apacza";
			this->Load += gcnew System::EventHandler(this, &upgradeemployee4::upgradeemployee4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void upgradeemployee4_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Bback_Click(System::Object^  sender, System::EventArgs^  e) {
				 //przycisk wstecz
				 this->Close();
	}
};
}