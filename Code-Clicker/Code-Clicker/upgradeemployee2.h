#pragma once

namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o upgradeemployee2
	/// </summary>
	public ref class upgradeemployee2 : public System::Windows::Forms::Form
	{
	public:
		upgradeemployee2(void)
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
			if (passedcash >= 100 && !e1)B1->Visible = true;
			if (passedcash >= 500 && !e2)B2->Visible = true;
			if (passedcash >= 1500 && !e3)B3->Visible = true;
			if (e1){
				B1->Enabled = false;
				B1->Load("grafika/przyciskZainwestujWcisniety.png");
				B1->Visible = true;
			}
			if (e2){
				B2->Enabled = false;
				B2->Load("grafika/przyciskZainwestujWcisniety.png");
				B2->Visible = true;
			}
			if (e3){
				B3->Enabled = false;
				B3->Load("grafika/przyciskZainwestujWcisniety.png");
				B3->Visible = true;
			}
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
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~upgradeemployee2()
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
	private: System::Windows::Forms::PictureBox^  B3;
	private: System::Windows::Forms::PictureBox^  B2;
	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  P3;
	private: System::Windows::Forms::PictureBox^  P2;
	private: System::Windows::Forms::PictureBox^  P1;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(upgradeemployee2::typeid));
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
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->P3 = (gcnew System::Windows::Forms::PictureBox());
			this->P2 = (gcnew System::Windows::Forms::PictureBox());
			this->P1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1))->BeginInit();
			this->SuspendLayout();
			// 
			// Bback
			// 
			this->Bback->BackColor = System::Drawing::Color::Transparent;
			this->Bback->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bback->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bback.Image")));
			this->Bback->Location = System::Drawing::Point(340, 510);
			this->Bback->Name = L"Bback";
			this->Bback->Size = System::Drawing::Size(143, 67);
			this->Bback->TabIndex = 28;
			this->Bback->TabStop = false;
			this->Bback->Click += gcnew System::EventHandler(this, &upgradeemployee2::Bback_Click);
			// 
			// L3perk
			// 
			this->L3perk->AutoSize = true;
			this->L3perk->BackColor = System::Drawing::Color::Transparent;
			this->L3perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3perk->ForeColor = System::Drawing::Color::Lime;
			this->L3perk->Location = System::Drawing::Point(260, 399);
			this->L3perk->Name = L"L3perk";
			this->L3perk->Size = System::Drawing::Size(511, 24);
			this->L3perk->TabIndex = 71;
			this->L3perk->Text = L"ZYSK:   zwiêksza szybkoœæ programowania Mariusza Denko";
			// 
			// L3cost
			// 
			this->L3cost->AutoSize = true;
			this->L3cost->BackColor = System::Drawing::Color::Transparent;
			this->L3cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3cost->ForeColor = System::Drawing::Color::Red;
			this->L3cost->Location = System::Drawing::Point(260, 444);
			this->L3cost->Name = L"L3cost";
			this->L3cost->Size = System::Drawing::Size(155, 24);
			this->L3cost->TabIndex = 70;
			this->L3cost->Text = L"KOSZT:   1 500z³";
			// 
			// L3description
			// 
			this->L3description->AutoSize = true;
			this->L3description->BackColor = System::Drawing::Color::Transparent;
			this->L3description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3description->Location = System::Drawing::Point(260, 383);
			this->L3description->Name = L"L3description";
			this->L3description->Size = System::Drawing::Size(416, 16);
			this->L3description->TabIndex = 69;
			this->L3description->Text = L"po tym kursie Twój pracownik bêdzie znacznie wydajniejszy i rzetelny";
			// 
			// L3
			// 
			this->L3->AutoSize = true;
			this->L3->BackColor = System::Drawing::Color::Transparent;
			this->L3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L3->Location = System::Drawing::Point(256, 358);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(505, 25);
			this->L3->TabIndex = 68;
			this->L3->Text = L"Kurs wysoce zaawansowanego programowania";
			// 
			// L2perk
			// 
			this->L2perk->AutoSize = true;
			this->L2perk->BackColor = System::Drawing::Color::Transparent;
			this->L2perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2perk->ForeColor = System::Drawing::Color::Lime;
			this->L2perk->Location = System::Drawing::Point(260, 248);
			this->L2perk->Name = L"L2perk";
			this->L2perk->Size = System::Drawing::Size(487, 24);
			this->L2perk->TabIndex = 66;
			this->L2perk->Text = L"ZYSK:   Mariusz Denko dostarcza cztery linie kodu wiecej";
			// 
			// L2cost
			// 
			this->L2cost->AutoSize = true;
			this->L2cost->BackColor = System::Drawing::Color::Transparent;
			this->L2cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2cost->ForeColor = System::Drawing::Color::Red;
			this->L2cost->Location = System::Drawing::Point(260, 293);
			this->L2cost->Name = L"L2cost";
			this->L2cost->Size = System::Drawing::Size(140, 24);
			this->L2cost->TabIndex = 65;
			this->L2cost->Text = L"KOSZT:   500z³";
			// 
			// L2description
			// 
			this->L2description->AutoSize = true;
			this->L2description->BackColor = System::Drawing::Color::Transparent;
			this->L2description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2description->Location = System::Drawing::Point(260, 232);
			this->L2description->Name = L"L2description";
			this->L2description->Size = System::Drawing::Size(321, 16);
			this->L2description->TabIndex = 64;
			this->L2description->Text = L"kurs poprawiaj¹cy jakoœæ kodu Twojego pracownika";
			// 
			// L2
			// 
			this->L2->AutoSize = true;
			this->L2->BackColor = System::Drawing::Color::Transparent;
			this->L2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L2->Location = System::Drawing::Point(256, 207);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(403, 25);
			this->L2->TabIndex = 63;
			this->L2->Text = L"Kurs profesjonalnego programowania";
			// 
			// L1perk
			// 
			this->L1perk->AutoSize = true;
			this->L1perk->BackColor = System::Drawing::Color::Transparent;
			this->L1perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1perk->ForeColor = System::Drawing::Color::Lime;
			this->L1perk->Location = System::Drawing::Point(260, 96);
			this->L1perk->Name = L"L1perk";
			this->L1perk->Size = System::Drawing::Size(478, 24);
			this->L1perk->TabIndex = 61;
			this->L1perk->Text = L"ZYSK:   Mariusz Denko dostarcza dwie linie kodu wiecej";
			// 
			// L1cost
			// 
			this->L1cost->AutoSize = true;
			this->L1cost->BackColor = System::Drawing::Color::Transparent;
			this->L1cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1cost->ForeColor = System::Drawing::Color::Red;
			this->L1cost->Location = System::Drawing::Point(260, 141);
			this->L1cost->Name = L"L1cost";
			this->L1cost->Size = System::Drawing::Size(140, 24);
			this->L1cost->TabIndex = 60;
			this->L1cost->Text = L"KOSZT:   100z³";
			// 
			// L1description
			// 
			this->L1description->AutoSize = true;
			this->L1description->BackColor = System::Drawing::Color::Transparent;
			this->L1description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1description->Location = System::Drawing::Point(260, 80);
			this->L1description->Name = L"L1description";
			this->L1description->Size = System::Drawing::Size(393, 16);
			this->L1description->TabIndex = 59;
			this->L1description->Text = L"ten kurs pomo¿e Twojemu pracownikowi wydajniej programowaæ";
			// 
			// L1
			// 
			this->L1->AutoSize = true;
			this->L1->BackColor = System::Drawing::Color::Transparent;
			this->L1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L1->Location = System::Drawing::Point(256, 55);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(227, 25);
			this->L1->TabIndex = 58;
			this->L1->Text = L"Kurs programowania";
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::Color::Transparent;
			this->B3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(620, 426);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(143, 67);
			this->B3->TabIndex = 74;
			this->B3->TabStop = false;
			this->B3->Visible = false;
			this->B3->Click += gcnew System::EventHandler(this, &upgradeemployee2::B3_Click);
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::Transparent;
			this->B2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(620, 275);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(143, 67);
			this->B2->TabIndex = 73;
			this->B2->TabStop = false;
			this->B2->Visible = false;
			this->B2->Click += gcnew System::EventHandler(this, &upgradeemployee2::B2_Click);
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::Transparent;
			this->B1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(620, 123);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(143, 67);
			this->B1->TabIndex = 72;
			this->B1->TabStop = false;
			this->B1->Visible = false;
			this->B1->Click += gcnew System::EventHandler(this, &upgradeemployee2::B1_Click);
			// 
			// P3
			// 
			this->P3->BackColor = System::Drawing::Color::Transparent;
			this->P3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P3.Image")));
			this->P3->Location = System::Drawing::Point(50, 358);
			this->P3->Name = L"P3";
			this->P3->Size = System::Drawing::Size(200, 135);
			this->P3->TabIndex = 77;
			this->P3->TabStop = false;
			// 
			// P2
			// 
			this->P2->BackColor = System::Drawing::Color::Transparent;
			this->P2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P2.Image")));
			this->P2->Location = System::Drawing::Point(50, 207);
			this->P2->Name = L"P2";
			this->P2->Size = System::Drawing::Size(200, 135);
			this->P2->TabIndex = 76;
			this->P2->TabStop = false;
			// 
			// P1
			// 
			this->P1->BackColor = System::Drawing::Color::Transparent;
			this->P1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P1.Image")));
			this->P1->Location = System::Drawing::Point(50, 55);
			this->P1->Name = L"P1";
			this->P1->Size = System::Drawing::Size(200, 135);
			this->P1->TabIndex = 75;
			this->P1->TabStop = false;
			// 
			// upgradeemployee2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(814, 622);
			this->Controls->Add(this->P3);
			this->Controls->Add(this->P2);
			this->Controls->Add(this->P1);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"upgradeemployee2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ulepszenia zwiêkszaj¹ce umiejêtnoœci Mariusza Denko";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1))->EndInit();
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
			 paid += 100;
			 cash -= 100;
			 perk1 = true;
			 B1->Enabled = false;
			 B1->Load("grafika/przyciskZainwestujWcisniety.png");
			 if (cash < 500)B2->Visible = false;
			 if (cash < 1500)B3->Visible = false;
}
private: System::Void B2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 2
			 paid += 500;
			 cash -= 500;
			 perk2 = true;
			 B2->Enabled = false;
			 B2->Load("grafika/przyciskZainwestujWcisniety.png");
			 if (cash < 100)B1->Visible = false;
			 if (cash < 1500)B3->Visible = false;
}
private: System::Void B3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 3
			 paid += 1500;
			 cash -= 1500;
			 perk3 = true;
			 B3->Enabled = false;
			 B3->Load("grafika/przyciskZainwestujWcisniety.png");
			 if (cash < 500)B2->Visible = false;
			 if (cash < 100)B1->Visible = false;
}
};
}