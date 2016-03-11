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
		}
		
		int passedcash;

		void check(bool e1,bool e2){
			if (passedcash >= 100 && !e1 )Bhire1->Visible = true;
			if (passedcash >= 400 && !e2 )Bhire2->Visible = true;
		}

		bool getemployee1(){
			return employee1;
		}
		bool getemployee2(){
			return employee2;
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
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

	protected:


	private:
		bool employee1;
		bool employee2;
		int paid;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(hire::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(64, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 135);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(64, 222);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(200, 135);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// Bhire1
			// 
			this->Bhire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bhire1.Image")));
			this->Bhire1->Location = System::Drawing::Point(573, 86);
			this->Bhire1->Name = L"Bhire1";
			this->Bhire1->Size = System::Drawing::Size(154, 84);
			this->Bhire1->TabIndex = 3;
			this->Bhire1->TabStop = false;
			this->Bhire1->Visible = false;
			this->Bhire1->Click += gcnew System::EventHandler(this, &hire::Bhire1_Click);
			// 
			// Bhire2
			// 
			this->Bhire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bhire2.Image")));
			this->Bhire2->Location = System::Drawing::Point(573, 240);
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
			this->L1name->Location = System::Drawing::Point(291, 66);
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
			this->L2name->Location = System::Drawing::Point(292, 222);
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
			this->L1role->Location = System::Drawing::Point(294, 114);
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
			this->L2role->Location = System::Drawing::Point(294, 269);
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
			this->L1cost->Location = System::Drawing::Point(295, 155);
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
			this->L1upkeep->Location = System::Drawing::Point(295, 170);
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
			this->L2upkeep->Location = System::Drawing::Point(295, 313);
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
			this->L2cost->Location = System::Drawing::Point(295, 298);
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
			this->L2premium->Location = System::Drawing::Point(295, 328);
			this->L2premium->Name = L"L2premium";
			this->L2premium->Size = System::Drawing::Size(102, 15);
			this->L2premium->TabIndex = 13;
			this->L2premium->Text = L"mo¿e ¿¹daæ premii";
			// 
			// hire
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(794, 572);
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
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"hire";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wynajem";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhire2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
protected: System::Void Bhire1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //wynajem pomocnika nr 1			 
			 if (passedcash >= 100){
				 paid += 100; 
				 employee1 = true;
				 Bhire1->Visible = false;		
			 }
}
private: System::Void Bhire2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //wynajem pomocnika nr 2	
			 if (passedcash >= 400){
				 paid += 400;
				 employee2 = true;
				 Bhire2->Visible = false;
			 }
}
};
}