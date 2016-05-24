#pragma once

namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o upgradeemployee1
	/// </summary>
	public ref class upgradeemployee1 : public System::Windows::Forms::Form
	{
	public:
		upgradeemployee1(void)
		{
			InitializeComponent();
			paid = 0;
			cash = 0;
			perk1 = false;
			perk2 = false;
			perk3 = false;
		}

		void check(int passedcash, bool e1, bool e2, bool e3){
			cash = passedcash;
			if (passedcash >= 50 && !e1)B1->Visible = true;
			if (passedcash >= 150 && !e2)B2->Visible = true;
			if (passedcash >= 500 && !e3)B3->Visible = true;
		}

		bool getPerk1(){
			return perk1;
		}
		bool getPerk2(){
			return perk2;
		}
		bool getPerk3(){
			return perk3;
		}
		int getpaid(){
			return paid;
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~upgradeemployee1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Bback;

	private: System::Windows::Forms::Label^  L3perk;
	private: System::Windows::Forms::Label^  L3cost;
	private: System::Windows::Forms::Label^  L3description;
	private: System::Windows::Forms::Label^  L3;

	private: System::Windows::Forms::Label^  L2perk;
	private: System::Windows::Forms::Label^  L2cost;
	private: System::Windows::Forms::Label^  L2description;
	private: System::Windows::Forms::Label^  L2;

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
		int paid;
	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  B2;
	private: System::Windows::Forms::PictureBox^  B3;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale�y modyfikowa�
		/// zawarto�� tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(upgradeemployee1::typeid));
			this->Bback = (gcnew System::Windows::Forms::PictureBox());
			this->L3perk = (gcnew System::Windows::Forms::Label());
			this->L3cost = (gcnew System::Windows::Forms::Label());
			this->L3description = (gcnew System::Windows::Forms::Label());
			this->L3 = (gcnew System::Windows::Forms::Label());
			this->L2perk = (gcnew System::Windows::Forms::Label());
			this->L2cost = (gcnew System::Windows::Forms::Label());
			this->L2description = (gcnew System::Windows::Forms::Label());
			this->L2 = (gcnew System::Windows::Forms::Label());
			this->L1perk = (gcnew System::Windows::Forms::Label());
			this->L1cost = (gcnew System::Windows::Forms::Label());
			this->L1description = (gcnew System::Windows::Forms::Label());
			this->L1 = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			this->SuspendLayout();
			// 
			// Bback
			// 
			this->Bback->BackColor = System::Drawing::Color::Transparent;
			this->Bback->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bback->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bback.Image")));
			this->Bback->Location = System::Drawing::Point(235, 275);
			this->Bback->Name = L"Bback";
			this->Bback->Size = System::Drawing::Size(143, 67);
			this->Bback->TabIndex = 28;
			this->Bback->TabStop = false;
			this->Bback->Click += gcnew System::EventHandler(this, &upgradeemployee1::Bback_Click);
			// 
			// L3perk
			// 
			this->L3perk->AutoSize = true;
			this->L3perk->BackColor = System::Drawing::Color::Transparent;
			this->L3perk->ForeColor = System::Drawing::Color::Lime;
			this->L3perk->Location = System::Drawing::Point(152, 216);
			this->L3perk->Name = L"L3perk";
			this->L3perk->Size = System::Drawing::Size(272, 13);
			this->L3perk->TabIndex = 56;
			this->L3perk->Text = L"ZYSK:   zwi�ksza szybko�� programowania Zosi Samosi";
			// 
			// L3cost
			// 
			this->L3cost->AutoSize = true;
			this->L3cost->BackColor = System::Drawing::Color::Transparent;
			this->L3cost->ForeColor = System::Drawing::Color::Red;
			this->L3cost->Location = System::Drawing::Point(36, 216);
			this->L3cost->Name = L"L3cost";
			this->L3cost->Size = System::Drawing::Size(82, 13);
			this->L3cost->TabIndex = 55;
			this->L3cost->Text = L"KOSZT:   500z�";
			// 
			// L3description
			// 
			this->L3description->AutoSize = true;
			this->L3description->BackColor = System::Drawing::Color::Transparent;
			this->L3description->Location = System::Drawing::Point(36, 203);
			this->L3description->Name = L"L3description";
			this->L3description->Size = System::Drawing::Size(365, 13);
			this->L3description->TabIndex = 54;
			this->L3description->Text = L"bilet na konferencj� mo�e pom�c Twojemu pracownikowi rozwin�� skrzyd�a";
			// 
			// L3
			// 
			this->L3->AutoSize = true;
			this->L3->BackColor = System::Drawing::Color::Transparent;
			this->L3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L3->Location = System::Drawing::Point(36, 190);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(91, 13);
			this->L3->TabIndex = 53;
			this->L3->Text = L"Konferencja IT";
			// 
			// L2perk
			// 
			this->L2perk->AutoSize = true;
			this->L2perk->BackColor = System::Drawing::Color::Transparent;
			this->L2perk->ForeColor = System::Drawing::Color::Lime;
			this->L2perk->Location = System::Drawing::Point(152, 136);
			this->L2perk->Name = L"L2perk";
			this->L2perk->Size = System::Drawing::Size(271, 13);
			this->L2perk->TabIndex = 51;
			this->L2perk->Text = L"ZYSK:   Zosia Samosia dostarcza dwie linie kodu wi�cej";
			// 
			// L2cost
			// 
			this->L2cost->AutoSize = true;
			this->L2cost->BackColor = System::Drawing::Color::Transparent;
			this->L2cost->ForeColor = System::Drawing::Color::Red;
			this->L2cost->Location = System::Drawing::Point(36, 136);
			this->L2cost->Name = L"L2cost";
			this->L2cost->Size = System::Drawing::Size(82, 13);
			this->L2cost->TabIndex = 50;
			this->L2cost->Text = L"KOSZT:   150z�";
			// 
			// L2description
			// 
			this->L2description->AutoSize = true;
			this->L2description->BackColor = System::Drawing::Color::Transparent;
			this->L2description->Location = System::Drawing::Point(36, 123);
			this->L2description->Name = L"L2description";
			this->L2description->Size = System::Drawing::Size(302, 13);
			this->L2description->TabIndex = 49;
			this->L2description->Text = L"ten kurs poprawia jako�� programowania Twojego pracownika";
			// 
			// L2
			// 
			this->L2->AutoSize = true;
			this->L2->BackColor = System::Drawing::Color::Transparent;
			this->L2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L2->Location = System::Drawing::Point(36, 110);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(225, 13);
			this->L2->TabIndex = 48;
			this->L2->Text = L"Kurs zaawansowanego programowania";
			// 
			// L1perk
			// 
			this->L1perk->AutoSize = true;
			this->L1perk->BackColor = System::Drawing::Color::Transparent;
			this->L1perk->ForeColor = System::Drawing::Color::Lime;
			this->L1perk->Location = System::Drawing::Point(152, 56);
			this->L1perk->Name = L"L1perk";
			this->L1perk->Size = System::Drawing::Size(272, 13);
			this->L1perk->TabIndex = 46;
			this->L1perk->Text = L"ZYSK:   zwi�ksza szybko�� programowania Zosi Samosi";
			// 
			// L1cost
			// 
			this->L1cost->AutoSize = true;
			this->L1cost->BackColor = System::Drawing::Color::Transparent;
			this->L1cost->ForeColor = System::Drawing::Color::Red;
			this->L1cost->Location = System::Drawing::Point(36, 56);
			this->L1cost->Name = L"L1cost";
			this->L1cost->Size = System::Drawing::Size(76, 13);
			this->L1cost->TabIndex = 45;
			this->L1cost->Text = L"KOSZT:   50z�";
			// 
			// L1description
			// 
			this->L1description->AutoSize = true;
			this->L1description->BackColor = System::Drawing::Color::Transparent;
			this->L1description->Location = System::Drawing::Point(36, 43);
			this->L1description->Name = L"L1description";
			this->L1description->Size = System::Drawing::Size(295, 13);
			this->L1description->TabIndex = 44;
			this->L1description->Text = L"po tym kursie Tw�j pracownik szybciej b�dzie dostarcza� kod";
			// 
			// L1
			// 
			this->L1->AutoSize = true;
			this->L1->BackColor = System::Drawing::Color::Transparent;
			this->L1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L1->Location = System::Drawing::Point(36, 30);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(136, 13);
			this->L1->TabIndex = 43;
			this->L1->Text = L"Kurs szybkiego pisania";
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::Transparent;
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(444, 30);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(143, 67);
			this->B1->TabIndex = 58;
			this->B1->TabStop = false;
			this->B1->Visible = false;
			this->B1->Click += gcnew System::EventHandler(this, &upgradeemployee1::B1_Click);
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::Transparent;
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(444, 108);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(143, 67);
			this->B2->TabIndex = 59;
			this->B2->TabStop = false;
			this->B2->Visible = false;
			this->B2->Click += gcnew System::EventHandler(this, &upgradeemployee1::B2_Click);
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::Color::Transparent;
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(444, 186);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(143, 67);
			this->B3->TabIndex = 60;
			this->B3->TabStop = false;
			this->B3->Visible = false;
			this->B3->Click += gcnew System::EventHandler(this, &upgradeemployee1::B3_Click);
			// 
			// upgradeemployee1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(624, 372);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->L3perk);
			this->Controls->Add(this->L3cost);
			this->Controls->Add(this->L3description);
			this->Controls->Add(this->L3);
			this->Controls->Add(this->L2perk);
			this->Controls->Add(this->L2cost);
			this->Controls->Add(this->L2description);
			this->Controls->Add(this->L2);
			this->Controls->Add(this->L1perk);
			this->Controls->Add(this->L1cost);
			this->Controls->Add(this->L1description);
			this->Controls->Add(this->L1);
			this->Controls->Add(this->Bback);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"upgradeemployee1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ulepszenia zwi�kszaj�ce umiej�tno�ci Zosi Samosi";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bback_Click(System::Object^  sender, System::EventArgs^  e) {
				 //przycisk wstecz
				 this->Close();
	}
private: System::Void B1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 1
			 paid += 50;
			 cash -= 50;
			 perk1 = true;
			 B1->Visible = false;
			 if (cash < 150)B2->Visible = false;
			 if (cash < 500)B3->Visible = false;
}
private: System::Void B2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 2
			 paid += 150;
			 cash -= 150;
			 perk2 = true;
			 B2->Visible = false;
			 if (cash < 50)B1->Visible = false;
			 if (cash < 500)B3->Visible = false;
}
private: System::Void B3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 3
			 paid += 500;
			 cash -= 500;
			 perk3 = true;
			 B3->Visible = false;
			 if (cash < 50)B1->Visible = false;
			 if (cash < 150)B2->Visible = false;
}
};
}