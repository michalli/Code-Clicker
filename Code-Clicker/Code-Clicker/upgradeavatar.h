#pragma once

namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o upgradeavatar
	/// </summary>
	public ref class upgradeavatar : public System::Windows::Forms::Form
	{
	public:
		upgradeavatar(void)
		{
			InitializeComponent();
			paid = 0;
			cash = 0;
			perk1 = false;
			perk2 = false;
			perk3 = false;
			perk4 = false;
			perk5 = false;
		}

		void check(int passedcash, bool e1, bool e2, bool e3, bool e4, bool e5){
			cash = passedcash;
			if (passedcash >= 50 && !e1)B1->Visible = true;
			if (passedcash >= 200 && !e2)B2->Visible = true;
			if (passedcash >= 500 && !e3)B3->Visible = true;
			if (passedcash >= 1000 && !e4)B4->Visible = true;
			if (passedcash >= 3000 && !e5)B5->Visible = true;
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
		bool getperk5(){
			return perk5;
		}
		int getpaid(){
			return paid;
		}
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~upgradeavatar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Bback;
	private: System::Windows::Forms::Button^  B4;
	private: System::Windows::Forms::Label^  L4perk;
	private: System::Windows::Forms::Label^  L4cost;

	private: System::Windows::Forms::Label^  L4;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Label^  L3perk;
	private: System::Windows::Forms::Label^  L3cost;

	private: System::Windows::Forms::Label^  L3;
	private: System::Windows::Forms::Button^  B2;
	private: System::Windows::Forms::Label^  L2perk;
	private: System::Windows::Forms::Label^  L2cost;

	private: System::Windows::Forms::Label^  L2;
	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Label^  L1perk;
	private: System::Windows::Forms::Label^  L1cost;

	private: System::Windows::Forms::Label^  L1;
	private: System::Windows::Forms::Button^  B5;
	private: System::Windows::Forms::Label^  L5perk;
	private: System::Windows::Forms::Label^  L5cost;
	private: System::Windows::Forms::Label^  L5;




	private: System::Windows::Forms::Label^  L1description;
	protected:

	private:
		
		int cash;
		bool perk1;
		bool perk2;
		bool perk3;
		bool perk4;
		bool perk5;
		int paid;
	private: System::Windows::Forms::PictureBox^  P1;
	private: System::Windows::Forms::PictureBox^  P2;
	private: System::Windows::Forms::Label^  L2description;
	private: System::Windows::Forms::Label^  L3description;
	private: System::Windows::Forms::Label^  L4description;
	private: System::Windows::Forms::Label^  L5description;
	private: System::Windows::Forms::PictureBox^  P3;
	private: System::Windows::Forms::PictureBox^  P5;
	private: System::Windows::Forms::PictureBox^  P4;



		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(upgradeavatar::typeid));
			this->Bback = (gcnew System::Windows::Forms::PictureBox());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->L4perk = (gcnew System::Windows::Forms::Label());
			this->L4cost = (gcnew System::Windows::Forms::Label());
			this->L4 = (gcnew System::Windows::Forms::Label());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->L3perk = (gcnew System::Windows::Forms::Label());
			this->L3cost = (gcnew System::Windows::Forms::Label());
			this->L3 = (gcnew System::Windows::Forms::Label());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->L2perk = (gcnew System::Windows::Forms::Label());
			this->L2cost = (gcnew System::Windows::Forms::Label());
			this->L2 = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->L1perk = (gcnew System::Windows::Forms::Label());
			this->L1cost = (gcnew System::Windows::Forms::Label());
			this->L1 = (gcnew System::Windows::Forms::Label());
			this->B5 = (gcnew System::Windows::Forms::Button());
			this->L5perk = (gcnew System::Windows::Forms::Label());
			this->L5cost = (gcnew System::Windows::Forms::Label());
			this->L5 = (gcnew System::Windows::Forms::Label());
			this->L1description = (gcnew System::Windows::Forms::Label());
			this->P1 = (gcnew System::Windows::Forms::PictureBox());
			this->P2 = (gcnew System::Windows::Forms::PictureBox());
			this->L2description = (gcnew System::Windows::Forms::Label());
			this->L3description = (gcnew System::Windows::Forms::Label());
			this->L4description = (gcnew System::Windows::Forms::Label());
			this->L5description = (gcnew System::Windows::Forms::Label());
			this->P3 = (gcnew System::Windows::Forms::PictureBox());
			this->P5 = (gcnew System::Windows::Forms::PictureBox());
			this->P4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P4))->BeginInit();
			this->SuspendLayout();
			// 
			// Bback
			// 
			this->Bback->BackColor = System::Drawing::Color::Transparent;
			this->Bback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Bback->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bback->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bback.Image")));
			this->Bback->Location = System::Drawing::Point(328, 661);
			this->Bback->Name = L"Bback";
			this->Bback->Size = System::Drawing::Size(143, 67);
			this->Bback->TabIndex = 28;
			this->Bback->TabStop = false;
			this->Bback->Click += gcnew System::EventHandler(this, &upgradeavatar::Bback_Click);
			// 
			// B4
			// 
			this->B4->Location = System::Drawing::Point(414, 477);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(331, 41);
			this->B4->TabIndex = 67;
			this->B4->Text = L"Rezerwuj";
			this->B4->UseVisualStyleBackColor = true;
			this->B4->Visible = false;
			this->B4->Click += gcnew System::EventHandler(this, &upgradeavatar::B4_Click);
			// 
			// L4perk
			// 
			this->L4perk->AutoSize = true;
			this->L4perk->BackColor = System::Drawing::Color::Transparent;
			this->L4perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L4perk->ForeColor = System::Drawing::Color::Lime;
			this->L4perk->Location = System::Drawing::Point(251, 454);
			this->L4perk->Name = L"L4perk";
			this->L4perk->Size = System::Drawing::Size(349, 20);
			this->L4perk->TabIndex = 66;
			this->L4perk->Text = L"ZYSK:   dodatkowe cztery linie kodu za klikniêcie";
			// 
			// L4cost
			// 
			this->L4cost->AutoSize = true;
			this->L4cost->BackColor = System::Drawing::Color::Transparent;
			this->L4cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L4cost->ForeColor = System::Drawing::Color::Red;
			this->L4cost->Location = System::Drawing::Point(251, 486);
			this->L4cost->Name = L"L4cost";
			this->L4cost->Size = System::Drawing::Size(129, 20);
			this->L4cost->TabIndex = 65;
			this->L4cost->Text = L"KOSZT:   1 000z³";
			// 
			// L4
			// 
			this->L4->AutoSize = true;
			this->L4->BackColor = System::Drawing::Color::Transparent;
			this->L4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L4->Location = System::Drawing::Point(253, 407);
			this->L4->Name = L"L4";
			this->L4->Size = System::Drawing::Size(236, 24);
			this->L4->TabIndex = 63;
			this->L4->Text = L"Legendarny programista";
			// 
			// B3
			// 
			this->B3->Location = System::Drawing::Point(414, 367);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(331, 41);
			this->B3->TabIndex = 62;
			this->B3->Text = L"Rezerwuj";
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Visible = false;
			this->B3->Click += gcnew System::EventHandler(this, &upgradeavatar::B3_Click);
			// 
			// L3perk
			// 
			this->L3perk->AutoSize = true;
			this->L3perk->BackColor = System::Drawing::Color::Transparent;
			this->L3perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3perk->ForeColor = System::Drawing::Color::Lime;
			this->L3perk->Location = System::Drawing::Point(253, 344);
			this->L3perk->Name = L"L3perk";
			this->L3perk->Size = System::Drawing::Size(332, 20);
			this->L3perk->TabIndex = 61;
			this->L3perk->Text = L"ZYSK:   dodatkowe trzy linie kodu za klikniêcie";
			// 
			// L3cost
			// 
			this->L3cost->AutoSize = true;
			this->L3cost->BackColor = System::Drawing::Color::Transparent;
			this->L3cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3cost->ForeColor = System::Drawing::Color::Red;
			this->L3cost->Location = System::Drawing::Point(250, 376);
			this->L3cost->Name = L"L3cost";
			this->L3cost->Size = System::Drawing::Size(116, 20);
			this->L3cost->TabIndex = 60;
			this->L3cost->Text = L"KOSZT:   500z³";
			// 
			// L3
			// 
			this->L3->AutoSize = true;
			this->L3->BackColor = System::Drawing::Color::Transparent;
			this->L3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L3->Location = System::Drawing::Point(249, 290);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(182, 24);
			this->L3->TabIndex = 58;
			this->L3->Text = L"Epicki programista";
			// 
			// B2
			// 
			this->B2->Location = System::Drawing::Point(414, 250);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(331, 41);
			this->B2->TabIndex = 57;
			this->B2->Text = L"Rezerwuj";
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Visible = false;
			this->B2->Click += gcnew System::EventHandler(this, &upgradeavatar::B2_Click);
			// 
			// L2perk
			// 
			this->L2perk->AutoSize = true;
			this->L2perk->BackColor = System::Drawing::Color::Transparent;
			this->L2perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2perk->ForeColor = System::Drawing::Color::Lime;
			this->L2perk->Location = System::Drawing::Point(251, 227);
			this->L2perk->Name = L"L2perk";
			this->L2perk->Size = System::Drawing::Size(339, 20);
			this->L2perk->TabIndex = 56;
			this->L2perk->Text = L"ZYSK:   dodatkowe dwie linie kodu za klikniêcie";
			// 
			// L2cost
			// 
			this->L2cost->AutoSize = true;
			this->L2cost->BackColor = System::Drawing::Color::Transparent;
			this->L2cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2cost->ForeColor = System::Drawing::Color::Red;
			this->L2cost->Location = System::Drawing::Point(251, 259);
			this->L2cost->Name = L"L2cost";
			this->L2cost->Size = System::Drawing::Size(116, 20);
			this->L2cost->TabIndex = 55;
			this->L2cost->Text = L"KOSZT:   200z³";
			// 
			// L2
			// 
			this->L2->AutoSize = true;
			this->L2->BackColor = System::Drawing::Color::Transparent;
			this->L2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L2->Location = System::Drawing::Point(250, 173);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(195, 24);
			this->L2->TabIndex = 53;
			this->L2->Text = L"S³awny programista";
			// 
			// B1
			// 
			this->B1->Location = System::Drawing::Point(414, 126);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(331, 41);
			this->B1->TabIndex = 52;
			this->B1->Text = L"Rezerwuj";
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Visible = false;
			this->B1->Click += gcnew System::EventHandler(this, &upgradeavatar::B1_Click);
			// 
			// L1perk
			// 
			this->L1perk->AutoSize = true;
			this->L1perk->BackColor = System::Drawing::Color::Transparent;
			this->L1perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1perk->ForeColor = System::Drawing::Color::Lime;
			this->L1perk->Location = System::Drawing::Point(253, 103);
			this->L1perk->Name = L"L1perk";
			this->L1perk->Size = System::Drawing::Size(303, 20);
			this->L1perk->TabIndex = 51;
			this->L1perk->Text = L"ZYSK:   dodatkowa linia kodu za klikniêcie";
			// 
			// L1cost
			// 
			this->L1cost->AutoSize = true;
			this->L1cost->BackColor = System::Drawing::Color::Transparent;
			this->L1cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1cost->ForeColor = System::Drawing::Color::Red;
			this->L1cost->Location = System::Drawing::Point(253, 135);
			this->L1cost->Name = L"L1cost";
			this->L1cost->Size = System::Drawing::Size(107, 20);
			this->L1cost->TabIndex = 50;
			this->L1cost->Text = L"KOSZT:   50z³";
			// 
			// L1
			// 
			this->L1->AutoSize = true;
			this->L1->BackColor = System::Drawing::Color::Transparent;
			this->L1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L1->Location = System::Drawing::Point(250, 56);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(251, 24);
			this->L1->TabIndex = 48;
			this->L1->Text = L"Profesjonalny programista";
			// 
			// B5
			// 
			this->B5->Location = System::Drawing::Point(414, 601);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(331, 41);
			this->B5->TabIndex = 72;
			this->B5->Text = L"Rezerwuj";
			this->B5->UseVisualStyleBackColor = true;
			this->B5->Visible = false;
			this->B5->Click += gcnew System::EventHandler(this, &upgradeavatar::B5_Click);
			// 
			// L5perk
			// 
			this->L5perk->AutoSize = true;
			this->L5perk->BackColor = System::Drawing::Color::Transparent;
			this->L5perk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L5perk->ForeColor = System::Drawing::Color::Lime;
			this->L5perk->Location = System::Drawing::Point(253, 578);
			this->L5perk->Name = L"L5perk";
			this->L5perk->Size = System::Drawing::Size(330, 20);
			this->L5perk->TabIndex = 71;
			this->L5perk->Text = L"ZYSK:   dodatkowe piêæ linii kodu za klikniêcie";
			// 
			// L5cost
			// 
			this->L5cost->AutoSize = true;
			this->L5cost->BackColor = System::Drawing::Color::Transparent;
			this->L5cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L5cost->ForeColor = System::Drawing::Color::Red;
			this->L5cost->Location = System::Drawing::Point(250, 610);
			this->L5cost->Name = L"L5cost";
			this->L5cost->Size = System::Drawing::Size(129, 20);
			this->L5cost->TabIndex = 70;
			this->L5cost->Text = L"KOSZT:   3 000z³";
			// 
			// L5
			// 
			this->L5->AutoSize = true;
			this->L5->BackColor = System::Drawing::Color::Transparent;
			this->L5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L5->Location = System::Drawing::Point(249, 530);
			this->L5->Name = L"L5";
			this->L5->Size = System::Drawing::Size(205, 24);
			this->L5->TabIndex = 68;
			this->L5->Text = L"Mityczny programista";
			// 
			// L1description
			// 
			this->L1description->AutoSize = true;
			this->L1description->BackColor = System::Drawing::Color::Transparent;
			this->L1description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1description->Location = System::Drawing::Point(254, 80);
			this->L1description->Name = L"L1description";
			this->L1description->Size = System::Drawing::Size(327, 13);
			this->L1description->TabIndex = 49;
			this->L1description->Text = L"ten kurs pozwoli Ci podszlifowaæ Twoje umiejêtnoœci programowania";
			// 
			// P1
			// 
			this->P1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P1.BackgroundImage")));
			this->P1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->P1->Location = System::Drawing::Point(44, 56);
			this->P1->Name = L"P1";
			this->P1->Size = System::Drawing::Size(180, 111);
			this->P1->TabIndex = 73;
			this->P1->TabStop = false;
			// 
			// P2
			// 
			this->P2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P2.BackgroundImage")));
			this->P2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->P2->Location = System::Drawing::Point(44, 173);
			this->P2->Name = L"P2";
			this->P2->Size = System::Drawing::Size(180, 111);
			this->P2->TabIndex = 74;
			this->P2->TabStop = false;
			// 
			// L2description
			// 
			this->L2description->AutoSize = true;
			this->L2description->BackColor = System::Drawing::Color::Transparent;
			this->L2description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2description->Location = System::Drawing::Point(252, 198);
			this->L2description->Name = L"L2description";
			this->L2description->Size = System::Drawing::Size(358, 13);
			this->L2description->TabIndex = 54;
			this->L2description->Text = L"dziêki temu kursowi Twoje umiejêtnoœci programistyczne znacznie wzrosn¹";
			// 
			// L3description
			// 
			this->L3description->AutoSize = true;
			this->L3description->BackColor = System::Drawing::Color::Transparent;
			this->L3description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3description->Location = System::Drawing::Point(252, 315);
			this->L3description->Name = L"L3description";
			this->L3description->Size = System::Drawing::Size(230, 13);
			this->L3description->TabIndex = 59;
			this->L3description->Text = L"ten kurs zrobi z Ciebie niezwyk³ego programistê";
			// 
			// L4description
			// 
			this->L4description->AutoSize = true;
			this->L4description->BackColor = System::Drawing::Color::Transparent;
			this->L4description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L4description->Location = System::Drawing::Point(254, 432);
			this->L4description->Name = L"L4description";
			this->L4description->Size = System::Drawing::Size(355, 13);
			this->L4description->TabIndex = 64;
			this->L4description->Text = L"dziêki temu kursowi staniesz siê programist¹ o którym bêd¹ œpiewaæ pieœni";
			// 
			// L5description
			// 
			this->L5description->AutoSize = true;
			this->L5description->BackColor = System::Drawing::Color::Transparent;
			this->L5description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L5description->Location = System::Drawing::Point(254, 555);
			this->L5description->Name = L"L5description";
			this->L5description->Size = System::Drawing::Size(310, 13);
			this->L5description->TabIndex = 69;
			this->L5description->Text = L"po tym kursie wespniesz sie do panteonu bogów programowania";
			// 
			// P3
			// 
			this->P3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P3.BackgroundImage")));
			this->P3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->P3->Location = System::Drawing::Point(44, 290);
			this->P3->Name = L"P3";
			this->P3->Size = System::Drawing::Size(180, 111);
			this->P3->TabIndex = 75;
			this->P3->TabStop = false;
			// 
			// P5
			// 
			this->P5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P5.BackgroundImage")));
			this->P5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->P5->Location = System::Drawing::Point(44, 524);
			this->P5->Name = L"P5";
			this->P5->Size = System::Drawing::Size(180, 111);
			this->P5->TabIndex = 77;
			this->P5->TabStop = false;
			// 
			// P4
			// 
			this->P4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"P4.BackgroundImage")));
			this->P4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->P4->Location = System::Drawing::Point(44, 407);
			this->P4->Name = L"P4";
			this->P4->Size = System::Drawing::Size(180, 111);
			this->P4->TabIndex = 76;
			this->P4->TabStop = false;
			// 
			// upgradeavatar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(794, 745);
			this->Controls->Add(this->P5);
			this->Controls->Add(this->P4);
			this->Controls->Add(this->P3);
			this->Controls->Add(this->P2);
			this->Controls->Add(this->P1);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->L5perk);
			this->Controls->Add(this->L5cost);
			this->Controls->Add(this->L5description);
			this->Controls->Add(this->L5);
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
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"upgradeavatar";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ulepszenia zwiêkszaj¹ce umiejêtnoœci Twojego programisty";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P4))->EndInit();
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
			 if (cash < 200)B2->Visible = false;
			 if (cash < 500)B3->Visible = false;
			 if (cash < 1000)B4->Visible = false;
			 if (cash < 3000)B5->Visible = false;
}
private: System::Void B2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 2
			 paid += 200;
			 cash -= 200;
			 perk2 = true;
			 B2->Visible = false;
			 if (cash < 50)B1->Visible = false;
			 if (cash < 500)B3->Visible = false;
			 if (cash < 1000)B4->Visible = false;
			 if (cash < 3000)B5->Visible = false;
}
private: System::Void B3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 3
			 paid += 500;
			 cash -= 500;
			 perk3 = true;
			 B3->Visible = false;
			 if (cash < 50)B1->Visible = false;
			 if (cash < 200)B2->Visible = false;
			 if (cash < 1000)B4->Visible = false;
			 if (cash < 3000)B5->Visible = false;
}
private: System::Void B4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 4
			 paid += 1000;
			 cash -= 1000;
			 perk4 = true;
			 B4->Visible = false;
			 if (cash < 50)B1->Visible = false;
			 if (cash < 200)B2->Visible = false;
			 if (cash < 500)B3->Visible = false;
			 if (cash < 3000)B5->Visible = false;
}
private: System::Void B5_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zakup perka nr 5
			 paid += 3000;
			 cash -= 3000;
			 perk5 = true;
			 B5->Visible = false;
			 if (cash < 50)B1->Visible = false;
			 if (cash < 200)B2->Visible = false;
			 if (cash < 1000)B4->Visible = false;
			 if (cash < 500)B3->Visible = false;
}
};
}