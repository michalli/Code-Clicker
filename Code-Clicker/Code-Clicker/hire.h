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
			employee1 = false;
			employee2 = false;
			paid = 0;
			cash = 0;
		}
				
		void check(int passedcash, bool e1, bool e2, bool e3, bool e4){
			cash = passedcash;
			if (passedcash >= 100 && !e1 )Bhire1->Visible = true;
			if (passedcash >= 400 && !e2 )Bhire2->Visible = true;
			if (passedcash >= 1000 && !e3)Bhire3->Visible = true;
			if (passedcash >= 3000 && !e4)Bhire4->Visible = true;
		}

		bool getemployee1(){
			return employee1;
		}
		bool getemployee2(){
			return employee2;
		}
		bool getemployee3(){
			return employee3;
		}
		bool getemployee4(){
			return employee4;
		}
		int getpaid(){
			return paid;
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

	private: System::Windows::Forms::PictureBox^  P1;
	private: System::Windows::Forms::PictureBox^  P2;
	private: System::Windows::Forms::PictureBox^  Bhire1;
	private: System::Windows::Forms::PictureBox^  Bhire2;
	private: System::Windows::Forms::Label^  L1name;
	private: System::Windows::Forms::Label^  L2name;
	private: System::Windows::Forms::Label^  L1role;
	private: System::Windows::Forms::Label^  L2role;
	private: System::Windows::Forms::Label^  L1cost;
	private: System::Windows::Forms::Label^  L1upkeep;
	private: System::Windows::Forms::Label^  L2upkeep;
	private: System::Windows::Forms::Label^  L2cost;
	private: System::Windows::Forms::Label^  L2premium;
	
	private:
		bool employee1;
		bool employee2;
		bool employee3;
		bool employee4;
		int paid;
		int cash;


	private: System::Windows::Forms::PictureBox^  Bback;
	private: System::Windows::Forms::Label^  L3absence;
	private: System::Windows::Forms::Label^  L3upkeep;
	private: System::Windows::Forms::Label^  L3cost;
	private: System::Windows::Forms::Label^  L3role;
	private: System::Windows::Forms::Label^  L3name;
	private: System::Windows::Forms::PictureBox^  Bhire3;
	private: System::Windows::Forms::PictureBox^  P3;
	private: System::Windows::Forms::Label^  L3trans;
	private: System::Windows::Forms::Label^  L4determination;
	private: System::Windows::Forms::Label^  L4laziness;
	private: System::Windows::Forms::Label^  L4upkeep;
	private: System::Windows::Forms::Label^  L4cost;
	private: System::Windows::Forms::Label^  L4role;
	private: System::Windows::Forms::Label^  L4name;
	private: System::Windows::Forms::PictureBox^  Bhire4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  L4rebel;


			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(hire::typeid));
			this->P1 = (gcnew System::Windows::Forms::PictureBox());
			this->P2 = (gcnew System::Windows::Forms::PictureBox());
			this->Bhire1 = (gcnew System::Windows::Forms::PictureBox());
			this->Bhire2 = (gcnew System::Windows::Forms::PictureBox());
			this->L1name = (gcnew System::Windows::Forms::Label());
			this->L2name = (gcnew System::Windows::Forms::Label());
			this->L1role = (gcnew System::Windows::Forms::Label());
			this->L2role = (gcnew System::Windows::Forms::Label());
			this->L1cost = (gcnew System::Windows::Forms::Label());
			this->L1upkeep = (gcnew System::Windows::Forms::Label());
			this->L2upkeep = (gcnew System::Windows::Forms::Label());
			this->L2cost = (gcnew System::Windows::Forms::Label());
			this->L2premium = (gcnew System::Windows::Forms::Label());
			this->Bback = (gcnew System::Windows::Forms::PictureBox());
			this->L3absence = (gcnew System::Windows::Forms::Label());
			this->L3upkeep = (gcnew System::Windows::Forms::Label());
			this->L3cost = (gcnew System::Windows::Forms::Label());
			this->L3role = (gcnew System::Windows::Forms::Label());
			this->L3name = (gcnew System::Windows::Forms::Label());
			this->Bhire3 = (gcnew System::Windows::Forms::PictureBox());
			this->P3 = (gcnew System::Windows::Forms::PictureBox());
			this->L3trans = (gcnew System::Windows::Forms::Label());
			this->L4determination = (gcnew System::Windows::Forms::Label());
			this->L4laziness = (gcnew System::Windows::Forms::Label());
			this->L4upkeep = (gcnew System::Windows::Forms::Label());
			this->L4cost = (gcnew System::Windows::Forms::Label());
			this->L4role = (gcnew System::Windows::Forms::Label());
			this->L4name = (gcnew System::Windows::Forms::Label());
			this->Bhire4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->L4rebel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire4))->BeginInit();
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
			// Bhire1
			// 
			this->Bhire1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bhire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bhire1.Image")));
			this->Bhire1->Location = System::Drawing::Point(573, 59);
			this->Bhire1->Name = L"Bhire1";
			this->Bhire1->Size = System::Drawing::Size(154, 84);
			this->Bhire1->TabIndex = 3;
			this->Bhire1->TabStop = false;
			this->Bhire1->Visible = false;
			this->Bhire1->Click += gcnew System::EventHandler(this, &hire::Bhire1_Click);
			// 
			// Bhire2
			// 
			this->Bhire2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bhire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bhire2.Image")));
			this->Bhire2->Location = System::Drawing::Point(573, 198);
			this->Bhire2->Name = L"Bhire2";
			this->Bhire2->Size = System::Drawing::Size(154, 84);
			this->Bhire2->TabIndex = 4;
			this->Bhire2->TabStop = false;
			this->Bhire2->Visible = false;
			this->Bhire2->Click += gcnew System::EventHandler(this, &hire::Bhire2_Click);
			// 
			// L1name
			// 
			this->L1name->AutoSize = true;
			this->L1name->BackColor = System::Drawing::Color::Transparent;
			this->L1name->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L1name->Location = System::Drawing::Point(291, 39);
			this->L1name->Name = L"L1name";
			this->L1name->Size = System::Drawing::Size(196, 39);
			this->L1name->TabIndex = 5;
			this->L1name->Text = L"Zosia Samosia";
			// 
			// L2name
			// 
			this->L2name->AutoSize = true;
			this->L2name->BackColor = System::Drawing::Color::Transparent;
			this->L2name->Font = (gcnew System::Drawing::Font(L"SketchFlow Print", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L2name->Location = System::Drawing::Point(292, 180);
			this->L2name->Name = L"L2name";
			this->L2name->Size = System::Drawing::Size(264, 34);
			this->L2name->TabIndex = 6;
			this->L2name->Text = L"Mariusz Denko";
			// 
			// L1role
			// 
			this->L1role->AutoSize = true;
			this->L1role->BackColor = System::Drawing::Color::Transparent;
			this->L1role->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1role->Location = System::Drawing::Point(294, 87);
			this->L1role->Name = L"L1role";
			this->L1role->Size = System::Drawing::Size(172, 19);
			this->L1role->TabIndex = 7;
			this->L1role->Text = L"pocz¹tkuj¹ca programistka";
			// 
			// L2role
			// 
			this->L2role->AutoSize = true;
			this->L2role->BackColor = System::Drawing::Color::Transparent;
			this->L2role->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2role->Location = System::Drawing::Point(294, 227);
			this->L2role->Name = L"L2role";
			this->L2role->Size = System::Drawing::Size(80, 19);
			this->L2role->TabIndex = 8;
			this->L2role->Text = L"programista";
			// 
			// L1cost
			// 
			this->L1cost->AutoSize = true;
			this->L1cost->BackColor = System::Drawing::Color::Transparent;
			this->L1cost->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1cost->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->L1cost->Location = System::Drawing::Point(295, 128);
			this->L1cost->Name = L"L1cost";
			this->L1cost->Size = System::Drawing::Size(79, 15);
			this->L1cost->TabIndex = 9;
			this->L1cost->Text = L"100 z³ na start";
			// 
			// L1upkeep
			// 
			this->L1upkeep->AutoSize = true;
			this->L1upkeep->BackColor = System::Drawing::Color::Transparent;
			this->L1upkeep->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L1upkeep->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->L1upkeep->Location = System::Drawing::Point(295, 143);
			this->L1upkeep->Name = L"L1upkeep";
			this->L1upkeep->Size = System::Drawing::Size(235, 15);
			this->L1upkeep->TabIndex = 10;
			this->L1upkeep->Text = L"po³owa generowanych przez siebie zysków";
			// 
			// L2upkeep
			// 
			this->L2upkeep->AutoSize = true;
			this->L2upkeep->BackColor = System::Drawing::Color::Transparent;
			this->L2upkeep->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2upkeep->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->L2upkeep->Location = System::Drawing::Point(295, 271);
			this->L2upkeep->Name = L"L2upkeep";
			this->L2upkeep->Size = System::Drawing::Size(235, 15);
			this->L2upkeep->TabIndex = 12;
			this->L2upkeep->Text = L"po³owa generowanych przez siebie zysków";
			// 
			// L2cost
			// 
			this->L2cost->AutoSize = true;
			this->L2cost->BackColor = System::Drawing::Color::Transparent;
			this->L2cost->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L2cost->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->L2cost->Location = System::Drawing::Point(295, 256);
			this->L2cost->Name = L"L2cost";
			this->L2cost->Size = System::Drawing::Size(79, 15);
			this->L2cost->TabIndex = 11;
			this->L2cost->Text = L"400 z³ na start";
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
			// L3upkeep
			// 
			this->L3upkeep->AutoSize = true;
			this->L3upkeep->BackColor = System::Drawing::Color::Transparent;
			this->L3upkeep->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3upkeep->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->L3upkeep->Location = System::Drawing::Point(295, 402);
			this->L3upkeep->Name = L"L3upkeep";
			this->L3upkeep->Size = System::Drawing::Size(235, 15);
			this->L3upkeep->TabIndex = 32;
			this->L3upkeep->Text = L"po³owa generowanych przez siebie zysków";
			// 
			// L3cost
			// 
			this->L3cost->AutoSize = true;
			this->L3cost->BackColor = System::Drawing::Color::Transparent;
			this->L3cost->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3cost->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->L3cost->Location = System::Drawing::Point(295, 387);
			this->L3cost->Name = L"L3cost";
			this->L3cost->Size = System::Drawing::Size(85, 15);
			this->L3cost->TabIndex = 31;
			this->L3cost->Text = L"1000 z³ na start";
			// 
			// L3role
			// 
			this->L3role->AutoSize = true;
			this->L3role->BackColor = System::Drawing::Color::Transparent;
			this->L3role->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L3role->Location = System::Drawing::Point(294, 368);
			this->L3role->Name = L"L3role";
			this->L3role->Size = System::Drawing::Size(170, 19);
			this->L3role->TabIndex = 30;
			this->L3role->Text = L"doœwiadczony programista";
			// 
			// L3name
			// 
			this->L3name->AutoSize = true;
			this->L3name->BackColor = System::Drawing::Color::Transparent;
			this->L3name->Font = (gcnew System::Drawing::Font(L"Segoe Print", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L3name->Location = System::Drawing::Point(292, 321);
			this->L3name->Name = L"L3name";
			this->L3name->Size = System::Drawing::Size(277, 57);
			this->L3name->TabIndex = 29;
			this->L3name->Text = L"Alfred Kofeinka";
			// 
			// Bhire3
			// 
			this->Bhire3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bhire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bhire3.Image")));
			this->Bhire3->Location = System::Drawing::Point(573, 339);
			this->Bhire3->Name = L"Bhire3";
			this->Bhire3->Size = System::Drawing::Size(154, 84);
			this->Bhire3->TabIndex = 28;
			this->Bhire3->TabStop = false;
			this->Bhire3->Visible = false;
			this->Bhire3->Click += gcnew System::EventHandler(this, &hire::Bhire3_Click);
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
			// L4upkeep
			// 
			this->L4upkeep->AutoSize = true;
			this->L4upkeep->BackColor = System::Drawing::Color::Transparent;
			this->L4upkeep->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L4upkeep->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->L4upkeep->Location = System::Drawing::Point(295, 543);
			this->L4upkeep->Name = L"L4upkeep";
			this->L4upkeep->Size = System::Drawing::Size(246, 15);
			this->L4upkeep->TabIndex = 40;
			this->L4upkeep->Text = L"wyp³ata po cyklu zale¿na od produktywnoœci";
			// 
			// L4cost
			// 
			this->L4cost->AutoSize = true;
			this->L4cost->BackColor = System::Drawing::Color::Transparent;
			this->L4cost->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L4cost->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->L4cost->Location = System::Drawing::Point(295, 528);
			this->L4cost->Name = L"L4cost";
			this->L4cost->Size = System::Drawing::Size(85, 15);
			this->L4cost->TabIndex = 39;
			this->L4cost->Text = L"3000 z³ na start";
			// 
			// L4role
			// 
			this->L4role->AutoSize = true;
			this->L4role->BackColor = System::Drawing::Color::Transparent;
			this->L4role->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->L4role->Location = System::Drawing::Point(294, 509);
			this->L4role->Name = L"L4role";
			this->L4role->Size = System::Drawing::Size(42, 19);
			this->L4role->TabIndex = 38;
			this->L4role->Text = L"tester";
			// 
			// L4name
			// 
			this->L4name->AutoSize = true;
			this->L4name->BackColor = System::Drawing::Color::Transparent;
			this->L4name->Font = (gcnew System::Drawing::Font(L"Gabriola", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->L4name->Location = System::Drawing::Point(292, 462);
			this->L4name->Name = L"L4name";
			this->L4name->Size = System::Drawing::Size(169, 59);
			this->L4name->TabIndex = 37;
			this->L4name->Text = L"Janusz Apacz";
			// 
			// Bhire4
			// 
			this->Bhire4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bhire4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bhire4.Image")));
			this->Bhire4->Location = System::Drawing::Point(573, 480);
			this->Bhire4->Name = L"Bhire4";
			this->Bhire4->Size = System::Drawing::Size(154, 84);
			this->Bhire4->TabIndex = 36;
			this->Bhire4->TabStop = false;
			this->Bhire4->Visible = false;
			this->Bhire4->Click += gcnew System::EventHandler(this, &hire::Bhire4_Click);
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
			this->Controls->Add(this->L4upkeep);
			this->Controls->Add(this->L4cost);
			this->Controls->Add(this->L4role);
			this->Controls->Add(this->L4name);
			this->Controls->Add(this->Bhire4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->L3trans);
			this->Controls->Add(this->L3absence);
			this->Controls->Add(this->L3upkeep);
			this->Controls->Add(this->L3cost);
			this->Controls->Add(this->L3role);
			this->Controls->Add(this->L3name);
			this->Controls->Add(this->Bhire3);
			this->Controls->Add(this->P3);
			this->Controls->Add(this->Bback);
			this->Controls->Add(this->L2premium);
			this->Controls->Add(this->L2upkeep);
			this->Controls->Add(this->L2cost);
			this->Controls->Add(this->L1upkeep);
			this->Controls->Add(this->L1cost);
			this->Controls->Add(this->L2role);
			this->Controls->Add(this->L1role);
			this->Controls->Add(this->L2name);
			this->Controls->Add(this->L1name);
			this->Controls->Add(this->Bhire2);
			this->Controls->Add(this->Bhire1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
protected: System::Void Bhire1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //wynajem pomocnika nr 1			 
				 paid += 100; 
				 cash -= paid;
				 employee1 = true;
				 Bhire1->Visible = false;
				 if (cash < 400)Bhire2->Visible = false;
				 if (cash < 1000)Bhire3->Visible = false;
				 if (cash < 3000)Bhire4->Visible = false;
}
private: System::Void Bhire2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //wynajem pomocnika nr 2	
				 paid += 400;
				 cash -= paid;
				 employee2 = true;
				 Bhire2->Visible = false;		
				 if (cash < 100)Bhire1->Visible = false;
				 if (cash < 1000)Bhire3->Visible = false;
				 if (cash < 3000)Bhire4->Visible = false;
}
private: System::Void Bhire3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //wynajem pomocnika nr 3
				paid += 1000;
				cash -= paid;
				employee3 = true;
				Bhire3->Visible = false;
				if (cash < 100)Bhire1->Visible = false;
				if (cash < 400)Bhire2->Visible = false;
				if (cash < 3000)Bhire4->Visible = false;
}
private: System::Void Bhire4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //wynajem pomocnika nr 4
				paid += 3000;
				cash -= paid;
				employee4 = true;
				Bhire4->Visible = false;
				if (cash < 100)Bhire1->Visible = false;
				if (cash < 400)Bhire2->Visible = false;
				if (cash < 1000)Bhire3->Visible = false;
}
private: System::Void Bback_Click(System::Object^  sender, System::EventArgs^  e) {
			 //przycisk wstecz
			 this->Close();
}
};
}