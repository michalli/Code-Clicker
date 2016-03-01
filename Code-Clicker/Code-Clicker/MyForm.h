#pragma once

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
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  Pmain;
	private: System::Windows::Forms::PictureBox^  Iavatar;
	private: System::Windows::Forms::Label^  Lcash;

	private: System::Windows::Forms::Label^  Lcode;

	private: System::Windows::Forms::Button^  Bhire;
	private: System::Windows::Forms::Button^  Bcode;
	private: System::Windows::Forms::ProgressBar^  PBprogress;
	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Pmain = (gcnew System::Windows::Forms::Panel());
			this->Bhire = (gcnew System::Windows::Forms::Button());
			this->Bcode = (gcnew System::Windows::Forms::Button());
			this->Lcode = (gcnew System::Windows::Forms::Label());
			this->Lcash = (gcnew System::Windows::Forms::Label());
			this->Iavatar = (gcnew System::Windows::Forms::PictureBox());
			this->PBprogress = (gcnew System::Windows::Forms::ProgressBar());
			this->Pmain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iavatar))->BeginInit();
			this->SuspendLayout();
			// 
			// Pmain
			// 
			this->Pmain->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Pmain->Controls->Add(this->Iavatar);
			this->Pmain->Controls->Add(this->Lcash);
			this->Pmain->Controls->Add(this->Lcode);
			this->Pmain->Controls->Add(this->Bhire);
			this->Pmain->Location = System::Drawing::Point(0, 2);
			this->Pmain->Name = L"Pmain";
			this->Pmain->Size = System::Drawing::Size(883, 122);
			this->Pmain->TabIndex = 0;
			// 
			// Bhire
			// 
			this->Bhire->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Bhire->Location = System::Drawing::Point(765, 3);
			this->Bhire->Name = L"Bhire";
			this->Bhire->Size = System::Drawing::Size(115, 115);
			this->Bhire->TabIndex = 0;
			this->Bhire->Text = L"Hire";
			this->Bhire->UseVisualStyleBackColor = true;
			// 
			// Bcode
			// 
			this->Bcode->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Bcode->Location = System::Drawing::Point(47, 149);
			this->Bcode->Name = L"Bcode";
			this->Bcode->Size = System::Drawing::Size(75, 56);
			this->Bcode->TabIndex = 1;
			this->Bcode->Text = L"Code";
			this->Bcode->UseVisualStyleBackColor = true;
			// 
			// Lcode
			// 
			this->Lcode->AutoSize = true;
			this->Lcode->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Lcode->Location = System::Drawing::Point(257, 27);
			this->Lcode->Name = L"Lcode";
			this->Lcode->Size = System::Drawing::Size(60, 23);
			this->Lcode->TabIndex = 1;
			this->Lcode->Text = L"Code:";
			// 
			// Lcash
			// 
			this->Lcash->AutoSize = true;
			this->Lcash->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Lcash->Location = System::Drawing::Point(257, 77);
			this->Lcash->Name = L"Lcash";
			this->Lcash->Size = System::Drawing::Size(57, 23);
			this->Lcash->TabIndex = 2;
			this->Lcash->Text = L"Cash:";
			// 
			// Iavatar
			// 
			this->Iavatar->BackColor = System::Drawing::SystemColors::Control;
			this->Iavatar->Location = System::Drawing::Point(0, 0);
			this->Iavatar->Name = L"Iavatar";
			this->Iavatar->Size = System::Drawing::Size(122, 122);
			this->Iavatar->TabIndex = 3;
			this->Iavatar->TabStop = false;
			// 
			// PBprogress
			// 
			this->PBprogress->Location = System::Drawing::Point(144, 163);
			this->PBprogress->Name = L"PBprogress";
			this->PBprogress->Size = System::Drawing::Size(168, 23);
			this->PBprogress->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(885, 373);
			this->Controls->Add(this->PBprogress);
			this->Controls->Add(this->Bcode);
			this->Controls->Add(this->Pmain);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Code-Clicker";
			this->Pmain->ResumeLayout(false);
			this->Pmain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Iavatar))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
