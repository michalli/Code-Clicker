#pragma once
#include "hire.h"//po³¹czenie z hire.h
using namespace System::IO;//biblioteka zwi¹zana z zapisywaniem do plików
namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)//konstruktor
		{
			InitializeComponent();
			code = 0;
			cash = 0;
			codefactor = 1;
			cashfactor = 25;
			counter = 0;
			employee1 = false;
		}
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()//destruktor
		{	
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  Iavatar;

	protected:

	protected:

	private:
		/// <summary>
		int code;//iloœæ kodu
		int	cash;//iloœæ pieniêdzy
		int	codefactor;//wspó³czynnik: ile kodu za jedno klikniêcie
		int	cashfactor;//wspó³czynnik: ile kasy za liniê kodu
		int	counter;//zmienna pomocnicza(pasek postêpu)
		bool employee1;//czy pomocnik nr 1 jest wynajêty?

	private: System::Windows::Forms::Timer^  Tcoding;
	private: System::Windows::Forms::PictureBox^  Pzl;
	private: System::Windows::Forms::Button^  Bsave;
	private: System::Windows::Forms::Button^  Bload;
	private: System::Windows::Forms::PictureBox^  Icode0;
	private: System::Windows::Forms::PictureBox^  Icode1;
	private: System::Windows::Forms::PictureBox^  Icash0;
	private: System::Windows::Forms::PictureBox^  Icash1;
	private: System::Windows::Forms::PictureBox^  Icash8;
	private: System::Windows::Forms::PictureBox^  Icash7;
	private: System::Windows::Forms::PictureBox^  Icash6;
	private: System::Windows::Forms::PictureBox^  Icash5;
	private: System::Windows::Forms::PictureBox^  Icash4;
	private: System::Windows::Forms::PictureBox^  Icash3;
	private: System::Windows::Forms::PictureBox^  Icash2;
	private: System::Windows::Forms::PictureBox^  Icash9;
	private: System::Windows::Forms::PictureBox^  Icode9;
	private: System::Windows::Forms::PictureBox^  Icode8;
	private: System::Windows::Forms::PictureBox^  Icode7;
	private: System::Windows::Forms::PictureBox^  Icode6;
	private: System::Windows::Forms::PictureBox^  Icode5;
	private: System::Windows::Forms::PictureBox^  Icode4;
	private: System::Windows::Forms::PictureBox^  Icode3;
	private: System::Windows::Forms::PictureBox^  Icode2;
	private: System::Windows::Forms::PictureBox^  Bcode;
	private: System::Windows::Forms::PictureBox^  Lcode;
	private: System::Windows::Forms::PictureBox^  Lcash;
private: System::Windows::Forms::Button^  Bhireh;
	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  B2;
	private: System::Windows::Forms::PictureBox^  B3;
	private: System::Windows::Forms::PictureBox^  B4;






	private: System::ComponentModel::IContainer^  components;

		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Icode9 = (gcnew System::Windows::Forms::PictureBox());
			this->Icode8 = (gcnew System::Windows::Forms::PictureBox());
			this->Icode7 = (gcnew System::Windows::Forms::PictureBox());
			this->Icode6 = (gcnew System::Windows::Forms::PictureBox());
			this->Icode5 = (gcnew System::Windows::Forms::PictureBox());
			this->Icode4 = (gcnew System::Windows::Forms::PictureBox());
			this->Icode3 = (gcnew System::Windows::Forms::PictureBox());
			this->Icode2 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash9 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash8 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash7 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash6 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash5 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash4 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash3 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash2 = (gcnew System::Windows::Forms::PictureBox());
			this->Icode0 = (gcnew System::Windows::Forms::PictureBox());
			this->Icode1 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash0 = (gcnew System::Windows::Forms::PictureBox());
			this->Icash1 = (gcnew System::Windows::Forms::PictureBox());
			this->Pzl = (gcnew System::Windows::Forms::PictureBox());
			this->Iavatar = (gcnew System::Windows::Forms::PictureBox());
			this->Tcoding = (gcnew System::Windows::Forms::Timer(this->components));
			this->Bsave = (gcnew System::Windows::Forms::Button());
			this->Bload = (gcnew System::Windows::Forms::Button());
			this->Bcode = (gcnew System::Windows::Forms::PictureBox());
			this->Lcode = (gcnew System::Windows::Forms::PictureBox());
			this->Lcash = (gcnew System::Windows::Forms::PictureBox());
			this->Bhireh = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->B4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pzl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iavatar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bcode))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lcode))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lcash))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->BeginInit();
			this->SuspendLayout();
			// 
			// Icode9
			// 
			this->Icode9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode9.BackgroundImage")));
			this->Icode9->Location = System::Drawing::Point(411, 49);
			this->Icode9->Name = L"Icode9";
			this->Icode9->Size = System::Drawing::Size(28, 30);
			this->Icode9->TabIndex = 43;
			this->Icode9->TabStop = false;
			// 
			// Icode8
			// 
			this->Icode8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode8.BackgroundImage")));
			this->Icode8->Location = System::Drawing::Point(445, 49);
			this->Icode8->Name = L"Icode8";
			this->Icode8->Size = System::Drawing::Size(28, 30);
			this->Icode8->TabIndex = 42;
			this->Icode8->TabStop = false;
			// 
			// Icode7
			// 
			this->Icode7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode7.BackgroundImage")));
			this->Icode7->Location = System::Drawing::Point(479, 49);
			this->Icode7->Name = L"Icode7";
			this->Icode7->Size = System::Drawing::Size(28, 30);
			this->Icode7->TabIndex = 41;
			this->Icode7->TabStop = false;
			// 
			// Icode6
			// 
			this->Icode6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode6.BackgroundImage")));
			this->Icode6->Location = System::Drawing::Point(513, 49);
			this->Icode6->Name = L"Icode6";
			this->Icode6->Size = System::Drawing::Size(28, 30);
			this->Icode6->TabIndex = 40;
			this->Icode6->TabStop = false;
			// 
			// Icode5
			// 
			this->Icode5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode5.BackgroundImage")));
			this->Icode5->Location = System::Drawing::Point(547, 49);
			this->Icode5->Name = L"Icode5";
			this->Icode5->Size = System::Drawing::Size(28, 30);
			this->Icode5->TabIndex = 39;
			this->Icode5->TabStop = false;
			// 
			// Icode4
			// 
			this->Icode4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode4.BackgroundImage")));
			this->Icode4->Location = System::Drawing::Point(581, 49);
			this->Icode4->Name = L"Icode4";
			this->Icode4->Size = System::Drawing::Size(28, 30);
			this->Icode4->TabIndex = 38;
			this->Icode4->TabStop = false;
			// 
			// Icode3
			// 
			this->Icode3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode3.BackgroundImage")));
			this->Icode3->Location = System::Drawing::Point(615, 49);
			this->Icode3->Name = L"Icode3";
			this->Icode3->Size = System::Drawing::Size(28, 30);
			this->Icode3->TabIndex = 37;
			this->Icode3->TabStop = false;
			// 
			// Icode2
			// 
			this->Icode2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode2.BackgroundImage")));
			this->Icode2->Location = System::Drawing::Point(649, 49);
			this->Icode2->Name = L"Icode2";
			this->Icode2->Size = System::Drawing::Size(28, 30);
			this->Icode2->TabIndex = 36;
			this->Icode2->TabStop = false;
			// 
			// Icash9
			// 
			this->Icash9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash9.BackgroundImage")));
			this->Icash9->Location = System::Drawing::Point(218, 117);
			this->Icash9->Name = L"Icash9";
			this->Icash9->Size = System::Drawing::Size(28, 30);
			this->Icash9->TabIndex = 35;
			this->Icash9->TabStop = false;
			// 
			// Icash8
			// 
			this->Icash8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash8.BackgroundImage")));
			this->Icash8->Location = System::Drawing::Point(252, 117);
			this->Icash8->Name = L"Icash8";
			this->Icash8->Size = System::Drawing::Size(28, 30);
			this->Icash8->TabIndex = 34;
			this->Icash8->TabStop = false;
			// 
			// Icash7
			// 
			this->Icash7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash7.BackgroundImage")));
			this->Icash7->Location = System::Drawing::Point(286, 117);
			this->Icash7->Name = L"Icash7";
			this->Icash7->Size = System::Drawing::Size(28, 30);
			this->Icash7->TabIndex = 33;
			this->Icash7->TabStop = false;
			// 
			// Icash6
			// 
			this->Icash6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash6.BackgroundImage")));
			this->Icash6->Location = System::Drawing::Point(320, 117);
			this->Icash6->Name = L"Icash6";
			this->Icash6->Size = System::Drawing::Size(28, 30);
			this->Icash6->TabIndex = 32;
			this->Icash6->TabStop = false;
			// 
			// Icash5
			// 
			this->Icash5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash5.BackgroundImage")));
			this->Icash5->Location = System::Drawing::Point(354, 117);
			this->Icash5->Name = L"Icash5";
			this->Icash5->Size = System::Drawing::Size(28, 30);
			this->Icash5->TabIndex = 31;
			this->Icash5->TabStop = false;
			// 
			// Icash4
			// 
			this->Icash4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash4.BackgroundImage")));
			this->Icash4->Location = System::Drawing::Point(388, 117);
			this->Icash4->Name = L"Icash4";
			this->Icash4->Size = System::Drawing::Size(28, 30);
			this->Icash4->TabIndex = 30;
			this->Icash4->TabStop = false;
			// 
			// Icash3
			// 
			this->Icash3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash3.BackgroundImage")));
			this->Icash3->Location = System::Drawing::Point(422, 117);
			this->Icash3->Name = L"Icash3";
			this->Icash3->Size = System::Drawing::Size(28, 30);
			this->Icash3->TabIndex = 29;
			this->Icash3->TabStop = false;
			// 
			// Icash2
			// 
			this->Icash2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash2.BackgroundImage")));
			this->Icash2->Location = System::Drawing::Point(456, 117);
			this->Icash2->Name = L"Icash2";
			this->Icash2->Size = System::Drawing::Size(28, 30);
			this->Icash2->TabIndex = 28;
			this->Icash2->TabStop = false;
			// 
			// Icode0
			// 
			this->Icode0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode0.BackgroundImage")));
			this->Icode0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode0.Image")));
			this->Icode0->Location = System::Drawing::Point(716, 49);
			this->Icode0->Name = L"Icode0";
			this->Icode0->Size = System::Drawing::Size(30, 30);
			this->Icode0->TabIndex = 27;
			this->Icode0->TabStop = false;
			// 
			// Icode1
			// 
			this->Icode1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode1.BackgroundImage")));
			this->Icode1->Location = System::Drawing::Point(683, 49);
			this->Icode1->Name = L"Icode1";
			this->Icode1->Size = System::Drawing::Size(28, 30);
			this->Icode1->TabIndex = 25;
			this->Icode1->TabStop = false;
			// 
			// Icash0
			// 
			this->Icash0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash0.BackgroundImage")));
			this->Icash0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash0.Image")));
			this->Icash0->Location = System::Drawing::Point(523, 117);
			this->Icash0->Name = L"Icash0";
			this->Icash0->Size = System::Drawing::Size(30, 30);
			this->Icash0->TabIndex = 16;
			this->Icash0->TabStop = false;
			// 
			// Icash1
			// 
			this->Icash1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash1.BackgroundImage")));
			this->Icash1->Location = System::Drawing::Point(490, 117);
			this->Icash1->Name = L"Icash1";
			this->Icash1->Size = System::Drawing::Size(28, 30);
			this->Icash1->TabIndex = 14;
			this->Icash1->TabStop = false;
			// 
			// Pzl
			// 
			this->Pzl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pzl.BackgroundImage")));
			this->Pzl->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pzl.Image")));
			this->Pzl->Location = System::Drawing::Point(559, 117);
			this->Pzl->Name = L"Pzl";
			this->Pzl->Size = System::Drawing::Size(30, 30);
			this->Pzl->TabIndex = 6;
			this->Pzl->TabStop = false;
			// 
			// Iavatar
			// 
			this->Iavatar->BackColor = System::Drawing::SystemColors::Control;
			this->Iavatar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Iavatar.Image")));
			this->Iavatar->Location = System::Drawing::Point(12, 12);
			this->Iavatar->Name = L"Iavatar";
			this->Iavatar->Size = System::Drawing::Size(200, 135);
			this->Iavatar->TabIndex = 3;
			this->Iavatar->TabStop = false;
			// 
			// Tcoding
			// 
			this->Tcoding->Interval = 70;
			this->Tcoding->Tick += gcnew System::EventHandler(this, &MyForm::Tcoding_Tick);
			// 
			// Bsave
			// 
			this->Bsave->Location = System::Drawing::Point(634, 494);
			this->Bsave->Name = L"Bsave";
			this->Bsave->Size = System::Drawing::Size(112, 28);
			this->Bsave->TabIndex = 2;
			this->Bsave->Text = L"Zapisz";
			this->Bsave->UseVisualStyleBackColor = true;
			this->Bsave->Click += gcnew System::EventHandler(this, &MyForm::Bsave_Click_1);
			// 
			// Bload
			// 
			this->Bload->Enabled = false;
			this->Bload->Location = System::Drawing::Point(513, 494);
			this->Bload->Name = L"Bload";
			this->Bload->Size = System::Drawing::Size(112, 28);
			this->Bload->TabIndex = 3;
			this->Bload->Text = L"Wczytaj";
			this->Bload->UseVisualStyleBackColor = true;
			this->Bload->Visible = false;
			this->Bload->Click += gcnew System::EventHandler(this, &MyForm::Bload_Click_1);
			// 
			// Bcode
			// 
			this->Bcode->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bcode.BackgroundImage")));
			this->Bcode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bcode.Image")));
			this->Bcode->Location = System::Drawing::Point(70, 164);
			this->Bcode->Name = L"Bcode";
			this->Bcode->Size = System::Drawing::Size(154, 84);
			this->Bcode->TabIndex = 4;
			this->Bcode->TabStop = false;
			this->Bcode->Click += gcnew System::EventHandler(this, &MyForm::Bcode_Click);
			// 
			// Lcode
			// 
			this->Lcode->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lcode.BackgroundImage")));
			this->Lcode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lcode.Image")));
			this->Lcode->Location = System::Drawing::Point(218, 49);
			this->Lcode->Name = L"Lcode";
			this->Lcode->Size = System::Drawing::Size(131, 30);
			this->Lcode->TabIndex = 44;
			this->Lcode->TabStop = false;
			// 
			// Lcash
			// 
			this->Lcash->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lcash.BackgroundImage")));
			this->Lcash->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lcash.Image")));
			this->Lcash->Location = System::Drawing::Point(218, 85);
			this->Lcash->Name = L"Lcash";
			this->Lcash->Size = System::Drawing::Size(180, 26);
			this->Lcash->TabIndex = 45;
			this->Lcash->TabStop = false;
			// 
			// Bhireh
			// 
			this->Bhireh->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bhireh.BackgroundImage")));
			this->Bhireh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Bhireh->Location = System::Drawing::Point(593, 85);
			this->Bhireh->Name = L"Bhireh";
			this->Bhireh->Size = System::Drawing::Size(153, 84);
			this->Bhireh->TabIndex = 0;
			this->Bhireh->UseVisualStyleBackColor = true;
			this->Bhireh->Click += gcnew System::EventHandler(this, &MyForm::Bhire_Click);
			// 
			// B1
			// 
			this->B1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.BackgroundImage")));
			this->B1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->B1->Location = System::Drawing::Point(239, 190);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(28, 30);
			this->B1->TabIndex = 48;
			this->B1->TabStop = false;
			// 
			// B2
			// 
			this->B2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.BackgroundImage")));
			this->B2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->B2->Location = System::Drawing::Point(273, 190);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(28, 30);
			this->B2->TabIndex = 47;
			this->B2->TabStop = false;
			// 
			// B3
			// 
			this->B3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.BackgroundImage")));
			this->B3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->B3->Location = System::Drawing::Point(307, 190);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(28, 30);
			this->B3->TabIndex = 46;
			this->B3->TabStop = false;
			// 
			// B4
			// 
			this->B4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4.BackgroundImage")));
			this->B4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->B4->Location = System::Drawing::Point(341, 190);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(28, 30);
			this->B4->TabIndex = 50;
			this->B4->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(794, 572);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->Lcash);
			this->Controls->Add(this->Lcode);
			this->Controls->Add(this->Iavatar);
			this->Controls->Add(this->Icode9);
			this->Controls->Add(this->Bcode);
			this->Controls->Add(this->Icode8);
			this->Controls->Add(this->Bload);
			this->Controls->Add(this->Icode7);
			this->Controls->Add(this->Bsave);
			this->Controls->Add(this->Icode6);
			this->Controls->Add(this->Icode5);
			this->Controls->Add(this->Icode4);
			this->Controls->Add(this->Bhireh);
			this->Controls->Add(this->Icode3);
			this->Controls->Add(this->Icode2);
			this->Controls->Add(this->Pzl);
			this->Controls->Add(this->Icash9);
			this->Controls->Add(this->Icash1);
			this->Controls->Add(this->Icash8);
			this->Controls->Add(this->Icash0);
			this->Controls->Add(this->Icash7);
			this->Controls->Add(this->Icode1);
			this->Controls->Add(this->Icash6);
			this->Controls->Add(this->Icode0);
			this->Controls->Add(this->Icash5);
			this->Controls->Add(this->Icash2);
			this->Controls->Add(this->Icash4);
			this->Controls->Add(this->Icash3);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Code-Clicker";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icode1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icash1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pzl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iavatar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bcode))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lcode))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lcash))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Bcode_Click(System::Object^  sender, System::EventArgs^  e) {
				 //przycisk kodowania
				 Tcoding->Enabled = true;
				 Bcode->Enabled = false;
	}
			 void refresh(){
				 //odœwie¿anie wartoœci kasy i kodu
				 int cashtab[10], codetab[10];
				 int cashindex, codeindex, help;
				 cashindex = 1;
				 help = cash;
				 while (help / 10 != 0){
					 cashindex++;
					 help /= 10;
				 }
				 help = cash;
				 for (int i = 0; i < cashindex; i++){
					 cashtab[i] = help % 10;
					 help /= 10;
				 }
				 if (cashindex>0)Icash0->Load("grafika\\" + cashtab[0] + ".png"); else Icash0->Visible = false;
				 if (cashindex > 1){
					 Icash1->Load("grafika\\" + cashtab[1] + ".png"); 
					 Icash1->Visible = true;
				 }
				 else Icash1->Visible = false;
				 if (cashindex > 2){
					 Icash2->Load("grafika\\" + cashtab[2] + ".png");
					 Icash2->Visible = true;
				 }
				 else Icash2->Visible = false;
				 if (cashindex > 3){
					 Icash3->Load("grafika\\" + cashtab[3] + ".png");
					 Icash3->Visible = true;
				 }
				 else Icash3->Visible = false;
				 if (cashindex > 4){
					 Icash4->Load("grafika\\" + cashtab[4] + ".png");
					 Icash4->Visible = true;
				 }
				 else Icash4->Visible = false;
				 if (cashindex > 5){
					 Icash5->Load("grafika\\" + cashtab[5] + ".png");
					 Icash5->Visible = true;
				 }
				 else Icash5->Visible = false;
				 if (cashindex > 6){
					 Icash6->Load("grafika\\" + cashtab[6] + ".png");
					 Icash6->Visible = true;
				 }
				 else Icash6->Visible = false;
				 if (cashindex > 7){
					 Icash7->Load("grafika\\" + cashtab[7] + ".png");
					 Icash7->Visible = true;
				 }
				 else Icash7->Visible = false;
				 if (cashindex > 8){
					 Icash8->Load("grafika\\" + cashtab[8] + ".png");
					 Icash8->Visible = true;
				 }
				 else Icash8->Visible = false;
				 if (cashindex > 9){
					 Icash9->Load("grafika\\" + cashtab[9] + ".png");
					 Icash9->Visible = true;
				 }
				 else Icash9->Visible = false;		
				 codeindex = 1;
				 help = code;
				 while (help / 10 != 0){
				 codeindex++;
				 help /= 10;
				 }
				 help = code;
				 for (int i = 0; i < codeindex; i++){
				 codetab[i] = help % 10;
				 help /= 10;
				 }
				 if (codeindex>0){
					 Icode0->Load("grafika\\" + codetab[0] + ".png");
					 Icode0->Visible = true;
				 }
				 else Icode0->Visible = false;
				 if (codeindex > 1){
					 Icode1->Load("grafika\\" + codetab[1] + ".png");
					 Icode1->Visible = true;
				 }
				 else Icode1->Visible = false;
				 if (codeindex > 2){
					 Icode2->Load("grafika\\" + codetab[2] + ".png");
					 Icode2->Visible = true;
				 }
				 else Icode2->Visible = false;
				 if (codeindex > 3){
					 Icode3->Load("grafika\\" + codetab[3] + ".png");
					 Icode3->Visible = true;
				 }
				 else Icode3->Visible = false;
				 if (codeindex > 4){
					 Icode4->Load("grafika\\" + codetab[4] + ".png");
					 Icode4->Visible = true;
				 }
				 else Icode4->Visible = false;
				 if (codeindex > 5){
					 Icode5->Load("grafika\\" + codetab[5] + ".png");
					 Icode5->Visible = true;
				 }
				 else Icode5->Visible = false;
				 if (codeindex > 6){
					 Icode6->Load("grafika\\" + codetab[6] + ".png");
					 Icode6->Visible = true;
				 }
				 else Icode6->Visible = false;
				 if (codeindex > 7){
					 Icode7->Load("grafika\\" + codetab[7] + ".png");
					 Icode7->Visible = true;
				 }
				 else Icode7->Visible = false;
				 if (codeindex > 8){
					 Icode8->Load("grafika\\" + codetab[8] + ".png");
					 Icode8->Visible = true;
				 }
				 else Icode8->Visible = false;
				 if (codeindex > 9){
					 Icode9->Load("grafika\\" + codetab[9] + ".png");
					 Icode9->Visible = true;
				 }
				 else Icode9->Visible = false;
			 }
private: System::Void Tcoding_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //pasek postêpu kodowania
			 if (counter>1)B1->Load("grafika\\mini.png");
			 if (counter>3)B2->Load("grafika\\mini.png");
			 if (counter>5)B3->Load("grafika\\mini.png");
			 if (counter>7)B4->Load("grafika\\mini.png");
			 if (counter < 10)
				 counter++;
				if (counter == 10){
					code+=codefactor;
					cash=(codefactor*cashfactor)+cash;
					counter = 0;
					Tcoding->Enabled = false;
					Bcode->Enabled = true;
					B1->Load("grafika\\minit³o.png");
					B2->Load("grafika\\minit³o.png");
					B3->Load("grafika\\minit³o.png");
					B4->Load("grafika\\minit³o.png");
					refresh();
				}
}
private: System::Void Bload_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 /*
			 // Adres pliku
			 String^ fileName = "F:\\NAUKA\\git\\Code-Clicker\\Code-Clicker\\data.txt";
			 //Tworzenie pliku do odczytu
			 StreamReader^ sw = gcnew StreamReader(fileName);
			 //Wczytawanie danych z pliku
			 String^ X;
			 String^ Y;
			 int i = 0;
			 //Zak³adam ¿e ka¿da dana kolejna zmienna jest umieszczana w kolejnej linijce
			 while (!sw->EndOfStream)
			 {
				 if (i = 0)
				 X = (sw->ReadLine());
				 else
				 if (i = 1)
				 Y = (sw->ReadLine());
				 i++;
			 }
			 LTcash->Text = Y->ToString();
			 //code = X;
			 //cash = Y;
			 refresh();
			 //Zamykamy plik
			 sw->Close();
			 */
}
private: System::Void Bsave_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 //zapis gry
			 String^ fileName = "data.txt";
			 StreamWriter^ sw = gcnew StreamWriter(fileName);
			 sw->WriteLine(code);
			 sw->WriteLine(cash);
			 sw->WriteLine(codefactor);
			 sw->WriteLine(cashfactor);
			 if (employee1) sw->WriteLine(1); else sw->WriteLine(0);
			 sw->Close();
}

private: System::Void Bhire_Click(System::Object^  sender, System::EventArgs^  e) {
			 //otwarcie nowej formatki
			 hire^ hiredialog = gcnew hire;
			 hiredialog->ShowDialog();
}
};
}