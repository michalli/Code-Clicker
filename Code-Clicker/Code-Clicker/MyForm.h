#pragma once
#include "hire.h"//po³¹czenie z hire.h
#include "upgradefirm.h"//po³¹czenie z upgradefirm.h
#include "upgradeavatar.h"//po³¹czenie z upgradeavatar.h
#include <cmath>//biblioteka matematyczna
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
			test = 0;
			codefactor = 1;
			cashfactor = 2;
			testfactor = cashfactor*cashfactor;
			testing = false;
			testprogress = 0;
			cycle = 0;
			employee1 = false;
			employee1factor = 1;
			employee1progress = 0;
			employee1speed = 7;
			employee2 = false;
			employee2factor = 2;
			employee2progress = 0;
			employee2speed = 10;
			employee2premium = 0;
			employee3 = false;
			employee3factor = 4;
			employee3progress = 0;
			employee3speed = 15;
			employee3cycle = 0;
			employee4 = false;
			employee4factor = 5;
			employee4progress = 0;
			employee4speed = 25;
			poor = false;
			perk1_1 = false;
			perk1_2 = false;
			perk1_3 = false;
			perk1_4 = false;
			perk2_1 = false;
			perk2_2 = false;
			perk2_3 = false;
			perk2_4 = false;
			perk2_5 = false;
			perk3_1 = false;
			perk3_2 = false;
			perk3_3 = false;
			perk4_1 = false;
			perk4_2 = false;
			perk4_3 = false;
			perk5_1 = false;
			perk5_2 = false;
			perk5_3 = false;
			perk6_1 = false;
			perk6_2 = false;
			perk6_3 = false;
			millionaire = false;
		}

		void reset(){
			codefactor = 1;
			cashfactor = 2;
			employee1 = false;
			employee1factor = 1;
			employee1progress = 0;
			employee1speed = 7;
			employee2 = false;
			employee2factor = 2;
			employee2progress = 0;
			employee2speed = 10;
			employee2premium = 0;
			employee3 = false;
			employee3factor = 4;
			employee3progress = 0;
			employee3speed = 15;
			employee3cycle = 0;
			employee4 = false;
			employee4factor = 5;
			employee4progress = 0;
			employee4speed = 25;
			perk1_1 = false;
			perk1_2 = false;
			perk1_3 = false;
			perk1_4 = false;
			perk2_1 = false;
			perk2_2 = false;
			perk2_3 = false;
			perk2_4 = false;
			perk2_5 = false;
			perk3_1 = false;
			perk3_2 = false;
			perk3_3 = false;
			perk4_1 = false;
			perk4_2 = false;
			perk4_3 = false;
			perk5_1 = false;
			perk5_2 = false;
			perk5_3 = false;
			perk6_1 = false;
			perk6_2 = false;
			perk6_3 = false;
			millionaire = false;
		}

		void passdata(int paid, bool e1, bool e2, bool e3, bool e4, bool e5, bool e6, bool e7, bool e8, bool e9, bool e10, bool e11, bool e12, bool e13, bool e14, bool e15, bool e16){
			//przekazywanie z formatki hire.h
			cash -= paid;
			refresh();
			if (!employee1 && e1){ employee1 = true; Phired1->Visible = true; }
			if (!employee2 && e2){ employee2 = true; Phired2->Visible = true; }
			if (!employee3 && e3){ employee3 = true; Phired3->Visible = true; }
			if (!employee4 && e4){ employee4 = true; Phired4->Visible = true; }
			if (!perk3_1 && e5){ perk3_1 = true; employee1speed -= 1; }
			if (!perk3_2 && e6){ perk3_2 = true; employee1factor += 2; }
			if (!perk3_3 && e7){ perk3_3 = true; employee1speed -= 3; }
			if (!perk4_1 && e8){ perk4_1 = true; employee2factor += 2; }
			if (!perk4_2 && e9){ perk4_2 = true; employee2factor += 4; }
			if (!perk4_3 && e10){ perk4_3 = true; employee2speed -= 2; }
			if (!perk5_1 && e11){ perk5_1 = true; employee3speed -= 3; }
			if (!perk5_2 && e12){ perk5_2 = true; employee3speed -= 7; }
			if (!perk5_3 && e13){ perk5_3 = true; employee3factor += 4; }
			if (!perk6_1 && e14){ perk6_1 = true; employee4speed -= 15; }
			if (!perk6_2 && e15){ perk6_2 = true; employee4factor += 4; }
			if (!perk6_3 && e16){ perk6_3 = true; employee4factor += 6; }
		}

		void passfirm(int paid, bool e1, bool e2, bool e3, bool e4){
			//przekazywanie z formatki upgradefirm.h
			cash -= paid;
			refresh();
			if (!perk1_1 && e1){ perk1_1 = true; cashfactor += 1; }
			if (!perk1_2 && e2){ perk1_2 = true; cashfactor += 3; }
			if (!perk1_3 && e3){ perk1_3 = true; cashfactor += 6; }
			if (!perk1_4 && e4){ perk1_4 = true; cashfactor += 10; }
		}

		void passavatar(int paid, bool e1, bool e2, bool e3, bool e4, bool e5){
			//przekazywanie z formatki upgradeavatar.h
			cash -= paid;
			refresh();
			if (!perk2_1 && e1){ perk2_1 = true; codefactor += 1; }
			if (!perk2_2 && e2){ perk2_2 = true; codefactor += 2; }
			if (!perk2_3 && e3){ perk2_3 = true; codefactor += 3; }
			if (!perk2_4 && e4){ perk2_4 = true; codefactor += 4; }
			if (!perk2_5 && e5){ perk2_5 = true; codefactor += 5; }
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

		int code;//iloœæ kodu
		int	cash;//iloœæ pieniêdzy
		int test;//iloœæ przetestowanych linii
		int	codefactor;//wspó³czynnik: ile kodu za jedno klikniêcie
		int	cashfactor;//wspó³czynnik: ile kasy za liniê kodu
		int testfactor;//wspó³czynnik: ile linii kodu za jedno klikniêcie testu

		int testprogress;//pasek postêpu testowania
		bool testing;//czy w trakcie testów?
		int cycle;//progras cyklu
				
		bool employee1;//czy pomocnik nr 1 jest wynajêty?
		int employee1factor;//wydajnosc pomocnika nr 1
		int employee1progress;//progres pomocnika nr 1
		int employee1speed;//szybkoœæ pomocnika nr 1

		bool employee2;//czy pomocnik nr 2 jest wynajêty?
		int employee2factor;//wydajnosc pomocnika nr 2
		int employee2progress;//progres pomocnika nr 2
		int employee2speed;//szybkoœæ pomocnika nr 2
		int employee2premium;//czêstotliwoœæ ¿¹dania premii przez pomocnika nr 2

		bool employee3;//czy pomocnik nr 3 jest wynajêty?
		int employee3factor;//wydajnosc pomocnika nr 3
		int employee3progress;//progres pomocnika nr 3
		int employee3speed;//szybkoœæ pomocnika nr 3
		int employee3cycle;//modyfikator zdarzeñ zwi¹zanych z pomocnikiem nr 3

		bool employee4;//czy pomocnik nr 4 jest wynajêty?
		int employee4factor;//wydajnosc pomocnika nr 4
		int employee4progress;//progres pomocnika nr 4
		int employee4speed;//szybkoœæ pomocnika nr 4
		bool poor;//czy staæ na wyp³atê dla pomocnika nr 4?

		bool perk1_1;
		bool perk1_2;
		bool perk1_3;
		bool perk1_4;

		bool perk2_1;
		bool perk2_2;
		bool perk2_3;
		bool perk2_4;
		bool perk2_5;

		bool perk3_1;
		bool perk3_2;
		bool perk3_3;

		bool perk4_1;
		bool perk4_2;
		bool perk4_3;

		bool perk5_1;
		bool perk5_2;
		bool perk5_3;

		bool perk6_1;
		bool perk6_2;
		bool perk6_3; 

		bool millionaire;//czy zosta³o siê ju¿ milionerem

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
	private: System::Windows::Forms::PictureBox^  Phired1;
	private: System::Windows::Forms::PictureBox^  Phired2;
	private: System::Windows::Forms::Label^  Lpremium;
	private: System::Windows::Forms::PictureBox^  Bload;
	private: System::Windows::Forms::Panel^  Plogo;
	private: System::Windows::Forms::PictureBox^  Phired4;
	private: System::Windows::Forms::PictureBox^  Phired3;
	private: System::Windows::Forms::PictureBox^  Btest;
	private: System::Windows::Forms::Label^  Labsent;
	private: System::Windows::Forms::Label^  Ltrans;
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
	private: System::Windows::Forms::PictureBox^  Ltested;
	private: System::Windows::Forms::PictureBox^  Btrain;
	private: System::Windows::Forms::PictureBox^  Bupgrade;
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
			this->Bcode = (gcnew System::Windows::Forms::PictureBox());
			this->Lcode = (gcnew System::Windows::Forms::PictureBox());
			this->Lcash = (gcnew System::Windows::Forms::PictureBox());
			this->Bhire = (gcnew System::Windows::Forms::PictureBox());
			this->Temployees = (gcnew System::Windows::Forms::Timer(this->components));
			this->Bsave = (gcnew System::Windows::Forms::PictureBox());
			this->Phired1 = (gcnew System::Windows::Forms::PictureBox());
			this->Phired2 = (gcnew System::Windows::Forms::PictureBox());
			this->Lpremium = (gcnew System::Windows::Forms::Label());
			this->Bload = (gcnew System::Windows::Forms::PictureBox());
			this->Plogo = (gcnew System::Windows::Forms::Panel());
			this->Itest1 = (gcnew System::Windows::Forms::PictureBox());
			this->Itest0 = (gcnew System::Windows::Forms::PictureBox());
			this->Phired4 = (gcnew System::Windows::Forms::PictureBox());
			this->Phired3 = (gcnew System::Windows::Forms::PictureBox());
			this->Btest = (gcnew System::Windows::Forms::PictureBox());
			this->Labsent = (gcnew System::Windows::Forms::Label());
			this->Ltrans = (gcnew System::Windows::Forms::Label());
			this->Itest9 = (gcnew System::Windows::Forms::PictureBox());
			this->Itest8 = (gcnew System::Windows::Forms::PictureBox());
			this->Itest7 = (gcnew System::Windows::Forms::PictureBox());
			this->Itest6 = (gcnew System::Windows::Forms::PictureBox());
			this->Itest5 = (gcnew System::Windows::Forms::PictureBox());
			this->Itest4 = (gcnew System::Windows::Forms::PictureBox());
			this->Itest3 = (gcnew System::Windows::Forms::PictureBox());
			this->Itest2 = (gcnew System::Windows::Forms::PictureBox());
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
			this->Ltested = (gcnew System::Windows::Forms::PictureBox());
			this->Btrain = (gcnew System::Windows::Forms::PictureBox());
			this->Bupgrade = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phired1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phired2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bload))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phired4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phired3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Btest))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest2))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ltested))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Btrain))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bupgrade))->BeginInit();
			this->SuspendLayout();
			// 
			// Icode9
			// 
			this->Icode9->BackColor = System::Drawing::Color::Transparent;
			this->Icode9->Location = System::Drawing::Point(500, 60);
			this->Icode9->Name = L"Icode9";
			this->Icode9->Size = System::Drawing::Size(28, 30);
			this->Icode9->TabIndex = 43;
			this->Icode9->TabStop = false;
			// 
			// Icode8
			// 
			this->Icode8->BackColor = System::Drawing::Color::Transparent;
			this->Icode8->Location = System::Drawing::Point(534, 60);
			this->Icode8->Name = L"Icode8";
			this->Icode8->Size = System::Drawing::Size(28, 30);
			this->Icode8->TabIndex = 42;
			this->Icode8->TabStop = false;
			// 
			// Icode7
			// 
			this->Icode7->BackColor = System::Drawing::Color::Transparent;
			this->Icode7->Location = System::Drawing::Point(568, 60);
			this->Icode7->Name = L"Icode7";
			this->Icode7->Size = System::Drawing::Size(28, 30);
			this->Icode7->TabIndex = 41;
			this->Icode7->TabStop = false;
			// 
			// Icode6
			// 
			this->Icode6->BackColor = System::Drawing::Color::Transparent;
			this->Icode6->Location = System::Drawing::Point(602, 60);
			this->Icode6->Name = L"Icode6";
			this->Icode6->Size = System::Drawing::Size(28, 30);
			this->Icode6->TabIndex = 40;
			this->Icode6->TabStop = false;
			// 
			// Icode5
			// 
			this->Icode5->BackColor = System::Drawing::Color::Transparent;
			this->Icode5->Location = System::Drawing::Point(636, 60);
			this->Icode5->Name = L"Icode5";
			this->Icode5->Size = System::Drawing::Size(28, 30);
			this->Icode5->TabIndex = 39;
			this->Icode5->TabStop = false;
			// 
			// Icode4
			// 
			this->Icode4->BackColor = System::Drawing::Color::Transparent;
			this->Icode4->Location = System::Drawing::Point(670, 60);
			this->Icode4->Name = L"Icode4";
			this->Icode4->Size = System::Drawing::Size(28, 30);
			this->Icode4->TabIndex = 38;
			this->Icode4->TabStop = false;
			// 
			// Icode3
			// 
			this->Icode3->BackColor = System::Drawing::Color::Transparent;
			this->Icode3->Location = System::Drawing::Point(704, 60);
			this->Icode3->Name = L"Icode3";
			this->Icode3->Size = System::Drawing::Size(28, 30);
			this->Icode3->TabIndex = 37;
			this->Icode3->TabStop = false;
			// 
			// Icode2
			// 
			this->Icode2->BackColor = System::Drawing::Color::Transparent;
			this->Icode2->Location = System::Drawing::Point(738, 60);
			this->Icode2->Name = L"Icode2";
			this->Icode2->Size = System::Drawing::Size(28, 30);
			this->Icode2->TabIndex = 36;
			this->Icode2->TabStop = false;
			// 
			// Icash9
			// 
			this->Icash9->BackColor = System::Drawing::Color::Transparent;
			this->Icash9->Location = System::Drawing::Point(500, 96);
			this->Icash9->Name = L"Icash9";
			this->Icash9->Size = System::Drawing::Size(28, 30);
			this->Icash9->TabIndex = 35;
			this->Icash9->TabStop = false;
			// 
			// Icash8
			// 
			this->Icash8->BackColor = System::Drawing::Color::Transparent;
			this->Icash8->Location = System::Drawing::Point(534, 96);
			this->Icash8->Name = L"Icash8";
			this->Icash8->Size = System::Drawing::Size(28, 30);
			this->Icash8->TabIndex = 34;
			this->Icash8->TabStop = false;
			// 
			// Icash7
			// 
			this->Icash7->BackColor = System::Drawing::Color::Transparent;
			this->Icash7->Location = System::Drawing::Point(568, 96);
			this->Icash7->Name = L"Icash7";
			this->Icash7->Size = System::Drawing::Size(28, 30);
			this->Icash7->TabIndex = 33;
			this->Icash7->TabStop = false;
			// 
			// Icash6
			// 
			this->Icash6->BackColor = System::Drawing::Color::Transparent;
			this->Icash6->Location = System::Drawing::Point(602, 96);
			this->Icash6->Name = L"Icash6";
			this->Icash6->Size = System::Drawing::Size(28, 30);
			this->Icash6->TabIndex = 32;
			this->Icash6->TabStop = false;
			// 
			// Icash5
			// 
			this->Icash5->BackColor = System::Drawing::Color::Transparent;
			this->Icash5->Location = System::Drawing::Point(636, 96);
			this->Icash5->Name = L"Icash5";
			this->Icash5->Size = System::Drawing::Size(28, 30);
			this->Icash5->TabIndex = 31;
			this->Icash5->TabStop = false;
			// 
			// Icash4
			// 
			this->Icash4->BackColor = System::Drawing::Color::Transparent;
			this->Icash4->Location = System::Drawing::Point(670, 96);
			this->Icash4->Name = L"Icash4";
			this->Icash4->Size = System::Drawing::Size(28, 30);
			this->Icash4->TabIndex = 30;
			this->Icash4->TabStop = false;
			// 
			// Icash3
			// 
			this->Icash3->BackColor = System::Drawing::Color::Transparent;
			this->Icash3->Location = System::Drawing::Point(704, 96);
			this->Icash3->Name = L"Icash3";
			this->Icash3->Size = System::Drawing::Size(28, 30);
			this->Icash3->TabIndex = 29;
			this->Icash3->TabStop = false;
			// 
			// Icash2
			// 
			this->Icash2->BackColor = System::Drawing::Color::Transparent;
			this->Icash2->Location = System::Drawing::Point(738, 96);
			this->Icash2->Name = L"Icash2";
			this->Icash2->Size = System::Drawing::Size(28, 30);
			this->Icash2->TabIndex = 28;
			this->Icash2->TabStop = false;
			// 
			// Icode0
			// 
			this->Icode0->BackColor = System::Drawing::Color::Transparent;
			this->Icode0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icode0.Image")));
			this->Icode0->Location = System::Drawing::Point(805, 60);
			this->Icode0->Name = L"Icode0";
			this->Icode0->Size = System::Drawing::Size(30, 30);
			this->Icode0->TabIndex = 27;
			this->Icode0->TabStop = false;
			// 
			// Icode1
			// 
			this->Icode1->BackColor = System::Drawing::Color::Transparent;
			this->Icode1->Location = System::Drawing::Point(772, 60);
			this->Icode1->Name = L"Icode1";
			this->Icode1->Size = System::Drawing::Size(28, 30);
			this->Icode1->TabIndex = 25;
			this->Icode1->TabStop = false;
			// 
			// Icash0
			// 
			this->Icash0->BackColor = System::Drawing::Color::Transparent;
			this->Icash0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icash0.Image")));
			this->Icash0->Location = System::Drawing::Point(805, 96);
			this->Icash0->Name = L"Icash0";
			this->Icash0->Size = System::Drawing::Size(30, 30);
			this->Icash0->TabIndex = 16;
			this->Icash0->TabStop = false;
			// 
			// Icash1
			// 
			this->Icash1->BackColor = System::Drawing::Color::Transparent;
			this->Icash1->Location = System::Drawing::Point(772, 96);
			this->Icash1->Name = L"Icash1";
			this->Icash1->Size = System::Drawing::Size(28, 30);
			this->Icash1->TabIndex = 14;
			this->Icash1->TabStop = false;
			// 
			// Pzl
			// 
			this->Pzl->BackColor = System::Drawing::Color::Transparent;
			this->Pzl->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pzl.Image")));
			this->Pzl->Location = System::Drawing::Point(841, 96);
			this->Pzl->Name = L"Pzl";
			this->Pzl->Size = System::Drawing::Size(30, 30);
			this->Pzl->TabIndex = 6;
			this->Pzl->TabStop = false;
			// 
			// Iavatar
			// 
			this->Iavatar->BackColor = System::Drawing::SystemColors::Control;
			this->Iavatar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Iavatar.Image")));
			this->Iavatar->Location = System::Drawing::Point(34, 27);
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
			this->Bcode->Location = System::Drawing::Point(62, 191);
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
			this->Lcode->Location = System::Drawing::Point(339, 60);
			this->Lcode->Name = L"Lcode";
			this->Lcode->Size = System::Drawing::Size(130, 30);
			this->Lcode->TabIndex = 44;
			this->Lcode->TabStop = false;
			// 
			// Lcash
			// 
			this->Lcash->BackColor = System::Drawing::Color::Transparent;
			this->Lcash->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lcash.Image")));
			this->Lcash->Location = System::Drawing::Point(289, 96);
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
			this->Bhire->Location = System::Drawing::Point(62, 552);
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
			this->Bsave->Location = System::Drawing::Point(360, 552);
			this->Bsave->Name = L"Bsave";
			this->Bsave->Size = System::Drawing::Size(143, 67);
			this->Bsave->TabIndex = 52;
			this->Bsave->TabStop = false;
			this->Bsave->Click += gcnew System::EventHandler(this, &MyForm::Bsave_Click);
			// 
			// Phired1
			// 
			this->Phired1->BackColor = System::Drawing::Color::Transparent;
			this->Phired1->Cursor = System::Windows::Forms::Cursors::Default;
			this->Phired1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Phired1.Image")));
			this->Phired1->Location = System::Drawing::Point(245, 215);
			this->Phired1->Name = L"Phired1";
			this->Phired1->Size = System::Drawing::Size(84, 84);
			this->Phired1->TabIndex = 53;
			this->Phired1->TabStop = false;
			this->Phired1->Visible = false;
			// 
			// Phired2
			// 
			this->Phired2->BackColor = System::Drawing::Color::Transparent;
			this->Phired2->Cursor = System::Windows::Forms::Cursors::Default;
			this->Phired2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Phired2.Image")));
			this->Phired2->Location = System::Drawing::Point(411, 215);
			this->Phired2->Name = L"Phired2";
			this->Phired2->Size = System::Drawing::Size(84, 84);
			this->Phired2->TabIndex = 54;
			this->Phired2->TabStop = false;
			this->Phired2->Visible = false;
			// 
			// Lpremium
			// 
			this->Lpremium->AutoSize = true;
			this->Lpremium->BackColor = System::Drawing::Color::Transparent;
			this->Lpremium->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Lpremium->ForeColor = System::Drawing::Color::Red;
			this->Lpremium->Location = System::Drawing::Point(419, 302);
			this->Lpremium->Name = L"Lpremium";
			this->Lpremium->Size = System::Drawing::Size(66, 14);
			this->Lpremium->TabIndex = 55;
			this->Lpremium->Text = L"premia 10z³!";
			this->Lpremium->Visible = false;
			// 
			// Bload
			// 
			this->Bload->BackColor = System::Drawing::Color::Transparent;
			this->Bload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bload->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bload.Image")));
			this->Bload->Location = System::Drawing::Point(211, 552);
			this->Bload->Name = L"Bload";
			this->Bload->Size = System::Drawing::Size(143, 67);
			this->Bload->TabIndex = 57;
			this->Bload->TabStop = false;
			this->Bload->Click += gcnew System::EventHandler(this, &MyForm::Bload_Click);
			// 
			// Plogo
			// 
			this->Plogo->BackColor = System::Drawing::Color::Transparent;
			this->Plogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Plogo.BackgroundImage")));
			this->Plogo->Location = System::Drawing::Point(573, 319);
			this->Plogo->Name = L"Plogo";
			this->Plogo->Size = System::Drawing::Size(300, 300);
			this->Plogo->TabIndex = 58;
			// 
			// Itest1
			// 
			this->Itest1->BackColor = System::Drawing::Color::Transparent;
			this->Itest1->Location = System::Drawing::Point(771, 132);
			this->Itest1->Name = L"Itest1";
			this->Itest1->Size = System::Drawing::Size(28, 30);
			this->Itest1->TabIndex = 66;
			this->Itest1->TabStop = false;
			// 
			// Itest0
			// 
			this->Itest0->BackColor = System::Drawing::Color::Transparent;
			this->Itest0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Itest0.Image")));
			this->Itest0->Location = System::Drawing::Point(804, 132);
			this->Itest0->Name = L"Itest0";
			this->Itest0->Size = System::Drawing::Size(30, 30);
			this->Itest0->TabIndex = 67;
			this->Itest0->TabStop = false;
			// 
			// Phired4
			// 
			this->Phired4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Phired4->Cursor = System::Windows::Forms::Cursors::Default;
			this->Phired4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Phired4.Image")));
			this->Phired4->Location = System::Drawing::Point(744, 215);
			this->Phired4->Name = L"Phired4";
			this->Phired4->Size = System::Drawing::Size(84, 84);
			this->Phired4->TabIndex = 60;
			this->Phired4->TabStop = false;
			this->Phired4->Visible = false;
			// 
			// Phired3
			// 
			this->Phired3->BackColor = System::Drawing::Color::Transparent;
			this->Phired3->Cursor = System::Windows::Forms::Cursors::Default;
			this->Phired3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Phired3.Image")));
			this->Phired3->Location = System::Drawing::Point(573, 215);
			this->Phired3->Name = L"Phired3";
			this->Phired3->Size = System::Drawing::Size(84, 84);
			this->Phired3->TabIndex = 59;
			this->Phired3->TabStop = false;
			this->Phired3->Visible = false;
			// 
			// Btest
			// 
			this->Btest->BackColor = System::Drawing::Color::Transparent;
			this->Btest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btest->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btest.Image")));
			this->Btest->Location = System::Drawing::Point(62, 361);
			this->Btest->Name = L"Btest";
			this->Btest->Size = System::Drawing::Size(143, 67);
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
			this->Labsent->Location = System::Drawing::Point(586, 302);
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
			this->Ltrans->Location = System::Drawing::Point(585, 198);
			this->Ltrans->Name = L"Ltrans";
			this->Ltrans->Size = System::Drawing::Size(59, 14);
			this->Ltrans->TabIndex = 64;
			this->Ltrans->Text = L"wola walki!";
			this->Ltrans->Visible = false;
			// 
			// Itest9
			// 
			this->Itest9->BackColor = System::Drawing::Color::Transparent;
			this->Itest9->Location = System::Drawing::Point(500, 132);
			this->Itest9->Name = L"Itest9";
			this->Itest9->Size = System::Drawing::Size(28, 30);
			this->Itest9->TabIndex = 75;
			this->Itest9->TabStop = false;
			// 
			// Itest8
			// 
			this->Itest8->BackColor = System::Drawing::Color::Transparent;
			this->Itest8->Location = System::Drawing::Point(534, 132);
			this->Itest8->Name = L"Itest8";
			this->Itest8->Size = System::Drawing::Size(28, 30);
			this->Itest8->TabIndex = 74;
			this->Itest8->TabStop = false;
			// 
			// Itest7
			// 
			this->Itest7->BackColor = System::Drawing::Color::Transparent;
			this->Itest7->Location = System::Drawing::Point(568, 132);
			this->Itest7->Name = L"Itest7";
			this->Itest7->Size = System::Drawing::Size(28, 30);
			this->Itest7->TabIndex = 73;
			this->Itest7->TabStop = false;
			// 
			// Itest6
			// 
			this->Itest6->BackColor = System::Drawing::Color::Transparent;
			this->Itest6->Location = System::Drawing::Point(602, 132);
			this->Itest6->Name = L"Itest6";
			this->Itest6->Size = System::Drawing::Size(28, 30);
			this->Itest6->TabIndex = 72;
			this->Itest6->TabStop = false;
			// 
			// Itest5
			// 
			this->Itest5->BackColor = System::Drawing::Color::Transparent;
			this->Itest5->Location = System::Drawing::Point(636, 132);
			this->Itest5->Name = L"Itest5";
			this->Itest5->Size = System::Drawing::Size(28, 30);
			this->Itest5->TabIndex = 71;
			this->Itest5->TabStop = false;
			// 
			// Itest4
			// 
			this->Itest4->BackColor = System::Drawing::Color::Transparent;
			this->Itest4->Location = System::Drawing::Point(670, 132);
			this->Itest4->Name = L"Itest4";
			this->Itest4->Size = System::Drawing::Size(28, 30);
			this->Itest4->TabIndex = 70;
			this->Itest4->TabStop = false;
			// 
			// Itest3
			// 
			this->Itest3->BackColor = System::Drawing::Color::Transparent;
			this->Itest3->Location = System::Drawing::Point(704, 132);
			this->Itest3->Name = L"Itest3";
			this->Itest3->Size = System::Drawing::Size(28, 30);
			this->Itest3->TabIndex = 69;
			this->Itest3->TabStop = false;
			// 
			// Itest2
			// 
			this->Itest2->BackColor = System::Drawing::Color::Transparent;
			this->Itest2->Location = System::Drawing::Point(738, 132);
			this->Itest2->Name = L"Itest2";
			this->Itest2->Size = System::Drawing::Size(28, 30);
			this->Itest2->TabIndex = 68;
			this->Itest2->TabStop = false;
			// 
			// Iprogress0
			// 
			this->Iprogress0->Location = System::Drawing::Point(62, 443);
			this->Iprogress0->Name = L"Iprogress0";
			this->Iprogress0->Size = System::Drawing::Size(30, 10);
			this->Iprogress0->TabIndex = 76;
			this->Iprogress0->TabStop = false;
			this->Iprogress0->Visible = false;
			// 
			// Iprogress1
			// 
			this->Iprogress1->Location = System::Drawing::Point(98, 443);
			this->Iprogress1->Name = L"Iprogress1";
			this->Iprogress1->Size = System::Drawing::Size(30, 10);
			this->Iprogress1->TabIndex = 77;
			this->Iprogress1->TabStop = false;
			this->Iprogress1->Visible = false;
			// 
			// Iprogress2
			// 
			this->Iprogress2->Location = System::Drawing::Point(134, 443);
			this->Iprogress2->Name = L"Iprogress2";
			this->Iprogress2->Size = System::Drawing::Size(30, 10);
			this->Iprogress2->TabIndex = 78;
			this->Iprogress2->TabStop = false;
			this->Iprogress2->Visible = false;
			// 
			// Iprogress3
			// 
			this->Iprogress3->Location = System::Drawing::Point(170, 443);
			this->Iprogress3->Name = L"Iprogress3";
			this->Iprogress3->Size = System::Drawing::Size(30, 10);
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
			this->Ltest->Location = System::Drawing::Point(72, 344);
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
			this->Lcycle->Location = System::Drawing::Point(286, 438);
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
			this->Icycle9->Location = System::Drawing::Point(211, 361);
			this->Icycle9->Name = L"Icycle9";
			this->Icycle9->Size = System::Drawing::Size(24, 67);
			this->Icycle9->TabIndex = 91;
			this->Icycle9->TabStop = false;
			// 
			// Icycle8
			// 
			this->Icycle8->BackColor = System::Drawing::Color::Transparent;
			this->Icycle8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Icycle8->Location = System::Drawing::Point(241, 361);
			this->Icycle8->Name = L"Icycle8";
			this->Icycle8->Size = System::Drawing::Size(24, 67);
			this->Icycle8->TabIndex = 90;
			this->Icycle8->TabStop = false;
			// 
			// Icycle7
			// 
			this->Icycle7->BackColor = System::Drawing::Color::Transparent;
			this->Icycle7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Icycle7->Location = System::Drawing::Point(271, 361);
			this->Icycle7->Name = L"Icycle7";
			this->Icycle7->Size = System::Drawing::Size(24, 67);
			this->Icycle7->TabIndex = 89;
			this->Icycle7->TabStop = false;
			// 
			// Icycle6
			// 
			this->Icycle6->BackColor = System::Drawing::Color::Transparent;
			this->Icycle6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Icycle6->Location = System::Drawing::Point(301, 361);
			this->Icycle6->Name = L"Icycle6";
			this->Icycle6->Size = System::Drawing::Size(24, 67);
			this->Icycle6->TabIndex = 88;
			this->Icycle6->TabStop = false;
			// 
			// Icycle5
			// 
			this->Icycle5->BackColor = System::Drawing::Color::Transparent;
			this->Icycle5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Icycle5->Location = System::Drawing::Point(331, 361);
			this->Icycle5->Name = L"Icycle5";
			this->Icycle5->Size = System::Drawing::Size(24, 67);
			this->Icycle5->TabIndex = 87;
			this->Icycle5->TabStop = false;
			// 
			// Icycle4
			// 
			this->Icycle4->BackColor = System::Drawing::Color::Transparent;
			this->Icycle4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Icycle4->Location = System::Drawing::Point(361, 361);
			this->Icycle4->Name = L"Icycle4";
			this->Icycle4->Size = System::Drawing::Size(24, 67);
			this->Icycle4->TabIndex = 96;
			this->Icycle4->TabStop = false;
			// 
			// Icycle3
			// 
			this->Icycle3->BackColor = System::Drawing::Color::Transparent;
			this->Icycle3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Icycle3->Location = System::Drawing::Point(391, 361);
			this->Icycle3->Name = L"Icycle3";
			this->Icycle3->Size = System::Drawing::Size(24, 67);
			this->Icycle3->TabIndex = 95;
			this->Icycle3->TabStop = false;
			// 
			// Icycle2
			// 
			this->Icycle2->BackColor = System::Drawing::Color::Transparent;
			this->Icycle2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Icycle2->Location = System::Drawing::Point(421, 361);
			this->Icycle2->Name = L"Icycle2";
			this->Icycle2->Size = System::Drawing::Size(24, 67);
			this->Icycle2->TabIndex = 94;
			this->Icycle2->TabStop = false;
			// 
			// Icycle1
			// 
			this->Icycle1->BackColor = System::Drawing::Color::Transparent;
			this->Icycle1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Icycle1->Location = System::Drawing::Point(451, 361);
			this->Icycle1->Name = L"Icycle1";
			this->Icycle1->Size = System::Drawing::Size(24, 67);
			this->Icycle1->TabIndex = 93;
			this->Icycle1->TabStop = false;
			// 
			// Icycle0
			// 
			this->Icycle0->BackColor = System::Drawing::Color::Transparent;
			this->Icycle0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Icycle0->Location = System::Drawing::Point(481, 361);
			this->Icycle0->Name = L"Icycle0";
			this->Icycle0->Size = System::Drawing::Size(24, 67);
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
			this->Ldeterminated->Location = System::Drawing::Point(741, 198);
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
			this->Llazy->Location = System::Drawing::Point(761, 302);
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
			this->Lpoor->Location = System::Drawing::Point(701, 302);
			this->Lpoor->Name = L"Lpoor";
			this->Lpoor->Size = System::Drawing::Size(155, 14);
			this->Lpoor->TabIndex = 99;
			this->Lpoor->Text = L"nie dosta³ wyp³aty - nie pracuje!";
			this->Lpoor->Visible = false;
			// 
			// Ltested
			// 
			this->Ltested->BackColor = System::Drawing::Color::Transparent;
			this->Ltested->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ltested.Image")));
			this->Ltested->Location = System::Drawing::Point(255, 132);
			this->Ltested->Name = L"Ltested";
			this->Ltested->Size = System::Drawing::Size(214, 26);
			this->Ltested->TabIndex = 101;
			this->Ltested->TabStop = false;
			// 
			// Btrain
			// 
			this->Btrain->BackColor = System::Drawing::Color::Transparent;
			this->Btrain->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btrain->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btrain.Image")));
			this->Btrain->Location = System::Drawing::Point(62, 473);
			this->Btrain->Name = L"Btrain";
			this->Btrain->Size = System::Drawing::Size(215, 73);
			this->Btrain->TabIndex = 102;
			this->Btrain->TabStop = false;
			this->Btrain->Click += gcnew System::EventHandler(this, &MyForm::Btrain_Click);
			// 
			// Bupgrade
			// 
			this->Bupgrade->BackColor = System::Drawing::Color::Transparent;
			this->Bupgrade->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bupgrade->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bupgrade.Image")));
			this->Bupgrade->Location = System::Drawing::Point(288, 473);
			this->Bupgrade->Name = L"Bupgrade";
			this->Bupgrade->Size = System::Drawing::Size(215, 73);
			this->Bupgrade->TabIndex = 103;
			this->Bupgrade->TabStop = false;
			this->Bupgrade->Click += gcnew System::EventHandler(this, &MyForm::Bupgrade_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(928, 672);
			this->Controls->Add(this->Bupgrade);
			this->Controls->Add(this->Btrain);
			this->Controls->Add(this->Ltested);
			this->Controls->Add(this->Itest1);
			this->Controls->Add(this->Itest0);
			this->Controls->Add(this->Lpoor);
			this->Controls->Add(this->Ldeterminated);
			this->Controls->Add(this->Bload);
			this->Controls->Add(this->Bsave);
			this->Controls->Add(this->Llazy);
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
			this->Controls->Add(this->Iprogress3);
			this->Controls->Add(this->Iprogress2);
			this->Controls->Add(this->Iprogress1);
			this->Controls->Add(this->Iprogress0);
			this->Controls->Add(this->Itest9);
			this->Controls->Add(this->Itest8);
			this->Controls->Add(this->Itest7);
			this->Controls->Add(this->Itest6);
			this->Controls->Add(this->Itest5);
			this->Controls->Add(this->Itest4);
			this->Controls->Add(this->Itest3);
			this->Controls->Add(this->Itest2);
			this->Controls->Add(this->Ltrans);
			this->Controls->Add(this->Labsent);
			this->Controls->Add(this->Btest);
			this->Controls->Add(this->Phired4);
			this->Controls->Add(this->Phired3);
			this->Controls->Add(this->Plogo);
			this->Controls->Add(this->Lpremium);
			this->Controls->Add(this->Phired2);
			this->Controls->Add(this->Phired1);
			this->Controls->Add(this->Bhire);
			this->Controls->Add(this->Lcash);
			this->Controls->Add(this->Lcode);
			this->Controls->Add(this->Iavatar);
			this->Controls->Add(this->Icode9);
			this->Controls->Add(this->Bcode);
			this->Controls->Add(this->Icode8);
			this->Controls->Add(this->Icode7);
			this->Controls->Add(this->Icode6);
			this->Controls->Add(this->Icode5);
			this->Controls->Add(this->Icode4);
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
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phired1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phired2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bload))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phired4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phired3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Btest))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Itest2))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ltested))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Btrain))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bupgrade))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bcode_Click(System::Object^  sender, System::EventArgs^  e) {
				 //przycisk kodowania
				 code += codefactor;
				 cash = (codefactor*cashfactor) + cash;
				 refresh();
	}
			 void refresh() {
				 //odœwie¿anie wartoœci kasy i kodu

				 array<PictureBox^>^ Icash = gcnew array<PictureBox^>{
					 Icash0, Icash1, Icash2, Icash3, Icash4, Icash5, Icash6, Icash7, Icash8, Icash9
				 };
				 array<PictureBox^>^ Icode = gcnew array<PictureBox^>{
					 Icode0, Icode1, Icode2, Icode3, Icode4, Icode5, Icode6, Icode7, Icode8, Icode9
				 };

				 String^ cashString = cash.ToString();
				 int cashindex = cashString->Length;

				 for (int i = 0; i < Icash->Length; i++)
					 Icash[i]->Visible = i < cashindex;

				 for (int i = 0; i < cashindex; i++)
					 Icash[i]->Load(String::Format("grafika\\{0}.png", cashString[cashindex - i - 1]));

				 String^ codeString = code.ToString();
				 int codeindex = codeString->Length;

				 for (int i = 0; i < Icode->Length; i++)
					 Icode[i]->Visible = i < codeindex;

				 for (int i = 0; i < codeindex; i++)
					 Icode[i]->Load(String::Format("grafika\\{0}.png", codeString[codeindex - i - 1]));

				 if (!millionaire && cash>=1000000){
					 MessageBox::Show("Uda³o Ci siê zarobiæ pierwszy milion! Gratulacje!");
					 millionaire = true;
				 }
			 }

private: System::Void Bload_Click(System::Object^  sender, System::EventArgs^  e) {
			 //wczytanie gry
			 try{
				 String^ fileName = "data.ccr";
				 FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
				 StreamReader^ sw = gcnew StreamReader(fs);
				 int boolean;
				 Phired1->Visible = false;
				 Phired2->Visible = false;
				 Phired3->Visible = false;
				 Phired4->Visible = false;
				 Lcycle->Visible = false;
				 Ltest->Visible = false;
				 Lpremium->Visible = false;
				 Labsent->Visible = false;
				 Ltrans->Visible = false;
				 Llazy->Visible = false;
				 Ldeterminated->Visible = false;
				 Lpoor->Visible = false;
				 reset();
				 testing = false;
				 testprogress = 0;
				 Iprogress0->Visible = false;
				 Iprogress1->Visible = false;
				 Iprogress2->Visible = false;
				 Iprogress3->Visible = false;
				 Btest->Load("grafika/przyciskTestuj (2).png");
				 while (sw->Peek() >= 0)
				 {
					 Int32::TryParse(sw->ReadLine(), code);
					 Int32::TryParse(sw->ReadLine(), cash);
					 Int32::TryParse(sw->ReadLine(), test);
					 Int32::TryParse(sw->ReadLine(), cycle);
					 Icycle9->BackColor = System::Drawing::Color::Transparent;
					 Icycle8->BackColor = System::Drawing::Color::Transparent;
					 Icycle7->BackColor = System::Drawing::Color::Transparent;
					 Icycle6->BackColor = System::Drawing::Color::Transparent;
					 Icycle5->BackColor = System::Drawing::Color::Transparent;
					 Icycle4->BackColor = System::Drawing::Color::Transparent;
					 Icycle3->BackColor = System::Drawing::Color::Transparent;
					 Icycle2->BackColor = System::Drawing::Color::Transparent;
					 Icycle1->BackColor = System::Drawing::Color::Transparent;
					 Icycle0->BackColor = System::Drawing::Color::Transparent;
					 if (cycle >= 30)Icycle9->BackColor = System::Drawing::Color::Orange;
					 if (cycle >= 60)Icycle8->BackColor = System::Drawing::Color::Orange;
					 if (cycle >= 90)Icycle7->BackColor = System::Drawing::Color::Orange;
					 if (cycle >= 120)Icycle6->BackColor = System::Drawing::Color::Orange;
					 if (cycle >= 150)Icycle5->BackColor = System::Drawing::Color::Orange;
					 if (cycle >= 180)Icycle4->BackColor = System::Drawing::Color::Orange;
					 if (cycle >= 210)Icycle3->BackColor = System::Drawing::Color::Orange;
					 if (cycle >= 240)Icycle2->BackColor = System::Drawing::Color::Orange;
					 if (cycle >= 270)Icycle1->BackColor = System::Drawing::Color::Orange;
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean==1)
					 {
						 employee1 = true;
						 Phired1->Visible = true;
					 }		 
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean==1)
					 {
						 employee2 = true;
						 Phired2->Visible = true;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 employee3 = true;
						 Phired3->Visible = true;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 employee4 = true;
						 Phired4->Visible = true;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 poor = true;
						 Lpoor->Visible = true;
					 }
					 else{
						 poor = false;
						 Lpoor->Visible = false;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk1_1 = true;
						 cashfactor += 1;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk1_2 = true;
						 cashfactor += 3;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk1_3 = true;
						 cashfactor += 6;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk1_4 = true;
						 cashfactor += 10;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk2_1 = true;
						 codefactor += 1;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk2_2 = true;
						 codefactor += 2;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk2_3 = true;
						 codefactor += 3;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk2_4 = true;
						 codefactor += 4;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk2_5 = true;
						 codefactor += 5;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk3_1 = true;
						 employee1speed -= 1;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk3_2 = true;
						 employee1factor += 2;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk3_3 = true;
						 employee1speed -= 3;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk4_1 = true;
						 employee2factor += 2;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk4_2 = true;
						 employee2factor += 4;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk4_3 = true;
						 employee2speed -= 2;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk5_1 = true;
						 employee3speed -= 3;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk5_2 = true;
						 employee3speed -= 7;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk5_3 = true;
						 employee3factor += 4;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk6_1 = true;
						 employee4speed -= 15;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk6_2 = true;
						 employee4factor += 4;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 perk6_3 = true;
						 employee4factor += 6;
					 }
					 Int32::TryParse(sw->ReadLine(), boolean);
					 if (boolean == 1)
					 {
						 millionaire = true;
					 }

				 }
				 refresh();
				 refreshtested();
				 testfactor = cashfactor*cashfactor;
				 sw->Close();
			 }
			 catch (const FileNotFoundException^ e){
				 MessageBox::Show("B£¥D: nie mo¿na otworzyæ pliku do odczytu.");
			 }			 
}
private: System::Void Bsave_Click(System::Object^  sender, System::EventArgs^  e) {
			 //zapis gry
			 String^ fileName = "data.ccr";
			 StreamWriter^ sw = gcnew StreamWriter(fileName);
			 sw->WriteLine(code);
			 sw->WriteLine(cash);
			 sw->WriteLine(test);
			 sw->WriteLine(cycle);
			 if (employee1) sw->WriteLine(1); else sw->WriteLine(0);
			 if (employee2) sw->WriteLine(1); else sw->WriteLine(0);
			 if (employee3) sw->WriteLine(1); else sw->WriteLine(0);
			 if (employee4) sw->WriteLine(1); else sw->WriteLine(0);
			 if (poor) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk1_1) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk1_2) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk1_3) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk1_4) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk2_1) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk2_2) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk2_3) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk2_4) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk2_5) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk3_1) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk3_2) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk3_3) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk4_1) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk4_2) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk4_3) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk5_1) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk5_2) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk5_3) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk6_1) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk6_2) sw->WriteLine(1); else sw->WriteLine(0);
			 if (perk6_3) sw->WriteLine(1); else sw->WriteLine(0);
			 if (millionaire) sw->WriteLine(1); else sw->WriteLine(0);
			 sw->Close();
}
private: System::Void Bhire_Click(System::Object^  sender, System::EventArgs^  e) {
			 //otwarcie formatki z pomocnikami
			 Bhire->Load("grafika/przyciskWynajmij2Wcisniety.png");
			 hire^ hiredialog = gcnew hire;
			 hiredialog->check(cash, employee1, employee2, employee3, employee4, perk3_1, perk3_2, perk3_3, perk4_1, perk4_2, perk4_3, perk5_1, perk5_2, perk5_3, perk6_1, perk6_2, perk6_3);
			 hiredialog->ShowDialog();
			 passdata(hiredialog->getpaid(), hiredialog->getemployee1(), hiredialog->getemployee2(), hiredialog->getemployee3(), hiredialog->getemployee4(), hiredialog->getperk1_1(), hiredialog->getperk1_2(), hiredialog->getperk1_3(), hiredialog->getperk2_1(), hiredialog->getperk2_2(), hiredialog->getperk2_3(), hiredialog->getperk3_1(), hiredialog->getperk3_2(), hiredialog->getperk3_3(), hiredialog->getperk4_1(), hiredialog->getperk4_2(), hiredialog->getperk4_3());
			 refresh();
			 Bhire->Load("grafika/przyciskWynajmij2.png");
}

	private: void refreshtested() {
		//odœwie¿anie wartoœci przetestowanych linii
		array<PictureBox^>^ Itest = gcnew array<PictureBox^>{
			Itest0, Itest1, Itest2, Itest3, Itest4, Itest5, Itest6, Itest7, Itest8, Itest9
		};

		String^ testString = test.ToString();
		int testindex = testString->Length;

		for (int i = 0; i < Itest->Length; i++)
			Itest[i]->Visible = i < testindex;

		for (int i = 0; i < testindex; i++)
			Itest[i]->Load(String::Format("grafika\\{0}.png", testString[testindex - i - 1]));
	}

private: System::Void Temployees_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //praca pomocników oraz testowanie i cykl
			 if (testprogress == 5){				 
				 test += testfactor;
				 if (test > code) test = code;
				 Iprogress0->Visible = false;
				 Iprogress1->Visible = false;
				 Iprogress2->Visible = false;
				 Iprogress3->Visible = false;
				 refreshtested();
				 testprogress = 0;
				 testing = false;
				 Btest->Load("grafika/przyciskTestuj (2).png");
			 }
			 if (testing){
				 testprogress++;
				 if (testprogress == 1)Iprogress0->Visible = true;
				 if (testprogress == 2)Iprogress1->Visible = true;
				 if (testprogress == 3)Iprogress2->Visible = true;
				 if (testprogress == 4)Iprogress3->Visible = true;
			 }
			 if (cycle == 30)Icycle9->BackColor = System::Drawing::Color::Orange;
			 if (cycle == 60)Icycle8->BackColor = System::Drawing::Color::Orange;
			 if (cycle == 90)Icycle7->BackColor = System::Drawing::Color::Orange;
			 if (cycle == 120)Icycle6->BackColor = System::Drawing::Color::Orange;
			 if (cycle == 150)Icycle5->BackColor = System::Drawing::Color::Orange;
			 if (cycle == 180)Icycle4->BackColor = System::Drawing::Color::Orange;
			 if (cycle == 210)Icycle3->BackColor = System::Drawing::Color::Orange;
			 if (cycle == 240)Icycle2->BackColor = System::Drawing::Color::Orange;
			 if (cycle == 270)Icycle1->BackColor = System::Drawing::Color::Orange;
			 if (cycle == 300){
				 Icycle0->BackColor = System::Drawing::Color::Orange;
				 Lcycle->Visible = true;
				 cash += (code - (code - test))*cashfactor;
				 refresh();
				 cycle = 0;
				 if (employee4){
					 if (cash - employee4factor * 5 > 0){
						 cash -= employee4factor * 5;
						 Lpoor->Visible = false;
						 Phired4->Load("grafika\\testermini.png");
						 Ldeterminated->Visible = false;
						 Llazy->Visible = false;
					 }
					 else {
						 poor = true;
						 Lpoor->Visible = true;
						 Phired4->Load("grafika\\testerminipoor.png");
						 Ldeterminated->Visible = false;
						 Llazy->Visible = false;
					 }
				 }
			 }
			 else cycle++;
			 if (cycle == 5){
				 Lcycle->Visible = false;
				 Icycle9->BackColor = System::Drawing::Color::Transparent;
				 Icycle8->BackColor = System::Drawing::Color::Transparent;
				 Icycle7->BackColor = System::Drawing::Color::Transparent;
				 Icycle6->BackColor = System::Drawing::Color::Transparent;
				 Icycle5->BackColor = System::Drawing::Color::Transparent;
				 Icycle4->BackColor = System::Drawing::Color::Transparent;
				 Icycle3->BackColor = System::Drawing::Color::Transparent;
				 Icycle2->BackColor = System::Drawing::Color::Transparent;
				 Icycle1->BackColor = System::Drawing::Color::Transparent;
				 Icycle0->BackColor = System::Drawing::Color::Transparent;
			 }
			 if (employee1progress == employee1speed){				
				 code += employee1factor;
				 cash += ((employee1factor*cashfactor) / 2);
				 refresh();
				 employee1progress = 0;		 
			 }
			 if (employee1)employee1progress++;
			 if (employee2progress == employee2speed){
				 code += employee2factor;
				 cash += ((employee2factor*cashfactor) / 2);
				 refresh();
				 employee2progress = 0;
				 if (employee2premium >= 15 && cash>=10){
					 cash -= 10;
					 Lpremium->Visible = true;
					 Phired2->Load("grafika\\programista3minipremium.png");
					 employee2premium = 0;
					 refresh();
				 }
				 else{
					 employee2premium++;
					 Lpremium->Visible = false;
					 Phired2->Load("grafika\\programista3mini.png");
				 } 
			 }
			 if (employee2)employee2progress++;
			 if (employee3progress == employee3speed){
				 employee3progress = 0;
				 Labsent->Visible = false;
				 Ltrans->Visible = false;
				 Phired3->Load("grafika\\programista4mini.png");
				 if (employee3cycle % 3 == 0){
					 Labsent->Visible = true;
					 Phired3->Load("grafika\\programista4miniabsent.png");
				 }
				 else{
					 if (employee3cycle % 5 == 0){
						 Ltrans->Visible = true;
						 Phired3->Load("grafika\\programista4minitrans.png");
						 code += employee3factor*2;
						 cash += (employee3factor*cashfactor);
					 }
				 }
				 if (employee3cycle == 100)employee3cycle = 0;					 				 
				 else employee3cycle++;
				 if (employee3cycle % 5 != 0 && employee3cycle % 3 != 0){
					code += employee3factor;
					cash += ((employee3factor*cashfactor) / 2);
				 }		 				 
				 refresh();
			 }
			 if (employee3)employee3progress++;
			 if (employee4progress == employee4speed && !poor){
				 employee4progress = 0;
				 if (cycle < 100){
					 test += employee4factor / 2;
					 Llazy->Visible = true;
					 Phired4->Load("grafika\\testerminilazy.png");
				 }
				 else if (cycle <250){
					 test += employee4factor;
					 Llazy->Visible = false;
					 Ldeterminated->Visible = false;
					 Phired4->Load("grafika\\testermini.png");
				 }
				 else{
					 test += employee4factor * 10;
					 Ldeterminated->Visible = true;
					 Phired4->Load("grafika\\testerminidetermined.png");
				 }
				 if (test>code)test = code;
				 refreshtested();
			 }
			 if (employee4 && !poor)employee4progress++;
}
private: System::Void Btest_Click(System::Object^  sender, System::EventArgs^  e) {
			 //klikniêcie przycisku testowania
			 if (!testing){
				 if (test < code){
				 Ltest->Visible = false;
				 testing = true;
				 Btest->Load("grafika/przyciskTestujWcisniety.png");
			 }
			 else Ltest->Visible = true;
			 }
}
private: System::Void Bupgrade_Click(System::Object^  sender, System::EventArgs^  e) {
			 //otwarcie formatki z ulepszeniami firmy
			 Bupgrade->Load("grafika/przyciskZainwestujWFirmêWcisniety.png");
			 upgradefirm^ firmdialog = gcnew upgradefirm;
			 firmdialog->check(cash,perk1_1,perk1_2,perk1_3,perk1_4);
			 firmdialog->ShowDialog();
			 passfirm(firmdialog->getpaid(), firmdialog->getperk1(), firmdialog->getperk2(), firmdialog->getperk3(), firmdialog->getperk4());
			 refresh();
			 Bupgrade->Load("grafika/przyciskZainwestujWFirmê.png");
}
private: System::Void Btrain_Click(System::Object^  sender, System::EventArgs^  e) {
			 //otwarcie formatki z ulepszeniami g³ównego programisty
			 Btrain->Load("grafika/przyciskZainwestujWSiebieWcisniety.png");
			 upgradeavatar^ avatardialog = gcnew upgradeavatar;
			 avatardialog->check(cash,perk2_1,perk2_2,perk2_3,perk2_4,perk2_5);
			 avatardialog->ShowDialog();
			 passavatar(avatardialog->getpaid(), avatardialog->getperk1(), avatardialog->getperk2(), avatardialog->getperk3(), avatardialog->getperk4(), avatardialog->getperk5());
			 refresh();
			 Btrain->Load("grafika/przyciskZainwestujWSiebie.png");
}
};
}