#pragma once

#include "hire.h"//po³¹czenie z hire.h
#include "upgradefirm.h"//po³¹czenie z upgradefirm.h
#include <cmath>
#include "Employee.h"

namespace CodeClicker {

	ref class Employee;
	ref class EmployeePremium;
	ref class EmployeeCycle;
	ref class EmployeePoor;
	ref class hire;

	//TODO blokada klawiszy, teraz np. enter otwiera okno
	//TODO klawisz esc - zamykanie okna

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::IO;//biblioteka zwi¹zana z zapisywaniem do plików
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		static const int employeesCount = 4;
		static System::ComponentModel::ComponentResourceManager^  resources;

		array<Employee^>^ employees; //TODO ³adniejszy sposób? [KSZ]

		hire^ hiredialog;

		int code;//iloœæ kodu
		int	cash;//iloœæ pieniêdzy
		int test;//iloœæ przetestowanych linii
		int	codefactor;//wspó³czynnik: ile kodu za jedno klikniêcie
		int	cashfactor;//wspó³czynnik: ile kasy za liniê kodu
		int testfactor;//wspó³czynnik: ile linii kodu za jedno klikniêcie testu

		int testprogress;//pasek postêpu testowania
		bool testing;//czy w trakcie testów?
		int cycle;//progras cyklu


	public:
		MyForm(void);//konstruktor

		void refreshEmployeesPictures();
		void refreshEmployeesHireButton();

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
			 //TODO do tablicy
	private: System::Windows::Forms::PictureBox^  Pzl;
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
	private: System::Windows::Forms::PictureBox^  Bhire;
	private: System::Windows::Forms::Timer^  Temployees;
	private: System::Windows::Forms::PictureBox^  Bsave;
			 //TODO do Employee
	public: array<System::Windows::Forms::PictureBox^>^  Phireds;
	private: System::Windows::Forms::Label^  Lpremium;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  Plogo;
	private: System::Windows::Forms::Button^  Bupgrade;
	private: System::Windows::Forms::PictureBox^  Btest;
	private: System::Windows::Forms::Label^  Labsent;
	private: System::Windows::Forms::Label^  Ltrans;
	private: System::Windows::Forms::Label^  Ltested;
	private: System::Windows::Forms::PictureBox^  Itest9;
	private: System::Windows::Forms::PictureBox^  Itest8;
	private: System::Windows::Forms::PictureBox^  Itest7;
	private: System::Windows::Forms::PictureBox^  Itest6;
	private: System::Windows::Forms::PictureBox^  Itest5;
	private: System::Windows::Forms::PictureBox^  Itest4;
	private: System::Windows::Forms::PictureBox^  Itest3;
	private: System::Windows::Forms::PictureBox^  Itest2;
	private: System::Windows::Forms::PictureBox^  Itest1;
	private: System::Windows::Forms::PictureBox^  Itest0;
	private: System::Windows::Forms::PictureBox^  Iprogress0;
	private: System::Windows::Forms::PictureBox^  Iprogress1;
	private: System::Windows::Forms::PictureBox^  Iprogress2;
	private: System::Windows::Forms::PictureBox^  Iprogress3;
	private: System::Windows::Forms::Label^  Ltest;
	private: System::Windows::Forms::Label^  Lcycle;
	private: System::Windows::Forms::PictureBox^  Icycle9;
	private: System::Windows::Forms::PictureBox^  Icycle8;
	private: System::Windows::Forms::PictureBox^  Icycle7;
	private: System::Windows::Forms::PictureBox^  Icycle6;
	private: System::Windows::Forms::PictureBox^  Icycle5;
	private: System::Windows::Forms::PictureBox^  Icycle4;
	private: System::Windows::Forms::PictureBox^  Icycle3;
	private: System::Windows::Forms::PictureBox^  Icycle2;
	private: System::Windows::Forms::PictureBox^  Icycle1;
	private: System::Windows::Forms::PictureBox^  Icycle0;
	private: System::Windows::Forms::Label^  Ldeterminated;
	private: System::Windows::Forms::Label^  Llazy;
	private: System::Windows::Forms::Label^  Lpoor;
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
				 this->Bcode = (gcnew System::Windows::Forms::PictureBox());
				 this->Lcode = (gcnew System::Windows::Forms::PictureBox());
				 this->Lcash = (gcnew System::Windows::Forms::PictureBox());
				 this->Bhire = (gcnew System::Windows::Forms::PictureBox());
				 this->Temployees = (gcnew System::Windows::Forms::Timer(this->components));
				 this->Bsave = (gcnew System::Windows::Forms::PictureBox());
				 this->Lpremium = (gcnew System::Windows::Forms::Label());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->Plogo = (gcnew System::Windows::Forms::Panel());
				 this->Bupgrade = (gcnew System::Windows::Forms::Button());
				 this->Btest = (gcnew System::Windows::Forms::PictureBox());
				 this->Labsent = (gcnew System::Windows::Forms::Label());
				 this->Ltrans = (gcnew System::Windows::Forms::Label());
				 this->Ltested = (gcnew System::Windows::Forms::Label());
				 this->Itest9 = (gcnew System::Windows::Forms::PictureBox());
				 this->Itest8 = (gcnew System::Windows::Forms::PictureBox());
				 this->Itest7 = (gcnew System::Windows::Forms::PictureBox());
				 this->Itest6 = (gcnew System::Windows::Forms::PictureBox());
				 this->Itest5 = (gcnew System::Windows::Forms::PictureBox());
				 this->Itest4 = (gcnew System::Windows::Forms::PictureBox());
				 this->Itest3 = (gcnew System::Windows::Forms::PictureBox());
				 this->Itest2 = (gcnew System::Windows::Forms::PictureBox());
				 this->Itest1 = (gcnew System::Windows::Forms::PictureBox());
				 this->Itest0 = (gcnew System::Windows::Forms::PictureBox());
				 this->Iprogress0 = (gcnew System::Windows::Forms::PictureBox());
				 this->Iprogress1 = (gcnew System::Windows::Forms::PictureBox());
				 this->Iprogress2 = (gcnew System::Windows::Forms::PictureBox());
				 this->Iprogress3 = (gcnew System::Windows::Forms::PictureBox());
				 this->Ltest = (gcnew System::Windows::Forms::Label());
				 this->Lcycle = (gcnew System::Windows::Forms::Label());
				 this->Icycle9 = (gcnew System::Windows::Forms::PictureBox());
				 this->Icycle8 = (gcnew System::Windows::Forms::PictureBox());
				 this->Icycle7 = (gcnew System::Windows::Forms::PictureBox());
				 this->Icycle6 = (gcnew System::Windows::Forms::PictureBox());
				 this->Icycle5 = (gcnew System::Windows::Forms::PictureBox());
				 this->Icycle4 = (gcnew System::Windows::Forms::PictureBox());
				 this->Icycle3 = (gcnew System::Windows::Forms::PictureBox());
				 this->Icycle2 = (gcnew System::Windows::Forms::PictureBox());
				 this->Icycle1 = (gcnew System::Windows::Forms::PictureBox());
				 this->Icycle0 = (gcnew System::Windows::Forms::PictureBox());
				 this->Ldeterminated = (gcnew System::Windows::Forms::Label());
				 this->Llazy = (gcnew System::Windows::Forms::Label());
				 this->Lpoor = (gcnew System::Windows::Forms::Label());
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
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bsave))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->Plogo->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Btest))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest9))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest8))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest7))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest6))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest0))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iprogress0))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iprogress1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iprogress2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iprogress3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle9))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle8))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle7))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle6))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle0))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // Icode9
				 // 
				 this->Icode9->BackColor = System::Drawing::Color::Transparent;
				 this->Icode9->Location = System::Drawing::Point(411, 49);
				 this->Icode9->Name = L"Icode9";
				 this->Icode9->Size = System::Drawing::Size(28, 30);
				 this->Icode9->TabIndex = 43;
				 this->Icode9->TabStop = false;
				 // 
				 // Icode8
				 // 
				 this->Icode8->BackColor = System::Drawing::Color::Transparent;
				 this->Icode8->Location = System::Drawing::Point(445, 49);
				 this->Icode8->Name = L"Icode8";
				 this->Icode8->Size = System::Drawing::Size(28, 30);
				 this->Icode8->TabIndex = 42;
				 this->Icode8->TabStop = false;
				 // 
				 // Icode7
				 // 
				 this->Icode7->BackColor = System::Drawing::Color::Transparent;
				 this->Icode7->Location = System::Drawing::Point(479, 49);
				 this->Icode7->Name = L"Icode7";
				 this->Icode7->Size = System::Drawing::Size(28, 30);
				 this->Icode7->TabIndex = 41;
				 this->Icode7->TabStop = false;
				 // 
				 // Icode6
				 // 
				 this->Icode6->BackColor = System::Drawing::Color::Transparent;
				 this->Icode6->Location = System::Drawing::Point(513, 49);
				 this->Icode6->Name = L"Icode6";
				 this->Icode6->Size = System::Drawing::Size(28, 30);
				 this->Icode6->TabIndex = 40;
				 this->Icode6->TabStop = false;
				 // 
				 // Icode5
				 // 
				 this->Icode5->BackColor = System::Drawing::Color::Transparent;
				 this->Icode5->Location = System::Drawing::Point(547, 49);
				 this->Icode5->Name = L"Icode5";
				 this->Icode5->Size = System::Drawing::Size(28, 30);
				 this->Icode5->TabIndex = 39;
				 this->Icode5->TabStop = false;
				 // 
				 // Icode4
				 // 
				 this->Icode4->BackColor = System::Drawing::Color::Transparent;
				 this->Icode4->Location = System::Drawing::Point(581, 49);
				 this->Icode4->Name = L"Icode4";
				 this->Icode4->Size = System::Drawing::Size(28, 30);
				 this->Icode4->TabIndex = 38;
				 this->Icode4->TabStop = false;
				 // 
				 // Icode3
				 // 
				 this->Icode3->BackColor = System::Drawing::Color::Transparent;
				 this->Icode3->Location = System::Drawing::Point(615, 49);
				 this->Icode3->Name = L"Icode3";
				 this->Icode3->Size = System::Drawing::Size(28, 30);
				 this->Icode3->TabIndex = 37;
				 this->Icode3->TabStop = false;
				 // 
				 // Icode2
				 // 
				 this->Icode2->BackColor = System::Drawing::Color::Transparent;
				 this->Icode2->Location = System::Drawing::Point(649, 49);
				 this->Icode2->Name = L"Icode2";
				 this->Icode2->Size = System::Drawing::Size(28, 30);
				 this->Icode2->TabIndex = 36;
				 this->Icode2->TabStop = false;
				 // 
				 // Icash9
				 // 
				 this->Icash9->BackColor = System::Drawing::Color::Transparent;
				 this->Icash9->Location = System::Drawing::Point(218, 117);
				 this->Icash9->Name = L"Icash9";
				 this->Icash9->Size = System::Drawing::Size(28, 30);
				 this->Icash9->TabIndex = 35;
				 this->Icash9->TabStop = false;
				 // 
				 // Icash8
				 // 
				 this->Icash8->BackColor = System::Drawing::Color::Transparent;
				 this->Icash8->Location = System::Drawing::Point(252, 117);
				 this->Icash8->Name = L"Icash8";
				 this->Icash8->Size = System::Drawing::Size(28, 30);
				 this->Icash8->TabIndex = 34;
				 this->Icash8->TabStop = false;
				 // 
				 // Icash7
				 // 
				 this->Icash7->BackColor = System::Drawing::Color::Transparent;
				 this->Icash7->Location = System::Drawing::Point(286, 117);
				 this->Icash7->Name = L"Icash7";
				 this->Icash7->Size = System::Drawing::Size(28, 30);
				 this->Icash7->TabIndex = 33;
				 this->Icash7->TabStop = false;
				 // 
				 // Icash6
				 // 
				 this->Icash6->BackColor = System::Drawing::Color::Transparent;
				 this->Icash6->Location = System::Drawing::Point(320, 117);
				 this->Icash6->Name = L"Icash6";
				 this->Icash6->Size = System::Drawing::Size(28, 30);
				 this->Icash6->TabIndex = 32;
				 this->Icash6->TabStop = false;
				 // 
				 // Icash5
				 // 
				 this->Icash5->BackColor = System::Drawing::Color::Transparent;
				 this->Icash5->Location = System::Drawing::Point(354, 117);
				 this->Icash5->Name = L"Icash5";
				 this->Icash5->Size = System::Drawing::Size(28, 30);
				 this->Icash5->TabIndex = 31;
				 this->Icash5->TabStop = false;
				 // 
				 // Icash4
				 // 
				 this->Icash4->BackColor = System::Drawing::Color::Transparent;
				 this->Icash4->Location = System::Drawing::Point(388, 117);
				 this->Icash4->Name = L"Icash4";
				 this->Icash4->Size = System::Drawing::Size(28, 30);
				 this->Icash4->TabIndex = 30;
				 this->Icash4->TabStop = false;
				 // 
				 // Icash3
				 // 
				 this->Icash3->BackColor = System::Drawing::Color::Transparent;
				 this->Icash3->Location = System::Drawing::Point(422, 117);
				 this->Icash3->Name = L"Icash3";
				 this->Icash3->Size = System::Drawing::Size(28, 30);
				 this->Icash3->TabIndex = 29;
				 this->Icash3->TabStop = false;
				 // 
				 // Icash2
				 // 
				 this->Icash2->BackColor = System::Drawing::Color::Transparent;
				 this->Icash2->Location = System::Drawing::Point(456, 117);
				 this->Icash2->Name = L"Icash2";
				 this->Icash2->Size = System::Drawing::Size(28, 30);
				 this->Icash2->TabIndex = 28;
				 this->Icash2->TabStop = false;
				 // 
				 // Icode0
				 // 
				 this->Icode0->BackColor = System::Drawing::Color::Transparent;
				 this->Icode0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode0.Image")));
				 this->Icode0->Location = System::Drawing::Point(716, 49);
				 this->Icode0->Name = L"Icode0";
				 this->Icode0->Size = System::Drawing::Size(30, 30);
				 this->Icode0->TabIndex = 27;
				 this->Icode0->TabStop = false;
				 // 
				 // Icode1
				 // 
				 this->Icode1->BackColor = System::Drawing::Color::Transparent;
				 this->Icode1->Location = System::Drawing::Point(683, 49);
				 this->Icode1->Name = L"Icode1";
				 this->Icode1->Size = System::Drawing::Size(28, 30);
				 this->Icode1->TabIndex = 25;
				 this->Icode1->TabStop = false;
				 // 
				 // Icash0
				 // 
				 this->Icash0->BackColor = System::Drawing::Color::Transparent;
				 this->Icash0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash0.Image")));
				 this->Icash0->Location = System::Drawing::Point(523, 117);
				 this->Icash0->Name = L"Icash0";
				 this->Icash0->Size = System::Drawing::Size(30, 30);
				 this->Icash0->TabIndex = 16;
				 this->Icash0->TabStop = false;
				 // 
				 // Icash1
				 // 
				 this->Icash1->BackColor = System::Drawing::Color::Transparent;
				 this->Icash1->Location = System::Drawing::Point(490, 117);
				 this->Icash1->Name = L"Icash1";
				 this->Icash1->Size = System::Drawing::Size(28, 30);
				 this->Icash1->TabIndex = 14;
				 this->Icash1->TabStop = false;
				 // 
				 // Pzl
				 // 
				 this->Pzl->BackColor = System::Drawing::Color::Transparent;
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
				 this->Iavatar->Location = System::Drawing::Point(12, 34);
				 this->Iavatar->Name = L"Iavatar";
				 this->Iavatar->Size = System::Drawing::Size(200, 135);
				 this->Iavatar->TabIndex = 3;
				 this->Iavatar->TabStop = false;
				 // 
				 // Bcode
				 // 
				 this->Bcode->BackColor = System::Drawing::Color::Transparent;
				 this->Bcode->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Bcode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bcode.Image")));
				 this->Bcode->Location = System::Drawing::Point(58, 175);
				 this->Bcode->Name = L"Bcode";
				 this->Bcode->Size = System::Drawing::Size(145, 125);
				 this->Bcode->TabIndex = 4;
				 this->Bcode->TabStop = false;
				 this->Bcode->Click += gcnew System::EventHandler(this, &MyForm::Bcode_Click);
				 // 
				 // Lcode
				 // 
				 this->Lcode->BackColor = System::Drawing::Color::Transparent;
				 this->Lcode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lcode.Image")));
				 this->Lcode->Location = System::Drawing::Point(218, 49);
				 this->Lcode->Name = L"Lcode";
				 this->Lcode->Size = System::Drawing::Size(131, 30);
				 this->Lcode->TabIndex = 44;
				 this->Lcode->TabStop = false;
				 // 
				 // Lcash
				 // 
				 this->Lcash->BackColor = System::Drawing::Color::Transparent;
				 this->Lcash->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lcash.Image")));
				 this->Lcash->Location = System::Drawing::Point(218, 85);
				 this->Lcash->Name = L"Lcash";
				 this->Lcash->Size = System::Drawing::Size(180, 26);
				 this->Lcash->TabIndex = 45;
				 this->Lcash->TabStop = false;
				 // 
				 // Bhire
				 // 
				 this->Bhire->BackColor = System::Drawing::Color::Transparent;
				 this->Bhire->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Bhire->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bhire.Image")));
				 this->Bhire->Location = System::Drawing::Point(58, 456);
				 this->Bhire->Name = L"Bhire";
				 this->Bhire->Size = System::Drawing::Size(143, 67);
				 this->Bhire->TabIndex = 51;
				 this->Bhire->TabStop = false;
				 this->Bhire->Click += gcnew System::EventHandler(this, &MyForm::Bhire_Click);
				 // 
				 // Temployees
				 // 
				 this->Temployees->Enabled = true;
				 this->Temployees->Interval = 400;
				 this->Temployees->Tick += gcnew System::EventHandler(this, &MyForm::Temployees_Tick);
				 // 
				 // Bsave
				 // 
				 this->Bsave->BackColor = System::Drawing::Color::Transparent;
				 this->Bsave->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Bsave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bsave.Image")));
				 this->Bsave->Location = System::Drawing::Point(676, 104);
				 this->Bsave->Name = L"Bsave";
				 this->Bsave->Size = System::Drawing::Size(70, 65);
				 this->Bsave->TabIndex = 52;
				 this->Bsave->TabStop = false;
				 this->Bsave->Click += gcnew System::EventHandler(this, &MyForm::Bsave_Click);
				 // 
				 // Lpremium
				 // 
				 this->Lpremium->AutoSize = true;
				 this->Lpremium->BackColor = System::Drawing::Color::Transparent;
				 this->Lpremium->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->Lpremium->ForeColor = System::Drawing::Color::Red;
				 this->Lpremium->Location = System::Drawing::Point(385, 288);
				 this->Lpremium->Name = L"Lpremium";
				 this->Lpremium->Size = System::Drawing::Size(66, 14);
				 this->Lpremium->TabIndex = 55;
				 this->Lpremium->Text = L"premia 10z³!";
				 this->Lpremium->Visible = false;
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
				 this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				 this->pictureBox1->Location = System::Drawing::Point(607, 104);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(70, 65);
				 this->pictureBox1->TabIndex = 57;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::Bload_Click);
				 // 
				 // Plogo
				 // 
				 this->Plogo->BackColor = System::Drawing::Color::Transparent;
				 this->Plogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Plogo.BackgroundImage")));
				 this->Plogo->Controls->Add(this->Itest1);
				 this->Plogo->Controls->Add(this->Itest0);
				 this->Plogo->Location = System::Drawing::Point(504, 333);
				 this->Plogo->Name = L"Plogo";
				 this->Plogo->Size = System::Drawing::Size(300, 300);
				 this->Plogo->TabIndex = 58;
				 // 
				 // Bupgrade
				 // 
				 this->Bupgrade->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Bupgrade->Location = System::Drawing::Point(239, 456);
				 this->Bupgrade->Name = L"Bupgrade";
				 this->Bupgrade->Size = System::Drawing::Size(268, 67);
				 this->Bupgrade->TabIndex = 61;
				 this->Bupgrade->Text = L"Zainwestuj w firmê";
				 this->Bupgrade->UseVisualStyleBackColor = true;
				 this->Bupgrade->Click += gcnew System::EventHandler(this, &MyForm::Bupgrade_Click);
				 // 
				 // Btest
				 // 
				 this->Btest->BackColor = System::Drawing::Color::Transparent;
				 this->Btest->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Btest->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btest.Image")));
				 this->Btest->Location = System::Drawing::Point(60, 348);
				 this->Btest->Name = L"Btest";
				 this->Btest->Size = System::Drawing::Size(160, 74);
				 this->Btest->TabIndex = 62;
				 this->Btest->TabStop = false;
				 this->Btest->Click += gcnew System::EventHandler(this, &MyForm::Btest_Click);
				 // 
				 // Labsent
				 // 
				 this->Labsent->AutoSize = true;
				 this->Labsent->BackColor = System::Drawing::Color::Transparent;
				 this->Labsent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->Labsent->ForeColor = System::Drawing::Color::Red;
				 this->Labsent->Location = System::Drawing::Point(517, 288);
				 this->Labsent->Name = L"Labsent";
				 this->Labsent->Size = System::Drawing::Size(58, 14);
				 this->Labsent->TabIndex = 63;
				 this->Labsent->Text = L"nieobecny!";
				 this->Labsent->Visible = false;
				 // 
				 // Ltrans
				 // 
				 this->Ltrans->AutoSize = true;
				 this->Ltrans->BackColor = System::Drawing::Color::Transparent;
				 this->Ltrans->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->Ltrans->ForeColor = System::Drawing::Color::Lime;
				 this->Ltrans->Location = System::Drawing::Point(516, 184);
				 this->Ltrans->Name = L"Ltrans";
				 this->Ltrans->Size = System::Drawing::Size(59, 14);
				 this->Ltrans->TabIndex = 64;
				 this->Ltrans->Text = L"wola walki!";
				 this->Ltrans->Visible = false;
				 // 
				 // Ltested
				 // 
				 this->Ltested->AutoSize = true;
				 this->Ltested->BackColor = System::Drawing::Color::Transparent;
				 this->Ltested->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->Ltested->Location = System::Drawing::Point(254, 348);
				 this->Ltested->Name = L"Ltested";
				 this->Ltested->Size = System::Drawing::Size(198, 21);
				 this->Ltested->TabIndex = 65;
				 this->Ltested->Text = L"Przetestowane linie kodu:";
				 // 
				 // Itest9
				 // 
				 this->Itest9->BackColor = System::Drawing::Color::Transparent;
				 this->Itest9->Location = System::Drawing::Point(258, 383);
				 this->Itest9->Name = L"Itest9";
				 this->Itest9->Size = System::Drawing::Size(28, 30);
				 this->Itest9->TabIndex = 75;
				 this->Itest9->TabStop = false;
				 // 
				 // Itest8
				 // 
				 this->Itest8->BackColor = System::Drawing::Color::Transparent;
				 this->Itest8->Location = System::Drawing::Point(292, 383);
				 this->Itest8->Name = L"Itest8";
				 this->Itest8->Size = System::Drawing::Size(28, 30);
				 this->Itest8->TabIndex = 74;
				 this->Itest8->TabStop = false;
				 // 
				 // Itest7
				 // 
				 this->Itest7->BackColor = System::Drawing::Color::Transparent;
				 this->Itest7->Location = System::Drawing::Point(326, 383);
				 this->Itest7->Name = L"Itest7";
				 this->Itest7->Size = System::Drawing::Size(28, 30);
				 this->Itest7->TabIndex = 73;
				 this->Itest7->TabStop = false;
				 // 
				 // Itest6
				 // 
				 this->Itest6->BackColor = System::Drawing::Color::Transparent;
				 this->Itest6->Location = System::Drawing::Point(360, 383);
				 this->Itest6->Name = L"Itest6";
				 this->Itest6->Size = System::Drawing::Size(28, 30);
				 this->Itest6->TabIndex = 72;
				 this->Itest6->TabStop = false;
				 // 
				 // Itest5
				 // 
				 this->Itest5->BackColor = System::Drawing::Color::Transparent;
				 this->Itest5->Location = System::Drawing::Point(394, 383);
				 this->Itest5->Name = L"Itest5";
				 this->Itest5->Size = System::Drawing::Size(28, 30);
				 this->Itest5->TabIndex = 71;
				 this->Itest5->TabStop = false;
				 // 
				 // Itest4
				 // 
				 this->Itest4->BackColor = System::Drawing::Color::Transparent;
				 this->Itest4->Location = System::Drawing::Point(428, 383);
				 this->Itest4->Name = L"Itest4";
				 this->Itest4->Size = System::Drawing::Size(28, 30);
				 this->Itest4->TabIndex = 70;
				 this->Itest4->TabStop = false;
				 // 
				 // Itest3
				 // 
				 this->Itest3->BackColor = System::Drawing::Color::Transparent;
				 this->Itest3->Location = System::Drawing::Point(462, 383);
				 this->Itest3->Name = L"Itest3";
				 this->Itest3->Size = System::Drawing::Size(28, 30);
				 this->Itest3->TabIndex = 69;
				 this->Itest3->TabStop = false;
				 // 
				 // Itest2
				 // 
				 this->Itest2->BackColor = System::Drawing::Color::Transparent;
				 this->Itest2->Location = System::Drawing::Point(496, 383);
				 this->Itest2->Name = L"Itest2";
				 this->Itest2->Size = System::Drawing::Size(28, 30);
				 this->Itest2->TabIndex = 68;
				 this->Itest2->TabStop = false;
				 // 
				 // Itest1
				 // 
				 this->Itest1->BackColor = System::Drawing::Color::Transparent;
				 this->Itest1->Location = System::Drawing::Point(26, 50);
				 this->Itest1->Name = L"Itest1";
				 this->Itest1->Size = System::Drawing::Size(28, 30);
				 this->Itest1->TabIndex = 66;
				 this->Itest1->TabStop = false;
				 // 
				 // Itest0
				 // 
				 this->Itest0->BackColor = System::Drawing::Color::Transparent;
				 this->Itest0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Itest0.Image")));
				 this->Itest0->Location = System::Drawing::Point(59, 50);
				 this->Itest0->Name = L"Itest0";
				 this->Itest0->Size = System::Drawing::Size(30, 30);
				 this->Itest0->TabIndex = 67;
				 this->Itest0->TabStop = false;
				 // 
				 // Iprogress0
				 // 
				 this->Iprogress0->Location = System::Drawing::Point(62, 428);
				 this->Iprogress0->Name = L"Iprogress0";
				 this->Iprogress0->Size = System::Drawing::Size(35, 10);
				 this->Iprogress0->TabIndex = 76;
				 this->Iprogress0->TabStop = false;
				 this->Iprogress0->Visible = false;
				 // 
				 // Iprogress1
				 // 
				 this->Iprogress1->Location = System::Drawing::Point(103, 428);
				 this->Iprogress1->Name = L"Iprogress1";
				 this->Iprogress1->Size = System::Drawing::Size(35, 10);
				 this->Iprogress1->TabIndex = 77;
				 this->Iprogress1->TabStop = false;
				 this->Iprogress1->Visible = false;
				 // 
				 // Iprogress2
				 // 
				 this->Iprogress2->Location = System::Drawing::Point(144, 428);
				 this->Iprogress2->Name = L"Iprogress2";
				 this->Iprogress2->Size = System::Drawing::Size(35, 10);
				 this->Iprogress2->TabIndex = 78;
				 this->Iprogress2->TabStop = false;
				 this->Iprogress2->Visible = false;
				 // 
				 // Iprogress3
				 // 
				 this->Iprogress3->Location = System::Drawing::Point(185, 428);
				 this->Iprogress3->Name = L"Iprogress3";
				 this->Iprogress3->Size = System::Drawing::Size(35, 10);
				 this->Iprogress3->TabIndex = 79;
				 this->Iprogress3->TabStop = false;
				 this->Iprogress3->Visible = false;
				 // 
				 // Ltest
				 // 
				 this->Ltest->AutoSize = true;
				 this->Ltest->BackColor = System::Drawing::Color::Transparent;
				 this->Ltest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->Ltest->ForeColor = System::Drawing::Color::Red;
				 this->Ltest->Location = System::Drawing::Point(77, 331);
				 this->Ltest->Name = L"Ltest";
				 this->Ltest->Size = System::Drawing::Size(128, 14);
				 this->Ltest->TabIndex = 80;
				 this->Ltest->Text = L"potrzeba wiêcej linii kodu!";
				 this->Ltest->Visible = false;
				 // 
				 // Lcycle
				 // 
				 this->Lcycle->AutoSize = true;
				 this->Lcycle->BackColor = System::Drawing::Color::Transparent;
				 this->Lcycle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->Lcycle->ForeColor = System::Drawing::Color::Orange;
				 this->Lcycle->Location = System::Drawing::Point(314, 423);
				 this->Lcycle->Name = L"Lcycle";
				 this->Lcycle->Size = System::Drawing::Size(139, 15);
				 this->Lcycle->TabIndex = 81;
				 this->Lcycle->Text = L"ZAKOÑCZONO CYKL!";
				 this->Lcycle->Visible = false;
				 // 
				 // Icycle9
				 // 
				 this->Icycle9->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle9->Location = System::Drawing::Point(60, 540);
				 this->Icycle9->Name = L"Icycle9";
				 this->Icycle9->Size = System::Drawing::Size(20, 20);
				 this->Icycle9->TabIndex = 91;
				 this->Icycle9->TabStop = false;
				 // 
				 // Icycle8
				 // 
				 this->Icycle8->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle8->Location = System::Drawing::Point(101, 540);
				 this->Icycle8->Name = L"Icycle8";
				 this->Icycle8->Size = System::Drawing::Size(20, 20);
				 this->Icycle8->TabIndex = 90;
				 this->Icycle8->TabStop = false;
				 // 
				 // Icycle7
				 // 
				 this->Icycle7->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle7->Location = System::Drawing::Point(142, 540);
				 this->Icycle7->Name = L"Icycle7";
				 this->Icycle7->Size = System::Drawing::Size(20, 20);
				 this->Icycle7->TabIndex = 89;
				 this->Icycle7->TabStop = false;
				 // 
				 // Icycle6
				 // 
				 this->Icycle6->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle6->Location = System::Drawing::Point(183, 540);
				 this->Icycle6->Name = L"Icycle6";
				 this->Icycle6->Size = System::Drawing::Size(20, 20);
				 this->Icycle6->TabIndex = 88;
				 this->Icycle6->TabStop = false;
				 // 
				 // Icycle5
				 // 
				 this->Icycle5->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle5->Location = System::Drawing::Point(226, 540);
				 this->Icycle5->Name = L"Icycle5";
				 this->Icycle5->Size = System::Drawing::Size(20, 20);
				 this->Icycle5->TabIndex = 87;
				 this->Icycle5->TabStop = false;
				 // 
				 // Icycle4
				 // 
				 this->Icycle4->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle4->Location = System::Drawing::Point(266, 540);
				 this->Icycle4->Name = L"Icycle4";
				 this->Icycle4->Size = System::Drawing::Size(20, 20);
				 this->Icycle4->TabIndex = 96;
				 this->Icycle4->TabStop = false;
				 // 
				 // Icycle3
				 // 
				 this->Icycle3->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle3->Location = System::Drawing::Point(307, 540);
				 this->Icycle3->Name = L"Icycle3";
				 this->Icycle3->Size = System::Drawing::Size(20, 20);
				 this->Icycle3->TabIndex = 95;
				 this->Icycle3->TabStop = false;
				 // 
				 // Icycle2
				 // 
				 this->Icycle2->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle2->Location = System::Drawing::Point(348, 540);
				 this->Icycle2->Name = L"Icycle2";
				 this->Icycle2->Size = System::Drawing::Size(20, 20);
				 this->Icycle2->TabIndex = 94;
				 this->Icycle2->TabStop = false;
				 // 
				 // Icycle1
				 // 
				 this->Icycle1->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle1->Location = System::Drawing::Point(389, 540);
				 this->Icycle1->Name = L"Icycle1";
				 this->Icycle1->Size = System::Drawing::Size(20, 20);
				 this->Icycle1->TabIndex = 93;
				 this->Icycle1->TabStop = false;
				 // 
				 // Icycle0
				 // 
				 this->Icycle0->BackColor = System::Drawing::Color::Transparent;
				 this->Icycle0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Icycle0->Location = System::Drawing::Point(432, 540);
				 this->Icycle0->Name = L"Icycle0";
				 this->Icycle0->Size = System::Drawing::Size(20, 20);
				 this->Icycle0->TabIndex = 92;
				 this->Icycle0->TabStop = false;
				 // 
				 // Ldeterminated
				 // 
				 this->Ldeterminated->AutoSize = true;
				 this->Ldeterminated->BackColor = System::Drawing::Color::Transparent;
				 this->Ldeterminated->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->Ldeterminated->ForeColor = System::Drawing::Color::Purple;
				 this->Ldeterminated->Location = System::Drawing::Point(626, 184);
				 this->Ldeterminated->Name = L"Ldeterminated";
				 this->Ldeterminated->Size = System::Drawing::Size(87, 14);
				 this->Ldeterminated->TabIndex = 98;
				 this->Ldeterminated->Text = L"zdeterminowany!";
				 this->Ldeterminated->Visible = false;
				 // 
				 // Llazy
				 // 
				 this->Llazy->AutoSize = true;
				 this->Llazy->BackColor = System::Drawing::Color::Transparent;
				 this->Llazy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->Llazy->ForeColor = System::Drawing::Color::Yellow;
				 this->Llazy->Location = System::Drawing::Point(646, 288);
				 this->Llazy->Name = L"Llazy";
				 this->Llazy->Size = System::Drawing::Size(48, 14);
				 this->Llazy->TabIndex = 97;
				 this->Llazy->Text = L"obija siê!";
				 this->Llazy->Visible = false;
				 // 
				 // Lpoor
				 // 
				 this->Lpoor->AutoSize = true;
				 this->Lpoor->BackColor = System::Drawing::Color::Transparent;
				 this->Lpoor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->Lpoor->ForeColor = System::Drawing::Color::Silver;
				 this->Lpoor->Location = System::Drawing::Point(591, 288);
				 this->Lpoor->Name = L"Lpoor";
				 this->Lpoor->Size = System::Drawing::Size(155, 14);
				 this->Lpoor->TabIndex = 99;
				 this->Lpoor->Text = L"nie dosta³ wyp³aty - nie pracuje!";
				 this->Lpoor->Visible = false;
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
				 this->Controls->Add(this->Lpoor);
				 this->Controls->Add(this->Ldeterminated);
				 this->Controls->Add(this->Llazy);
				 //TODO do tablicy
				 this->Controls->Add(this->Icycle4);
				 this->Controls->Add(this->Icycle3);
				 this->Controls->Add(this->Icycle2);
				 this->Controls->Add(this->Icycle1);
				 this->Controls->Add(this->Icycle0);
				 this->Controls->Add(this->Icycle9);
				 this->Controls->Add(this->Icycle8);
				 this->Controls->Add(this->Icycle7);
				 this->Controls->Add(this->Icycle6);
				 this->Controls->Add(this->Icycle5);
				 this->Controls->Add(this->Lcycle);
				 this->Controls->Add(this->Ltest);
				 //TODO do tablicy
				 this->Controls->Add(this->Iprogress3);
				 this->Controls->Add(this->Iprogress2);
				 this->Controls->Add(this->Iprogress1);
				 this->Controls->Add(this->Iprogress0);
				 //TODO do tablicy
				 this->Controls->Add(this->Itest9);
				 this->Controls->Add(this->Itest8);
				 this->Controls->Add(this->Itest7);
				 this->Controls->Add(this->Itest6);
				 this->Controls->Add(this->Itest5);
				 this->Controls->Add(this->Itest4);
				 this->Controls->Add(this->Itest3);
				 this->Controls->Add(this->Itest2);
				 this->Controls->Add(this->Ltested);
				 this->Controls->Add(this->Ltrans);
				 this->Controls->Add(this->Labsent);
				 this->Controls->Add(this->Btest);
				 this->Controls->Add(this->Bupgrade);
				 this->Controls->Add(this->Plogo);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->Lpremium);
				 this->Controls->Add(this->Bsave);
				 this->Controls->Add(this->Bhire);
				 this->Controls->Add(this->Lcash);
				 this->Controls->Add(this->Lcode);
				 this->Controls->Add(this->Iavatar);
				 this->Controls->Add(this->Icode9);
				 this->Controls->Add(this->Bcode);
				 //TODO do tablicy
				 this->Controls->Add(this->Icode8);
				 this->Controls->Add(this->Icode7);
				 this->Controls->Add(this->Icode6);
				 this->Controls->Add(this->Icode5);
				 this->Controls->Add(this->Icode4);
				 this->Controls->Add(this->Icode3);
				 this->Controls->Add(this->Icode2);
				 this->Controls->Add(this->Pzl);
				 //TODO do tablicy
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
				 this->Cursor = System::Windows::Forms::Cursors::Default;
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
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bsave))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->Plogo->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Btest))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest9))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest8))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest7))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest6))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest0))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iprogress0))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iprogress1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iprogress2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iprogress3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle9))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle8))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle7))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle6))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icycle0))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

			 void InitializeManualComponent(void)
			 {
				 this->Phireds = gcnew array<System::Windows::Forms::PictureBox^>(employeesCount);

				 for (int i = 0; i < employeesCount; i++)
				 {
					 Phireds[i] = (gcnew System::Windows::Forms::PictureBox());


					 this->Controls->Add(Phireds[i]);
				 }
				 //TODO do pêtli
				 this->Phireds[0]->BackColor = System::Drawing::Color::Transparent;
				 this->Phireds[0]->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Phireds[0]->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Phired1.Image")));
				 this->Phireds[0]->Location = System::Drawing::Point(252, 201);
				 this->Phireds[0]->Name = L"Phired1";
				 this->Phireds[0]->Size = System::Drawing::Size(84, 84);
				 this->Phireds[0]->TabIndex = 53;
				 this->Phireds[0]->TabStop = false;
				 this->Phireds[0]->Visible = false;

				 this->Phireds[1]->BackColor = System::Drawing::Color::Transparent;
				 this->Phireds[1]->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Phireds[1]->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Phired2.Image")));
				 this->Phireds[1]->Location = System::Drawing::Point(377, 201);
				 this->Phireds[1]->Name = L"Phired2";
				 this->Phireds[1]->Size = System::Drawing::Size(84, 84);
				 this->Phireds[1]->TabIndex = 54;
				 this->Phireds[1]->TabStop = false;
				 this->Phireds[1]->Visible = false;

				 this->Phireds[3]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
				 this->Phireds[3]->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Phireds[3]->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Phired4.Image")));
				 this->Phireds[3]->Location = System::Drawing::Point(629, 201);
				 this->Phireds[3]->Name = L"Phired4";
				 this->Phireds[3]->Size = System::Drawing::Size(84, 84);
				 this->Phireds[3]->TabIndex = 60;
				 this->Phireds[3]->TabStop = false;
				 this->Phireds[3]->Visible = false;
				 // 
				 // Phired3
				 // 
				 this->Phireds[2]->BackColor = System::Drawing::Color::Transparent;
				 this->Phireds[2]->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Phireds[2]->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Phired3.Image")));
				 this->Phireds[2]->Location = System::Drawing::Point(504, 201);
				 this->Phireds[2]->Name = L"Phired3";
				 this->Phireds[2]->Size = System::Drawing::Size(84, 84);
				 this->Phireds[2]->TabIndex = 59;
				 this->Phireds[2]->TabStop = false;
				 this->Phireds[2]->Visible = false;
			 }

	private: System::Void Bcode_Click(System::Object^  sender, System::EventArgs^  e);

			 void refresh();

	private: System::Void Bload_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void Bsave_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void Bhire_Click(System::Object^  sender, System::EventArgs^  e);

			 void refreshtested();

	private: System::Void Temployees_Tick(System::Object^  sender, System::EventArgs^  e);

	private: System::Void Btest_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void Bupgrade_Click(System::Object^  sender, System::EventArgs^  e);

	};
}