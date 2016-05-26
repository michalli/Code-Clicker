#pragma once

namespace CodeClicker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o fanfare
	/// </summary>
	public ref class fanfare : public System::Windows::Forms::Form
	{
	public:
		fanfare(void)
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
		~fanfare()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Pfanfare;
	private: System::Windows::Forms::PictureBox^  Bback;

	private: System::Windows::Forms::Label^  Lcongratulations;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(fanfare::typeid));
			this->Pfanfare = (gcnew System::Windows::Forms::PictureBox());
			this->Bback = (gcnew System::Windows::Forms::PictureBox());
			this->Lcongratulations = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pfanfare))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
			this->SuspendLayout();
			// 
			// Pfanfare
			// 
			this->Pfanfare->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pfanfare.Image")));
			this->Pfanfare->Location = System::Drawing::Point(8, 60);
			this->Pfanfare->Name = L"Pfanfare";
			this->Pfanfare->Size = System::Drawing::Size(577, 316);
			this->Pfanfare->TabIndex = 0;
			this->Pfanfare->TabStop = false;
			// 
			// Bback
			// 
			this->Bback->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bback->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bback.Image")));
			this->Bback->Location = System::Drawing::Point(232, 385);
			this->Bback->Name = L"Bback";
			this->Bback->Size = System::Drawing::Size(143, 67);
			this->Bback->TabIndex = 1;
			this->Bback->TabStop = false;
			this->Bback->Click += gcnew System::EventHandler(this, &fanfare::Bback_Click);
			// 
			// Lcongratulations
			// 
			this->Lcongratulations->AutoSize = true;
			this->Lcongratulations->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Lcongratulations->Location = System::Drawing::Point(38, 22);
			this->Lcongratulations->Name = L"Lcongratulations";
			this->Lcongratulations->Size = System::Drawing::Size(521, 25);
			this->Lcongratulations->TabIndex = 2;
			this->Lcongratulations->Text = L"Uda³o Ci siê zarobiæ pierwszy milion! Gratulacje!";
			// 
			// fanfare
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(107)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)));
			this->ClientSize = System::Drawing::Size(594, 472);
			this->Controls->Add(this->Lcongratulations);
			this->Controls->Add(this->Bback);
			this->Controls->Add(this->Pfanfare);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"fanfare";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gratulacje!!!";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pfanfare))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bback_Click(System::Object^  sender, System::EventArgs^  e) {
				 //zamkniêcie formatki
				 this->Close();
	}
};
}
