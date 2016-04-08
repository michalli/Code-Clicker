#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	//utworzenie i wyœwietlenie g³ównej formatki
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CodeClicker::MyForm form;
	Application::Run(%form);
}

namespace CodeClicker {

	MyForm::MyForm(void)
	{
		resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
		InitializeComponent();
		InitializeManualComponent();

		hiredialog = gcnew hire();

		employees = gcnew array<Employee^>(employeesCount);
		employees[0] = gcnew Employee(this, 0, 1, 7, 100, safe_cast<Image^>(resources->GetObject(L"Bhire0.Image")), L"Buxton Sketch", System::Drawing::Size(196, 39), L"Zosia Samosia", System::Drawing::Size(172, 19), L"pocz¹tkuj¹ca programistka", System::Drawing::Size(79, 15), System::Drawing::Size(235, 15), L"po³owa generowanych przez siebie zysków");
		employees[1] = gcnew EmployeePremium(this, 1, 2, 10, 400, safe_cast<Image^>(resources->GetObject(L"Bhire1.Image")), L"SketchFlow Print", System::Drawing::Size(264, 34), L"Mariusz Denko", System::Drawing::Size(80, 19), L"programista", System::Drawing::Size(79, 15), System::Drawing::Size(235, 15), L"po³owa generowanych przez siebie zysków");
		employees[2] = gcnew EmployeeCycle(this, 2, 4, 15, 1000, safe_cast<Image^>(resources->GetObject(L"Bhire2.Image")), L"Segoe Print", System::Drawing::Size(277, 57), L"Alfred Kofeinka", System::Drawing::Size(170, 19), L"doœwiadczony programista", System::Drawing::Size(85, 15), System::Drawing::Size(235, 15), L"po³owa generowanych przez siebie zysków");
		employees[3] = gcnew EmployeePoor(this, 3, 5, 25, 3000, safe_cast<Image^>(resources->GetObject(L"Bhire3.Image")), L"Gabriola", System::Drawing::Size(169, 59), L"Janusz Apacz", System::Drawing::Size(42, 19), L"tester", System::Drawing::Size(85, 15), System::Drawing::Size(246, 15), L"wyp³ata po cyklu zale¿na od produktywnoœci");

		code = 0;
		cash = 0;
		test = 0;
		codefactor = 1;
		cashfactor = 2;
		testfactor = 5;
		testing = false;
		testprogress = 0;
		cycle = 0;
	}

	void MyForm::refreshEmployeesHireButton()
	{
		for (int i = 0; i < employeesCount; i++)
			employees[i]->refreshHireButton();
	}
	void MyForm::refreshEmployeesPictures()
	{
		for (int i = 0; i < employeesCount; i++)
			employees[i]->refreshPictureBox();
	}

	void MyForm::refresh() { //TODO nazwa co refresh
		//odœwie¿anie wartoœci kasy i kodu
		int cashtab[10], codetab[10];
		int cashindex, codeindex, help;
		cashindex = 1;
		help = cash;
		while (help / 10 != 0) {
			cashindex++;
			help /= 10;
		}
		help = cash;
		for (int i = 0; i < cashindex; i++) {
			cashtab[i] = help % 10;
			help /= 10;
		}
		//TODO mapowanie [KSZ]
		if (cashindex > 0)
			Icash0->Load("grafika\\" + cashtab[0] + ".png");
		else Icash0->Visible = false;
		if (cashindex > 1) {
			Icash1->Load("grafika\\" + cashtab[1] + ".png");
			Icash1->Visible = true;
		}
		else Icash1->Visible = false;
		if (cashindex > 2) {
			Icash2->Load("grafika\\" + cashtab[2] + ".png");
			Icash2->Visible = true;
		}
		else Icash2->Visible = false;
		if (cashindex > 3) {
			Icash3->Load("grafika\\" + cashtab[3] + ".png");
			Icash3->Visible = true;
		}
		else Icash3->Visible = false;
		if (cashindex > 4) {
			Icash4->Load("grafika\\" + cashtab[4] + ".png");
			Icash4->Visible = true;
		}
		else Icash4->Visible = false;
		if (cashindex > 5) {
			Icash5->Load("grafika\\" + cashtab[5] + ".png");
			Icash5->Visible = true;
		}
		else Icash5->Visible = false;
		if (cashindex > 6) {
			Icash6->Load("grafika\\" + cashtab[6] + ".png");
			Icash6->Visible = true;
		}
		else Icash6->Visible = false;
		if (cashindex > 7) {
			Icash7->Load("grafika\\" + cashtab[7] + ".png");
			Icash7->Visible = true;
		}
		else Icash7->Visible = false;
		if (cashindex > 8) {
			Icash8->Load("grafika\\" + cashtab[8] + ".png");
			Icash8->Visible = true;
		}
		else Icash8->Visible = false;
		if (cashindex > 9) {
			Icash9->Load("grafika\\" + cashtab[9] + ".png");
			Icash9->Visible = true;
		}
		else Icash9->Visible = false;
		codeindex = 1;
		help = code;
		while (help / 10 != 0) {
			codeindex++;
			help /= 10;
		}
		help = code;
		for (int i = 0; i < codeindex; i++) {
			codetab[i] = help % 10;
			help /= 10;
		}
		if (codeindex > 0) {
			Icode0->Load("grafika\\" + codetab[0] + ".png");
			Icode0->Visible = true;
		}
		else Icode0->Visible = false;
		if (codeindex > 1) {
			Icode1->Load("grafika\\" + codetab[1] + ".png");
			Icode1->Visible = true;
		}
		else Icode1->Visible = false;
		if (codeindex > 2) {
			Icode2->Load("grafika\\" + codetab[2] + ".png");
			Icode2->Visible = true;
		}
		else Icode2->Visible = false;
		if (codeindex > 3) {
			Icode3->Load("grafika\\" + codetab[3] + ".png");
			Icode3->Visible = true;
		}
		else Icode3->Visible = false;
		if (codeindex > 4) {
			Icode4->Load("grafika\\" + codetab[4] + ".png");
			Icode4->Visible = true;
		}
		else Icode4->Visible = false;
		if (codeindex > 5) {
			Icode5->Load("grafika\\" + codetab[5] + ".png");
			Icode5->Visible = true;
		}
		else Icode5->Visible = false;
		if (codeindex > 6) {
			Icode6->Load("grafika\\" + codetab[6] + ".png");
			Icode6->Visible = true;
		}
		else Icode6->Visible = false;
		if (codeindex > 7) {
			Icode7->Load("grafika\\" + codetab[7] + ".png");
			Icode7->Visible = true;
		}
		else Icode7->Visible = false;
		if (codeindex > 8) {
			Icode8->Load("grafika\\" + codetab[8] + ".png");
			Icode8->Visible = true;
		}
		else Icode8->Visible = false;
		if (codeindex > 9) {
			Icode9->Load("grafika\\" + codetab[9] + ".png");
			Icode9->Visible = true;
		}
		else Icode9->Visible = false;
	}

	System::Void MyForm::Bcode_Click(System::Object^  sender, System::EventArgs^  e) {
		//przycisk kodowania
		code += codefactor;
		cash = (codefactor*cashfactor) + cash;
		refresh();
	}

	System::Void MyForm::Bload_Click(System::Object^  sender, System::EventArgs^  e) {
		//wczytanie gry
		try {
			String^ fileName = "data.ccr";
			FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
			StreamReader^ sw = gcnew StreamReader(fs);
			int boolean;
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
				if (cycle >= 30)
					Icycle9->BackColor = System::Drawing::Color::Orange;
				if (cycle >= 60)
					Icycle8->BackColor = System::Drawing::Color::Orange;
				if (cycle >= 90)
					Icycle7->BackColor = System::Drawing::Color::Orange;
				if (cycle >= 120)
					Icycle6->BackColor = System::Drawing::Color::Orange;
				if (cycle >= 150)
					Icycle5->BackColor = System::Drawing::Color::Orange;
				if (cycle >= 180)
					Icycle4->BackColor = System::Drawing::Color::Orange;
				if (cycle >= 210)
					Icycle3->BackColor = System::Drawing::Color::Orange;
				if (cycle >= 240)
					Icycle2->BackColor = System::Drawing::Color::Orange;
				if (cycle >= 270)
					Icycle1->BackColor = System::Drawing::Color::Orange;
				for (int i = 0; i < employeesCount; i++)
				{
					Int32::TryParse(sw->ReadLine(), boolean);
					employees[i]->isHired = (boolean == 1);
					Phireds[i]->Visible = (boolean == 1);
				}
				Int32::TryParse(sw->ReadLine(), boolean);
				((EmployeePoor^)(employees[3]))->poor = (boolean == 1);
				Lpoor->Visible = (boolean == 1);
			}
			refresh();
			refreshtested();
			sw->Close();
		}
		catch (const FileNotFoundException^) {
			MessageBox::Show("B£¥D: nie mo¿na otworzyæ pliku do odczytu.");
		}
	}

	System::Void MyForm::Bsave_Click(System::Object^  sender, System::EventArgs^  e) {
		//zapis gry
		//TODO xml [KSZ]
		String^ fileName = "data.ccr";
		StreamWriter^ sw = gcnew StreamWriter(fileName);
		sw->WriteLine(code);
		sw->WriteLine(cash);
		sw->WriteLine(test);
		sw->WriteLine(cycle);
		for (int i = 0; i < employeesCount; i++)
			sw->WriteLine(employees[i]->isHired ? 1 : 0);
		sw->WriteLine(((EmployeePoor^)(employees[3]))->poor ? 1 : 0);
		sw->Close();
	}

	System::Void MyForm::Bhire_Click(System::Object^  sender, System::EventArgs^  e) {
		//otwarcie formatki z najemnikami
		
		refreshEmployeesHireButton();
		hiredialog->ShowDialog();
	}

	void MyForm::refreshtested() {
		//odœwie¿anie wartoœci przetestowanych linii
		//TODO mapowanie [KSZ]
		int testtab[10];
		int testindex, help;
		testindex = 1;
		help = test;
		while (help / 10 != 0) {
			testindex++;
			help /= 10;
		}
		help = test;
		for (int i = 0; i < testindex; i++) {
			testtab[i] = help % 10;
			help /= 10;
		}
		if (testindex > 0)
			Itest0->Load("grafika\\" + testtab[0] + ".png");
		else Itest0->Visible = false;
		if (testindex > 1) {
			Itest1->Load("grafika\\" + testtab[1] + ".png");
			Itest1->Visible = true;
		}
		else Itest1->Visible = false;
		if (testindex > 2) {
			Itest2->Load("grafika\\" + testtab[2] + ".png");
			Itest2->Visible = true;
		}
		else Itest2->Visible = false;
		if (testindex > 3) {
			Itest3->Load("grafika\\" + testtab[3] + ".png");
			Itest3->Visible = true;
		}
		else Itest3->Visible = false;
		if (testindex > 4) {
			Itest4->Load("grafika\\" + testtab[4] + ".png");
			Itest4->Visible = true;
		}
		else Itest4->Visible = false;
		if (testindex > 5) {
			Itest5->Load("grafika\\" + testtab[5] + ".png");
			Itest5->Visible = true;
		}
		else Itest5->Visible = false;
		if (testindex > 6) {
			Itest6->Load("grafika\\" + testtab[6] + ".png");
			Itest6->Visible = true;
		}
		else Itest6->Visible = false;
		if (testindex > 7) {
			Itest7->Load("grafika\\" + testtab[7] + ".png");
			Itest7->Visible = true;
		}
		else Itest7->Visible = false;
		if (testindex > 8) {
			Itest8->Load("grafika\\" + testtab[8] + ".png");
			Itest8->Visible = true;
		}
		else Itest8->Visible = false;
		if (testindex > 9) {
			Itest9->Load("grafika\\" + testtab[9] + ".png");
			Itest9->Visible = true;
		}
		else Itest9->Visible = false;
	}

	System::Void MyForm::Temployees_Tick(System::Object^  sender, System::EventArgs^  e) {
		//praca pomocników oraz testowanie i cykl
		if (testprogress == 5) {
			test += testfactor;
			if (test > code) test = code;
			Iprogress0->Visible = false;
			Iprogress1->Visible = false;
			Iprogress2->Visible = false;
			Iprogress3->Visible = false;
			refreshtested();
			testprogress = 0;
			Btest->Enabled = true;
			testing = false;
		}
		if (testing) {
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
		if (cycle == 300) {
			Icycle0->BackColor = System::Drawing::Color::Orange;
			Lcycle->Visible = true;
			if (cash - (15 * (code - test)) >= 0)cash -= 15 * (code - test);
			else cash = 0;
			refresh();
			cycle = 0;
			if (employees[3]->isHired) {
				if (cash - employees[3]->factor * 5 > 0) {
					cash -= employees[3]->factor * 5;
					Lpoor->Visible = false;
					Phireds[3]->Load("grafika\\testermini.png");
					Ldeterminated->Visible = false;
					Llazy->Visible = false;
				}
				else {
					((EmployeePoor^)(employees[3]))->poor = true;
					Lpoor->Visible = true;
					Phireds[3]->Load("grafika\\testerminipoor.png");
					Ldeterminated->Visible = false;
					Llazy->Visible = false;
				}
			}
		}
		else cycle++;
		if (cycle == 5) {
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


		for (int i = 0; i < employeesCount; i++)
		{
			if (employees[i]->progress == employees[i]->speed)
			{
				if (i != 3 || !((EmployeePoor^)(employees[3]))->poor) //TODO razem z tym wy¿ej metoda, dla employeePoor bêdzie nadpisana. Tak samo dla tych ni¿ej zrobiæ metody ró¿ne nadpisane dla ró¿nej klasy [KSZ]
				{
					employees[i]->progress = 0;

					if (i == 0 || i == 1)
					{
						code += employees[i]->factor;
						cash += ((employees[i]->factor *cashfactor) / 2);
					}

					if (i == 2)
					{
						Labsent->Visible = false;
						Ltrans->Visible = false;
						Phireds[2]->Load("grafika\\programista4mini.png");
					}

					if (i == 1)
					{
						if (((EmployeePremium^)(employees[1]))->premium >= 15 && cash >= 10) {
							cash -= 10;
							Lpremium->Visible = true;
							Phireds[1]->Load("grafika\\programista3minipremium.png");
							((EmployeePremium^)(employees[1]))->premium = 0;
							refresh();
						}
						else {
							((EmployeePremium^)(employees[1]))->premium++;
							Lpremium->Visible = false;
							Phireds[1]->Load("grafika\\programista3mini.png");
						}
					}
					else if (i == 2)
					{
						if (((EmployeeCycle^)(employees[2]))->cycle % 3 == 0) {
							Labsent->Visible = true;
							Phireds[2]->Load("grafika\\programista4miniabsent.png");
						}
						else {
							if (((EmployeeCycle^)(employees[2]))->cycle % 5 == 0) {
								Ltrans->Visible = true;
								Phireds[2]->Load("grafika\\programista4minitrans.png");
								code += employees[2]->factor * 2;
								cash += (employees[2]->factor*cashfactor);
							}
						}
						if (((EmployeeCycle^)(employees[2]))->cycle == 100)
							((EmployeeCycle^)(employees[2]))->cycle = 0;
						else
							((EmployeeCycle^)(employees[2]))->cycle++;
						if (((EmployeeCycle^)(employees[2]))->cycle % 5 != 0 && ((EmployeeCycle^)(employees[2]))->cycle % 3 != 0) {
							code += ((EmployeeCycle^)(employees[2]))->cycle;
							cash += ((employees[2]->factor*cashfactor) / 2);
						}
					}
					else if (i == 3)
					{
						if (cycle < 100) {
							test += employees[3]->factor / 2;
							Llazy->Visible = true;
							Phireds[3]->Load("grafika\\testerminilazy.png");
						}
						else if (cycle < 250) {
							test += employees[3]->factor;
							Llazy->Visible = false;
							Ldeterminated->Visible = false;
							Phireds[3]->Load("grafika\\testermini.png");
						}
						else {
							test += employees[3]->factor * 10;
							Ldeterminated->Visible = true;
							Phireds[3]->Load("grafika\\testerminidetermined.png");
						}
					}

					if (i == 3)
					{
						if (test > code)
							test = code;
					}

					if (i == 0 || i == 1)
						refresh();
					if (i == 2)
						refreshtested();
				}
			}

			if (employees[i]->isHired)
				if (i != 3 || !((EmployeePoor^)(employees[3]))->poor)
					employees[i]->progress++;
		}

	}

	System::Void MyForm::Btest_Click(System::Object^  sender, System::EventArgs^  e) {
		//klikniêcie przycisku testowania
		if (test < code) {
			Ltest->Visible = false;
			testing = true;
			Btest->Enabled = false;
		}
		else Ltest->Visible = true;
	}

	System::Void MyForm::Bupgrade_Click(System::Object^  sender, System::EventArgs^  e) {
		//otwarcie formatki z ulepszeniami firmy
		upgradefirm^ firmdialog = gcnew upgradefirm;
		firmdialog->ShowDialog();
	}

}