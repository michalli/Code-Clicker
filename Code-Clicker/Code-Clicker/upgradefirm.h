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
			paid = 0;
			cash = 0;
			perk1 = false;
			perk2 = false;
			perk3 = false;
			perk4 = false;
		}

		void check(int passedcash, bool e1, bool e2, bool e3, bool e4){
			cash = passedcash;
			if (passedcash >= 500 && !e1)B1->Visible = true;
			if (passedcash >= 1500 && !e2)B2->Visible = true;
			if (passedcash >= 5000 && !e3)B3->Visible = true;
			if (passedcash >= 20000 && !e4)B4->Visible = true;
			if (e1){
				B1->Enabled = false;
				B1->Load("grafika/przyciskZakupWcisniety.png");
				B1->Visible = true;
			}
			if (e2){
				B2->Enabled = false;
				B2->Load("grafika/przyciskZakupWcisniety.png");
				B2->Visible = true;
			}
			if (e3){
				B3->Enabled = false;
				B3->Load("grafika/przyciskZakupWcisniety.png");
				B3->Visible = true;
			}
			if (e4){
				B4->Enabled = false;
				B4->Load("grafika/przyciskZakupWcisniety.png");
				B4->Visible = true;
			}
		}

		bool getperk1(){
			return perk1;
		}
		bool getperk2(){
			return perk2;
		}
		bool getperk3(){
			return perk3;
		}
		bool getperk4(){
			return perk4;
		}
		int getpaid(){
			return paid;
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
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


	private: System::Windows::Forms::Label^  L2perk;
	private: System::Windows::Forms::Label^  L2cost;
	private: System::Windows::Forms::Label^  L2description;
	private: System::Windows::Forms::Label^  L2;

	private: System::Windows::Forms::Label^  L3perk;
	private: System::Windows::Forms::Label^  L3cost;
	private: System::Windows::Forms::Label^  L3description;
	private: System::Windows::Forms::Label^  L3;

	private: System::Windows::Forms::Label^  L4perk;
	private: System::Windows::Forms::Label^  L4cost;
	private: System::Windows::Forms::Label^  L4description;
	private: System::Windows::Forms::Label^  L4;
	protected:

	private:

		int cash;
		bool perk1;
		bool perk2;
		bool perk3;
		bool perk4;
		int paid;
	private: System::Windows::Forms::PictureBox^  P1;
	private: System::Windows::Forms::PictureBox^  P2;
	private: System::Windows::Forms::PictureBox^  P4;

	private: System::Windows::Forms::PictureBox^  P3;
	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  B2;
	private: System::Windows::Forms::PictureBox^  B3;
	private: System::Windows::Forms::PictureBox^  B4;


		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale�y modyfikowa�
		/// zawarto�� tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(upgradefirm::typeid));
			this->Bback = (gcnew System::Windows::Forms::PictureBox());
			this->L1 = (gcnew System::Windows::Forms::Label());
			this->L1description = (gcnew System::Windows::Forms::Label());
			this->L1cost = (gcnew System::Windows::Forms::Label());
			this->L1perk = (gcnew System::Windows::Forms::Label());
			this->L2perk = (gcnew System::Windows::Forms::Label());
			this->L2cost = (gcnew System::Windows::Forms::Label());
			this->L2description = (gcnew System::Windows::Forms::Label());
			this->L2 = (gcnew System::Windows::Forms::Label());
			this->L3perk = (gcnew System::Windows::Forms::Label());
			this->L3cost = (gcnew System::Windows::Forms::Label());
			this->L3description = (gcnew System::Windows::Forms::Label());
			this->L3 = (gcnew System::Windows::Forms::Label());
			this->L4perk = (gcnew System::Windows::Forms::Label());
			this->L4cost = (gcnew System::Windows::Forms::Label());
			this->L4description = (gcnew System::Windows::Forms::Label());
			this->L4 = (gcnew System::Windows::Forms::Label());
			this->P1 = (gcnew System::Windows::Forms::PictureBox());
			this->P2 = (gcnew System::Windows::Forms::PictureBox());
			this->P4 = (gcnew System::Windows::Forms::PictureBox());
			this->P3 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->B4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->BeginInit();
			this->SuspendLayout();
			// 
			// Bback
			// 
			this->Bback->BackColor = System::Drawing::Color::Transparent;
			this->Bback->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bback->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bback.Image")));
			this->Bback->Location = System::Drawing::Point(342, 618);
			this->Bback->Name = L"Bback";
			this->Bback->Size = System::Drawing::Size(116, 65);
			this->Bback->TabIndex = 27;
			this->Bback->TabStop = false;
			this->Bback->Click += gcnew System::EventHandler(this, &upgradefirm::Bback_Click);
			// 
			// L1
			// 
			this->L1->AutoSize = true;
			this->L1->BackColor = System::Drawing::Color::Transparent;
			this->L1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L1->Location = System::Drawing::Point(250, 50);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(462, 25);
			this->L1->TabIndex = 28;
			this->L1->Text = L"Profesjonalne �rodowisko programistyczne";
			// 
			// L1description
			// 
			this->L1description->AutoSize = true;
			this->L1description->BackColor = System::Drawing::Color::Transparent;
			this->L1description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1description->Location = System::Drawing::Point(255, 75);
			this->L1description->Name = L"L1description";
			this->L1description->Size = System::Drawing::Size(488, 16);
			this->L1description->TabIndex = 29;
			this->L1description->Text = L"programowanie w profesjonalnym �rodowisku zwi�ksza presti� w oczach klient�w";
			// 
			// L1cost
			// 
			this->L1cost->AutoSize = true;
			this->L1cost->BackColor = System::Drawing::Color::Transparent;
			this->L1cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1cost->ForeColor = System::Drawing::Color::Red;
			this->L1cost->Location = System::Drawing::Point(255, 136);
			this->L1cost->Name = L"L1cost";
			this->L1cost->Size = System::Drawing::Size(140, 24);
			this->L1cost->TabIndex = 30;
			this->L1cost->Text = L"KOSZT:   500z�";
			// 
			// L1perk
			// 
			this->L1perk->AutoSize = true;
			this->L1perk->BackColor = System::Drawing::Color::Transparent;
			this->L1perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1perk->ForeColor = System::Drawing::Color::Lime;
			this->L1perk->Location = System::Drawing::Point(255, 91);
			this->L1perk->Name = L"L1perk";
			this->L1perk->Size = System::Drawing::Size(414, 24);
			this->L1perk->TabIndex = 31;
			this->L1perk->Text = L"ZYSK:   dodatkowa z�ot�wka za ka�d� lini� kodu";
			// 
			// L2perk
			// 
			this->L2perk->AutoSize = true;
			this->L2perk->BackColor = System::Drawing::Color::Transparent;
			this->L2perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2perk->ForeColor = System::Drawing::Color::Lime;
			this->L2perk->Location = System::Drawing::Point(255, 232);
			this->L2perk->Name = L"L2perk";
			this->L2perk->Size = System::Drawing::Size(415, 24);
			this->L2perk->TabIndex = 36;
			this->L2perk->Text = L"ZYSK:   dodatkowe trzy z�ote za ka�d� lini� kodu";
			// 
			// L2cost
			// 
			this->L2cost->AutoSize = true;
			this->L2cost->BackColor = System::Drawing::Color::Transparent;
			this->L2cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2cost->ForeColor = System::Drawing::Color::Red;
			this->L2cost->Location = System::Drawing::Point(255, 278);
			this->L2cost->Name = L"L2cost";
			this->L2cost->Size = System::Drawing::Size(155, 24);
			this->L2cost->TabIndex = 35;
			this->L2cost->Text = L"KOSZT:   1 500z�";
			// 
			// L2description
			// 
			this->L2description->AutoSize = true;
			this->L2description->BackColor = System::Drawing::Color::Transparent;
			this->L2description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2description->Location = System::Drawing::Point(255, 216);
			this->L2description->Name = L"L2description";
			this->L2description->Size = System::Drawing::Size(246, 16);
			this->L2description->TabIndex = 34;
			this->L2description->Text = L"nowy sprz�t zwi�ksza szacunek klient�w";
			// 
			// L2
			// 
			this->L2->AutoSize = true;
			this->L2->BackColor = System::Drawing::Color::Transparent;
			this->L2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L2->Location = System::Drawing::Point(250, 191);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(186, 25);
			this->L2->TabIndex = 33;
			this->L2->Text = L"Nowe komputery";
			// 
			// L3perk
			// 
			this->L3perk->AutoSize = true;
			this->L3perk->BackColor = System::Drawing::Color::Transparent;
			this->L3perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3perk->ForeColor = System::Drawing::Color::Lime;
			this->L3perk->Location = System::Drawing::Point(255, 373);
			this->L3perk->Name = L"L3perk";
			this->L3perk->Size = System::Drawing::Size(454, 24);
			this->L3perk->TabIndex = 41;
			this->L3perk->Text = L"ZYSK:   dodatkowe sze�� z�otych za ka�d� lini� kodu";
			// 
			// L3cost
			// 
			this->L3cost->AutoSize = true;
			this->L3cost->BackColor = System::Drawing::Color::Transparent;
			this->L3cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3cost->ForeColor = System::Drawing::Color::Red;
			this->L3cost->Location = System::Drawing::Point(255, 418);
			this->L3cost->Name = L"L3cost";
			this->L3cost->Size = System::Drawing::Size(155, 24);
			this->L3cost->TabIndex = 40;
			this->L3cost->Text = L"KOSZT:   5 000z�";
			// 
			// L3description
			// 
			this->L3description->AutoSize = true;
			this->L3description->BackColor = System::Drawing::Color::Transparent;
			this->L3description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3description->Location = System::Drawing::Point(255, 357);
			this->L3description->Name = L"L3description";
			this->L3description->Size = System::Drawing::Size(339, 16);
			this->L3description->TabIndex = 39;
			this->L3description->Text = L"dzi�ki rozg�osowi Twoja firma przyci�ga wi�cej klient�w";
			// 
			// L3
			// 
			this->L3->AutoSize = true;
			this->L3->BackColor = System::Drawing::Color::Transparent;
			this->L3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L3->Location = System::Drawing::Point(250, 332);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(103, 25);
			this->L3->TabIndex = 38;
			this->L3->Text = L"Reklama";
			// 
			// L4perk
			// 
			this->L4perk->AutoSize = true;
			this->L4perk->BackColor = System::Drawing::Color::Transparent;
			this->L4perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L4perk->ForeColor = System::Drawing::Color::Lime;
			this->L4perk->Location = System::Drawing::Point(255, 514);
			this->L4perk->Name = L"L4perk";
			this->L4perk->Size = System::Drawing::Size(475, 24);
			this->L4perk->TabIndex = 46;
			this->L4perk->Text = L"ZYSK:   dodatkowe dziesi�� z�otych za ka�d� lini� kodu";
			// 
			// L4cost
			// 
			this->L4cost->AutoSize = true;
			this->L4cost->BackColor = System::Drawing::Color::Transparent;
			this->L4cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L4cost->ForeColor = System::Drawing::Color::Red;
			this->L4cost->Location = System::Drawing::Point(255, 559);
			this->L4cost->Name = L"L4cost";
			this->L4cost->Size = System::Drawing::Size(165, 24);
			this->L4cost->TabIndex = 45;
			this->L4cost->Text = L"KOSZT:   20 000z�";
			// 
			// L4description
			// 
			this->L4description->AutoSize = true;
			this->L4description->BackColor = System::Drawing::Color::Transparent;
			this->L4description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L4description->Location = System::Drawing::Point(255, 498);
			this->L4description->Name = L"L4description";
			this->L4description->Size = System::Drawing::Size(305, 16);
			this->L4description->TabIndex = 44;
			this->L4description->Text = L"profesjonalna siedziba zwi�ksza zaufanie klient�w";
			// 
			// L4
			// 
			this->L4->AutoSize = true;
			this->L4->BackColor = System::Drawing::Color::Transparent;
			this->L4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L4->Location = System::Drawing::Point(250, 473);
			this->L4->Name = L"L4";
			this->L4->Size = System::Drawing::Size(186, 25);
			this->L4->TabIndex = 43;
			this->L4->Text = L"Remont siedziby";
			// 
			// P1
			// 
			this->P1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P1.BackgroundImage")));
			this->P1->Location = System::Drawing::Point(44, 50);
			this->P1->Name = L"P1";
			this->P1->Size = System::Drawing::Size(200, 135);
			this->P1->TabIndex = 48;
			this->P1->TabStop = false;
			// 
			// P2
			// 
			this->P2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P2.BackgroundImage")));
			this->P2->Location = System::Drawing::Point(44, 191);
			this->P2->Name = L"P2";
			this->P2->Size = System::Drawing::Size(200, 135);
			this->P2->TabIndex = 49;
			this->P2->TabStop = false;
			// 
			// P4
			// 
			this->P4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P4.BackgroundImage")));
			this->P4->Location = System::Drawing::Point(44, 473);
			this->P4->Name = L"P4";
			this->P4->Size = System::Drawing::Size(200, 135);
			this->P4->TabIndex = 51;
			this->P4->TabStop = false;
			// 
			// P3
			// 
			this->P3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P3.BackgroundImage")));
			this->P3->Location = System::Drawing::Point(44, 332);
			this->P3->Name = L"P3";
			this->P3->Size = System::Drawing::Size(200, 135);
			this->P3->TabIndex = 50;
			this->P3->TabStop = false;
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::Transparent;
			this->B1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(605, 118);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(143, 67);
			this->B1->TabIndex = 52;
			this->B1->TabStop = false;
			this->B1->Visible = false;
			this->B1->Click += gcnew System::EventHandler(this, &upgradefirm::B1_Click);
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::Transparent;
			this->B2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(605, 259);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(143, 67);
			this->B2->TabIndex = 53;
			this->B2->TabStop = false;
			this->B2->Visible = false;
			this->B2->Click += gcnew System::EventHandler(this, &upgradefirm::B2_Click);
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::Color::Transparent;
			this->B3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(605, 400);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(143, 67);
			this->B3->TabIndex = 54;
			this->B3->TabStop = false;
			this->B3->Visible = false;
			this->B3->Click += gcnew System::EventHandler(this, &upgradefirm::B3_Click);
			// 
			// B4
			// 
			this->B4->BackColor = System::Drawing::Color::Transparent;
			this->B4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4.Image")));
			this->B4->Location = System::Drawing::Point(605, 541);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(143, 67);
			this->B4->TabIndex = 55;
			this->B4->TabStop = false;
			this->B4->Visible = false;
			this->B4->Click += gcnew System::EventHandler(this, &upgradefirm::B4_Click);
			// 
			// upgradefirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(794, 700);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->P4);
			this->Controls->Add(this->P3);
			this->Controls->Add(this->P2);
			this->Controls->Add(this->P1);
			this->Controls->Add(this->L4perk);
			this->Controls->Add(this->L4cost);
			this->Controls->Add(this->L4description);
			this->Controls->Add(this->L4);
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
			this->Name = L"upgradefirm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ulepszenia zwi�kszaj�ce zarobki firmy";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bback_Click(System::Object^  sender, System::EventArgs^  e) {
				 //przycisk wstecz
				 this->Close();
	}
	private: System::Void B1_Click(System::Object^  sender, System::EventArgs^  e) {			 //wynajem pomocnika nr 1			 
				 //zakup perka nr 1
				 paid += 500;
				 cash -= 500;
				 perk1 = true;
				 B1->Enabled = false;
				 B1->Load("grafika/przyciskZakupWcisniety.png");
				 if (cash < 1500)B2->Visible = false;
				 if (cash < 5000)B3->Visible = false;
				 if (cash < 20000)B4->Visible = false;
	}
private: System::Void B2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 2
			 paid += 1500;
			 cash -= 1500;
			 perk2 = true;
			 B2->Enabled = false;
			 B2->Load("grafika/przyciskZakupWcisniety.png");
			 if (cash < 500)B1->Visible = false;
			 if (cash < 5000)B3->Visible = false;
			 if (cash < 20000)B4->Visible = false;
}
private: System::Void B3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 3
			 paid += 5000;
			 cash -= 5000;
			 perk3 = true;
			 B3->Enabled = false;
			 B3->Load("grafika/przyciskZakupWcisniety.png");
			 if (cash < 500)B1->Visible = false;
			 if (cash < 1500)B2->Visible = false;
			 if (cash < 20000)B4->Visible = false;
}
private: System::Void B4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 4
			 paid += 20000;
			 cash -= 20000;
			 perk4 = true;
			 B4->Enabled = false;
			 B4->Load("grafika/przyciskZakupWcisniety.png");
			 if (cash < 500)B1->Visible = false;
			 if (cash < 5000)B3->Visible = false;
			 if (cash < 1500)B2->Visible = false;
}

};
}
