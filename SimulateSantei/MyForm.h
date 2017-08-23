//#pragma once
#include <iostream>
#include "SanteiOrder.h"
#include "SanteiHWND.h"
#include "SimulateKeyboard.h"
#include "SanteiSim.h"

namespace Transparency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			InitializeTextBoxes();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_start;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textbox_test;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  BT_RTL;
	private: System::Windows::Forms::Button^  BT_RTR;
	private: System::Windows::Forms::Button^  BT_Submit;
	private: System::Windows::Forms::Button^  BT_Sb_Lg;
	private: System::Windows::Forms::Button^  BT_Pause;
	private: System::Windows::Forms::PictureBox^  Panel_Image;

	private: System::Windows::Forms::Panel^  Panel_Batch;
	private: System::Windows::Forms::Panel^  Panel_ID;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	private:
		cli::array<System::Windows::Forms::TextBox^>^ TextBoxes;
		cli::array<System::String^>^ OldTexts;
		///
		/// Function InitializeTextBoxes: keep code out of pragma region Designer
		///
	private: void InitializeTextBoxes(void) {
		this->TextBoxes = gcnew cli::array<System::Windows::Forms::TextBox^>(TEXTBOXES_COUNT);
		this->OldTexts = gcnew cli::array<System::String^>(TEXTBOXES_COUNT);

		for (int i = 0; i < TEXTBOXES_COUNT; i++) {
			this->TextBoxes[i] = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxes[i]->Location = System::Drawing::Point(1, 1);
			this->TextBoxes[i]->Name = GetTextBoxName(i);
			this->TextBoxes[i]->Size = System::Drawing::Size(80, 20);
			//this->textbox_test->TabIndex = 3;

			this->TextBoxes[i]->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxTextChanged);
			this->TextBoxes[i]->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textbox_test_KeyDown);
			this->TextBoxes[i]->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::NumberOnly_KeyPressed);

			this->Controls->Add(TextBoxes[i]);
		}

		for (int i = 0; i < TEXTBOXES_COUNT; i++) {
			this->OldTexts[i] = System::String::Empty;
		}
	}

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->bt_start = (gcnew System::Windows::Forms::Button());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->textbox_test = (gcnew System::Windows::Forms::TextBox());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->BT_RTL = (gcnew System::Windows::Forms::Button());
				 this->BT_RTR = (gcnew System::Windows::Forms::Button());
				 this->BT_Submit = (gcnew System::Windows::Forms::Button());
				 this->BT_Sb_Lg = (gcnew System::Windows::Forms::Button());
				 this->BT_Pause = (gcnew System::Windows::Forms::Button());
				 this->Panel_Image = (gcnew System::Windows::Forms::PictureBox());
				 this->Panel_Batch = (gcnew System::Windows::Forms::Panel());
				 this->Panel_ID = (gcnew System::Windows::Forms::Panel());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Panel_Image))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // bt_start
				 // 
				 this->bt_start->Location = System::Drawing::Point(999, 365);
				 this->bt_start->Name = L"bt_start";
				 this->bt_start->Size = System::Drawing::Size(75, 23);
				 this->bt_start->TabIndex = 0;
				 this->bt_start->Text = L"Start";
				 this->bt_start->UseVisualStyleBackColor = true;
				 this->bt_start->Click += gcnew System::EventHandler(this, &MyForm::bt_start_Click);
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(1000, 394);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(75, 23);
				 this->button2->TabIndex = 1;
				 this->button2->Text = L"button2";
				 this->button2->UseVisualStyleBackColor = true;
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(1000, 423);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(75, 23);
				 this->button3->TabIndex = 2;
				 this->button3->Text = L"button3";
				 this->button3->UseVisualStyleBackColor = true;
				 // 
				 // textbox_test
				 // 
				 this->textbox_test->Location = System::Drawing::Point(1000, 282);
				 this->textbox_test->Name = L"textbox_test";
				 this->textbox_test->Size = System::Drawing::Size(80, 20);
				 this->textbox_test->TabIndex = 3;
				 this->textbox_test->TextChanged += gcnew System::EventHandler(this, &MyForm::textbox_test_TextChanged);
				 this->textbox_test->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textbox_test_KeyDown);

				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(999, 320);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(80, 20);
				 this->textBox1->TabIndex = 4;
				 // 
				 // BT_RTL
				 // 
				 this->BT_RTL->Location = System::Drawing::Point(638, 46);
				 this->BT_RTL->Name = L"BT_RTL";
				 this->BT_RTL->Size = System::Drawing::Size(75, 23);
				 this->BT_RTL->TabIndex = 115;
				 this->BT_RTL->Text = L"Rotate left";
				 this->BT_RTL->UseVisualStyleBackColor = true;
				 // 
				 // BT_RTR
				 // 
				 this->BT_RTR->Location = System::Drawing::Point(739, 46);
				 this->BT_RTR->Name = L"BT_RTR";
				 this->BT_RTR->Size = System::Drawing::Size(75, 23);
				 this->BT_RTR->TabIndex = 116;
				 this->BT_RTR->Text = L"Rotate right";
				 this->BT_RTR->UseVisualStyleBackColor = true;
				 // 
				 // BT_Submit
				 // 
				 this->BT_Submit->Location = System::Drawing::Point(638, 88);
				 this->BT_Submit->Name = L"BT_Submit";
				 this->BT_Submit->Size = System::Drawing::Size(75, 23);
				 this->BT_Submit->TabIndex = 117;
				 this->BT_Submit->Text = L"Start";
				 this->BT_Submit->UseVisualStyleBackColor = true;
				 // 
				 // BT_Sb_Lg
				 // 
				 this->BT_Sb_Lg->Location = System::Drawing::Point(739, 87);
				 this->BT_Sb_Lg->Name = L"BT_Sb_Lg";
				 this->BT_Sb_Lg->Size = System::Drawing::Size(75, 23);
				 this->BT_Sb_Lg->TabIndex = 118;
				 this->BT_Sb_Lg->Text = L"Submit + Logout";
				 this->BT_Sb_Lg->UseVisualStyleBackColor = true;
				 // 
				 // BT_Pause
				 // 
				 this->BT_Pause->Location = System::Drawing::Point(854, 88);
				 this->BT_Pause->Name = L"BT_Pause";
				 this->BT_Pause->Size = System::Drawing::Size(75, 23);
				 this->BT_Pause->TabIndex = 119;
				 this->BT_Pause->Text = L"Pause (ESC)";
				 this->BT_Pause->UseVisualStyleBackColor = true;
				 // 
				 // Panel_Image
				 // 
				 this->Panel_Image->BackColor = System::Drawing::SystemColors::ActiveBorder;
				 this->Panel_Image->Location = System::Drawing::Point(638, 164);
				 this->Panel_Image->Name = L"Panel_Image";
				 this->Panel_Image->Size = System::Drawing::Size(291, 303);
				 this->Panel_Image->TabIndex = 120;
				 this->Panel_Image->TabStop = false;
				 // 
				 // Panel_Batch
				 // 
				 this->Panel_Batch->Location = System::Drawing::Point(638, 10);
				 this->Panel_Batch->Name = L"Panel_Batch";
				 this->Panel_Batch->Size = System::Drawing::Size(75, 20);
				 this->Panel_Batch->TabIndex = 121;
				 // 
				 // Panel_ID
				 // 
				 this->Panel_ID->Location = System::Drawing::Point(739, 9);
				 this->Panel_ID->Name = L"Panel_ID";
				 this->Panel_ID->Size = System::Drawing::Size(75, 20);
				 this->Panel_ID->TabIndex = 122;
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
				 this->ClientSize = System::Drawing::Size(1096, 583);
				 this->Controls->Add(this->Panel_ID);
				 this->Controls->Add(this->Panel_Batch);
				 this->Controls->Add(this->Panel_Image);
				 this->Controls->Add(this->BT_Pause);
				 this->Controls->Add(this->BT_Sb_Lg);
				 this->Controls->Add(this->BT_Submit);
				 this->Controls->Add(this->BT_RTR);
				 this->Controls->Add(this->BT_RTL);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->textbox_test);
				 this->Controls->Add(this->button3);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->bt_start);
				 this->KeyPreview = true;
				 this->Name = L"MyForm";
				 this->Opacity = 0.6;
				 this->Text = L"MyForm";
				 this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Panel_Image))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: System::Void bt_start_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textbox_test_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		std::cout << "Test text Changed\n";
	}
	private: System::Void textbox_test_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);
	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);
	private: System::Void TX_B1_1_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void TextBoxTextChanged(System::Object^  sender, System::EventArgs^  e) {
		std::cout << "Textbox text Changed\n";
		System::Windows::Forms::TextBox^ textbox = safe_cast<System::Windows::Forms::TextBox ^> (sender);
		if (textbox != nullptr) {
			System::String^ newtext = textbox->Text;
			System::String^ oldtext = this->OldTexts[GetTextBoxIndex(textbox->Name)];

			std::cout << "New text: " << SystemStringToStdString(newtext) << " - Oldtext: " << SystemStringToStdString(oldtext) << "\n";

			char dif = '!';//invalid
			if (newtext->Length > oldtext->Length) {
				dif = newtext[newtext->Length - 1];
			}
			else {
				dif = 8;//backspace
			}
			std::cout << "Difference: " << dif << std::endl;

			char buf[200];
			sprintf(buf, "%p", SanteiHWND.find(GetSanteiOrder(textbox->Name))->second);
			std::cout << "HWND: " << buf << std::endl;

			WriteCharacterCP(SanteiHWND.find(GetSanteiOrder(textbox->Name))->second, dif);

			this->OldTexts[GetTextBoxIndex(textbox->Name)] = newtext;
		}
		else {
			std::cout << "Error: Failt in conversion from Object to TextBox \n";
		}
	}

	private: System::Void NumberOnly_KeyPressed(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		e->Handled = !(System::Char::IsDigit(e->KeyChar)) && !(System::Char::IsControl(e->KeyChar));
	}
};//end class
}//end namespace

