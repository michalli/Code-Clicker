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

	private: System::Windows::Forms::PictureBox^  Bback;

			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
			 /// zawartoœæ tej metody z edytorem kodu.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(hire::typeid));
				 this->Bback = (gcnew System::Windows::Forms::PictureBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->BeginInit();
				 this->SuspendLayout();
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
				 // hire
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::Blue;
				 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->ClientSize = System::Drawing::Size(794, 672);
				 this->Controls->Add(this->Bback);
				 this->DoubleBuffered = true;
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->MaximizeBox = false;
				 this->Name = L"hire";
				 this->ShowIcon = false;
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Wynajem";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bback))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: System::Void Bback_Click(System::Object^  sender, System::EventArgs^  e) {
		//przycisk wstecz
		this->Hide();
	}

	};
}
