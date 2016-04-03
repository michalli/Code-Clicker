#pragma once

namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o upgradefirm
	/// </summary>
	public ref class upgradefirm : public System::Windows::Forms::Form
	{
	public:
		upgradefirm(void)
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
		~upgradefirm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Bback;
	private: System::Windows::Forms::Label^  L1;
	private: System::Windows::Forms::Label^  L1description;
	private: System::Windows::Forms::Label^  L1cost;
	private: System::Windows::Forms::Label^  L1perk;
	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Button^  B2;
	private: System::Windows::Forms::Label^  L2perk;
	private: System::Windows::Forms::Label^  L2cost;
	private: System::Windows::Forms::Label^  L2description;
	private: System::Windows::Forms::Label^  L2;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Label^  L3perk;
	private: System::Windows::Forms::Label^  L3cost;
	private: System::Windows::Forms::Label^  L3description;
	private: System::Windows::Forms::Label^  L3;
	private: System::Windows::Forms::Button^  B4;
	private: System::Windows::Forms::Label^  L4perk;
	private: System::Windows::Forms::Label^  L4cost;
	private: System::Windows::Forms::Label^  L4description;
	private: System::Windows::Forms::Label^  L4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(upgradefirm::typeid));
			this->Bback = (gcnew System::Windows::Forms::PictureBox());
			this->L1 = (gcnew System::Windows::Forms::Label());
			this->L1description = (gcnew System::Windows::Forms::Label());
			this->L1cost = (gcnew System::Windows::Forms::Label());
			this->L1perk = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->L2perk = (gcnew System::Windows::Forms::Label());
			this->L2cost = (gcnew System::Windows::Forms::Label());
			this->L2description = (gcnew System::Windows::Forms::Label());
			this->L2 = (gcnew System::Windows::Forms::Label());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->L3perk = (gcnew System::Windows::Forms::Label());
			this->L3cost = (gcnew System::Windows::Forms::Label());
			this->L3description = (gcnew System::Windows::Forms::Label());
			this->L3 = (gcnew System::Windows::Forms::Label());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->L4perk = (gcnew System::Windows::Forms::Label());
			this->L4cost = (gcnew System::Windows::Forms::Label());
			this->L4description = (gcnew System::Windows::Forms::Label());
			this->L4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
			this->SuspendLayout();
			// 
			// Bback
			// 
			this->Bback->BackColor = System::Drawing::Color::Transparent;
			this->Bback->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bback->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bback.Image")));
			this->Bback->Location = System::Drawing::Point(244, 281);
			this->Bback->Name = L"Bback";
			this->Bback->Size = System::Drawing::Size(143, 67);
			this->Bback->TabIndex = 27;
			this->Bback->TabStop = false;
			this->Bback->Click += gcnew System::EventHandler(this, &upgradefirm::Bback_Click);
			// 
			// L1
			// 
			this->L1->AutoSize = true;
			this->L1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L1->Location = System::Drawing::Point(30, 28);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(246, 13);
			this->L1->TabIndex = 28;
			this->L1->Text = L"Profesjonalne œrodowisko programistyczne";
			// 
			// L1description
			// 
			this->L1description->AutoSize = true;
			this->L1description->Location = System::Drawing::Point(30, 41);
			this->L1description->Name = L"L1description";
			this->L1description->Size = System::Drawing::Size(389, 13);
			this->L1description->TabIndex = 29;
			this->L1description->Text = L"programowanie w profesjonalnym œrodowisku zwiêksza presti¿ w oczach klientów";
			// 
			// L1cost
			// 
			this->L1cost->AutoSize = true;
			this->L1cost->ForeColor = System::Drawing::Color::Red;
			this->L1cost->Location = System::Drawing::Point(30, 54);
			this->L1cost->Name = L"L1cost";
			this->L1cost->Size = System::Drawing::Size(82, 13);
			this->L1cost->TabIndex = 30;
			this->L1cost->Text = L"KOSZT:   500z³";
			// 
			// L1perk
			// 
			this->L1perk->AutoSize = true;
			this->L1perk->ForeColor = System::Drawing::Color::Lime;
			this->L1perk->Location = System::Drawing::Point(146, 54);
			this->L1perk->Name = L"L1perk";
			this->L1perk->Size = System::Drawing::Size(241, 13);
			this->L1perk->TabIndex = 31;
			this->L1perk->Text = L"ZYSK:   dodatkowa z³otówka za ka¿d¹ liniê kodu";
			// 
			// B1
			// 
			this->B1->Location = System::Drawing::Point(462, 28);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(120, 39);
			this->B1->TabIndex = 32;
			this->B1->Text = L"Zakup";
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Visible = false;
			// 
			// B2
			// 
			this->B2->Location = System::Drawing::Point(462, 89);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(120, 39);
			this->B2->TabIndex = 37;
			this->B2->Text = L"Zakup";
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Visible = false;
			// 
			// L2perk
			// 
			this->L2perk->AutoSize = true;
			this->L2perk->ForeColor = System::Drawing::Color::Lime;
			this->L2perk->Location = System::Drawing::Point(146, 115);
			this->L2perk->Name = L"L2perk";
			this->L2perk->Size = System::Drawing::Size(240, 13);
			this->L2perk->TabIndex = 36;
			this->L2perk->Text = L"ZYSK:   dodatkowe trzy z³ote za ka¿d¹ liniê kodu";
			// 
			// L2cost
			// 
			this->L2cost->AutoSize = true;
			this->L2cost->ForeColor = System::Drawing::Color::Red;
			this->L2cost->Location = System::Drawing::Point(30, 115);
			this->L2cost->Name = L"L2cost";
			this->L2cost->Size = System::Drawing::Size(91, 13);
			this->L2cost->TabIndex = 35;
			this->L2cost->Text = L"KOSZT:   1 500z³";
			// 
			// L2description
			// 
			this->L2description->AutoSize = true;
			this->L2description->Location = System::Drawing::Point(30, 102);
			this->L2description->Name = L"L2description";
			this->L2description->Size = System::Drawing::Size(200, 13);
			this->L2description->TabIndex = 34;
			this->L2description->Text = L"nowy sprzêt zwiêksza szacunek klientów";
			// 
			// L2
			// 
			this->L2->AutoSize = true;
			this->L2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L2->Location = System::Drawing::Point(30, 89);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(101, 13);
			this->L2->TabIndex = 33;
			this->L2->Text = L"Nowe komputery";
			// 
			// B3
			// 
			this->B3->Location = System::Drawing::Point(462, 154);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(120, 39);
			this->B3->TabIndex = 42;
			this->B3->Text = L"Zakup";
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Visible = false;
			// 
			// L3perk
			// 
			this->L3perk->AutoSize = true;
			this->L3perk->ForeColor = System::Drawing::Color::Lime;
			this->L3perk->Location = System::Drawing::Point(146, 180);
			this->L3perk->Name = L"L3perk";
			this->L3perk->Size = System::Drawing::Size(262, 13);
			this->L3perk->TabIndex = 41;
			this->L3perk->Text = L"ZYSK:   dodatkowe szeœæ z³otych za ka¿d¹ liniê kodu";
			// 
			// L3cost
			// 
			this->L3cost->AutoSize = true;
			this->L3cost->ForeColor = System::Drawing::Color::Red;
			this->L3cost->Location = System::Drawing::Point(30, 180);
			this->L3cost->Name = L"L3cost";
			this->L3cost->Size = System::Drawing::Size(91, 13);
			this->L3cost->TabIndex = 40;
			this->L3cost->Text = L"KOSZT:   5 000z³";
			// 
			// L3description
			// 
			this->L3description->AutoSize = true;
			this->L3description->Location = System::Drawing::Point(30, 167);
			this->L3description->Name = L"L3description";
			this->L3description->Size = System::Drawing::Size(268, 13);
			this->L3description->TabIndex = 39;
			this->L3description->Text = L"dziêki rozg³osowi Twoja firma przyci¹ga wiêcej klientów";
			// 
			// L3
			// 
			this->L3->AutoSize = true;
			this->L3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L3->Location = System::Drawing::Point(30, 154);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(56, 13);
			this->L3->TabIndex = 38;
			this->L3->Text = L"Reklama";
			// 
			// B4
			// 
			this->B4->Location = System::Drawing::Point(462, 217);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(120, 39);
			this->B4->TabIndex = 47;
			this->B4->Text = L"Zakup";
			this->B4->UseVisualStyleBackColor = true;
			this->B4->Visible = false;
			// 
			// L4perk
			// 
			this->L4perk->AutoSize = true;
			this->L4perk->ForeColor = System::Drawing::Color::Lime;
			this->L4perk->Location = System::Drawing::Point(146, 243);
			this->L4perk->Name = L"L4perk";
			this->L4perk->Size = System::Drawing::Size(273, 13);
			this->L4perk->TabIndex = 46;
			this->L4perk->Text = L"ZYSK:   dodatkowe dziesiêæ z³otych za ka¿d¹ liniê kodu";
			// 
			// L4cost
			// 
			this->L4cost->AutoSize = true;
			this->L4cost->ForeColor = System::Drawing::Color::Red;
			this->L4cost->Location = System::Drawing::Point(30, 243);
			this->L4cost->Name = L"L4cost";
			this->L4cost->Size = System::Drawing::Size(97, 13);
			this->L4cost->TabIndex = 45;
			this->L4cost->Text = L"KOSZT:   20 000z³";
			// 
			// L4description
			// 
			this->L4description->AutoSize = true;
			this->L4description->Location = System::Drawing::Point(30, 230);
			this->L4description->Name = L"L4description";
			this->L4description->Size = System::Drawing::Size(242, 13);
			this->L4description->TabIndex = 44;
			this->L4description->Text = L"profesjonalna siedziba zwiêksza zaufanie klientów";
			// 
			// L4
			// 
			this->L4->AutoSize = true;
			this->L4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L4->Location = System::Drawing::Point(30, 217);
			this->L4->Name = L"L4";
			this->L4->Size = System::Drawing::Size(99, 13);
			this->L4->TabIndex = 43;
			this->L4->Text = L"Remont siedziby";
			// 
			// upgradefirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(607, 358);
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
			this->Controls->Add(this->Bback);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"upgradefirm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ulepszenia zwiêkszaj¹ce zarobki firmy";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
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
