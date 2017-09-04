//#pragma once
#include <iostream>
#include "SanteiOrder.h"
#include "SanteiHWND.h"
#include "SimulateKeyboard.h"
#include "SimulateMouse.h"
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

	protected:

	protected:





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
		///
		/// Button
		///
		cli::array<System::Windows::Forms::Button^>^ Buttons;
	private:
		void InitializeButtons(void) {
			this->Buttons = gcnew cli::array<System::Windows::Forms::Button^>(BUTTONS_COUNT);
			for (int i = 0; i < BUTTONS_COUNT; i++) {
				this->Buttons[i] = gcnew System::Windows::Forms::Button();

			}
		}

		cli::array<System::Windows::Forms::TextBox^>^ TextBoxes;
	private: System::Windows::Forms::TextBox^  textBox1;
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

			//this->TextBoxes[i]->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox_TextChanged);
			//this->TextBoxes[i]->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textbox_test_KeyDown);
			this->TextBoxes[i]->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPressed);
			this->TextBoxes[i]->Enter += gcnew System::EventHandler(this, &MyForm::TextBox_Enter);
			//this->TextBoxes[i]->Click += gcnew System::EventHandler(this, &MyForm::TextBox_Click);

			this->TextBoxes[i]->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TextBox_MouseClick);
			this->TextBoxes[i]->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TextBox_MouseDoubleClick);

			this->TextBoxes[i]->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::TextBox_KeyDown);
			this->TextBoxes[i]->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::TextBox_KeyUp);


			if (GetTextBoxName(i)->Remove(0, 7) == L"2") {
				this->TextBoxes[i]->MaxLength = 1;
			}
			if (GetTextBoxName(i)->Remove(0, 7) == L"8" ||
				GetTextBoxName(i)->Remove(0, 7) == L"9" ||
				GetTextBoxName(i)->Remove(0, 7) == L"10" ||
				GetTextBoxName(i)->Remove(0, 7) == L"11" ||
				GetTextBoxName(i)->Remove(0, 7) == L"16" ||
				GetTextBoxName(i)->Remove(0, 7) == L"17" ||
				GetTextBoxName(i)->Remove(0, 7) == L"18" ||
				GetTextBoxName(i)->Remove(0, 7) == L"19" ||
				GetTextBoxName(i)->Remove(0, 7) == L"20" ||
				GetTextBoxName(i)->Remove(0, 7) == L"23" ||
				GetTextBoxName(i)->Remove(0, 7) == L"24" ||
				GetTextBoxName(i)->Remove(0, 7) == L"25" ||
				GetTextBoxName(i)->Remove(0, 7) == L"13") {
				this->TextBoxes[i]->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			}
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
				 this->BT_RTL = (gcnew System::Windows::Forms::Button());
				 this->BT_RTR = (gcnew System::Windows::Forms::Button());
				 this->BT_Submit = (gcnew System::Windows::Forms::Button());
				 this->BT_Sb_Lg = (gcnew System::Windows::Forms::Button());
				 this->BT_Pause = (gcnew System::Windows::Forms::Button());
				 this->Panel_Image = (gcnew System::Windows::Forms::PictureBox());
				 this->Panel_Batch = (gcnew System::Windows::Forms::Panel());
				 this->Panel_ID = (gcnew System::Windows::Forms::Panel());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Panel_Image))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // BT_RTL
				 // 
				 this->BT_RTL->Location = System::Drawing::Point(638, 46);
				 this->BT_RTL->Name = L"BT_RTL";
				 this->BT_RTL->Size = System::Drawing::Size(75, 23);
				 this->BT_RTL->TabIndex = 115;
				 this->BT_RTL->Text = L"Rotate left";
				 this->BT_RTL->UseVisualStyleBackColor = true;
				 this->BT_RTL->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
				 this->BT_RTL->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Button_MouseDown);
				 this->BT_RTL->MouseEnter += gcnew System::EventHandler(this, &MyForm::Button_MouseEnter);
				 this->BT_RTL->MouseLeave += gcnew System::EventHandler(this, &MyForm::Button_MouseLeave);
				 this->BT_RTL->MouseHover += gcnew System::EventHandler(this, &MyForm::Button_MouseHover);
				 this->BT_RTL->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Button_MouseUp);
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
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(308, 87);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(100, 20);
				 this->textBox1->TabIndex = 123;
				 
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
				 this->ClientSize = System::Drawing::Size(1096, 583);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->Panel_ID);
				 this->Controls->Add(this->Panel_Batch);
				 this->Controls->Add(this->Panel_Image);
				 this->Controls->Add(this->BT_Pause);
				 this->Controls->Add(this->BT_Sb_Lg);
				 this->Controls->Add(this->BT_Submit);
				 this->Controls->Add(this->BT_RTR);
				 this->Controls->Add(this->BT_RTL);
				 this->KeyPreview = true;
				 this->Name = L"MyForm";
				 this->Text = L"MyForm";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Panel_Image))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: System::Void TextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
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

	private: System::Void TextBox_KeyPressed(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		e->Handled = !(System::Char::IsDigit(e->KeyChar)) && !(System::Char::IsControl(e->KeyChar))
			&& !(e->KeyChar == '*') && !(e->KeyChar == ' ');
		//if (e->KeyCode == Keys::Enter) {
		//	//
		//	//Disable "Ding" sound
		//	//
		//	e->SuppressKeyPress = true;//dont pass key event to underlying control
		//}

	}
	private: System::Void TextBox_Enter(System::Object^  sender, System::EventArgs^  e) {
		std::cout << "Textbox get focus\n";
		System::Windows::Forms::TextBox^ textbox = safe_cast<System::Windows::Forms::TextBox ^> (sender);
		if (textbox != nullptr) {
			System::String^ buttonName = textbox->Name->Remove(0, 2)->Insert(0, L"BT");
			MakeLMClick(SanteiHWND.find(GetSanteiOrder(buttonName))->second, 1, 1);

			//
			//Select all if focus by keyboard
			//
			if (GetKeyState(VK_TAB) < 0 ||
				GetKeyState(VK_RETURN) < 0)
			{
				textbox->SelectAll();
			}

			//select all if focus by arrow.Implementation sequence.
			if (focus_by_arrow) {
				focus_by_arrow = false;
				textbox->SelectAll();
			}
		}
		else {
			std::cout << "Error: Failt in conversion from Object to TextBox \n";
		}
	}
	private: System::Void TextBox_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::TextBox^ textbox = safe_cast<System::Windows::Forms::TextBox ^> (sender);
		if (textbox != nullptr) {
			System::String^ buttonName = textbox->Name->Remove(0, 2)->Insert(0, L"BT");
			MakeLMClick(SanteiHWND.find(GetSanteiOrder(textbox->Name))->second, 1, 1);
		}
		else {
			std::cout << "Error: Failt in conversion from Object to TextBox \n";
		}
	}
	private: System::Void TextBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		System::Windows::Forms::TextBox^ textbox = safe_cast<System::Windows::Forms::TextBox ^> (sender);
		if (textbox != nullptr) {
			///
			///Not yet simulate up/down arrow key,so don't pass to santei
			///
			if (e->KeyCode == System::Windows::Forms::Keys::Up ||
				e->KeyCode == System::Windows::Forms::Keys::Down) {
				e->Handled = true;
			}
			else {
				PostMessage(SanteiHWND.find(GetSanteiOrder(textbox->Name))->second,
					WM_KEYDOWN, e->KeyValue, MakeLPARAM_WM_KEYDOWN_VK(e->KeyValue));
			}
		}
	}
			 bool focus_by_arrow = false;
	private: System::Void TextBox_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		System::Windows::Forms::TextBox^ textbox = safe_cast<System::Windows::Forms::TextBox ^> (sender);
		if (textbox != nullptr) {
			///
			///Not yet simulate up/down arrow key,so don't pass to santei
			///
			if (e->KeyCode == System::Windows::Forms::Keys::Up ||
				e->KeyCode == System::Windows::Forms::Keys::Down) {
				e->Handled = true;
			}else {
				PostMessage(SanteiHWND.find(GetSanteiOrder(textbox->Name))->second,
					WM_KEYUP, e->KeyValue, MakeLPARAM_WM_KEYUP_VK(e->KeyValue));
			} 
		}

		//
		//Make left/right arrow key like tab
		//
		if (e->KeyCode == Keys::Right) {
			focus_by_arrow = true;
			SelectNextControl(textbox, true, true, true, true);
		}
		if (e->KeyCode == Keys::Left) {
			focus_by_arrow = true;
			SelectNextControl(textbox, false, true, true, true);
		}
	}

	private: System::Void TextBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		System::Windows::Forms::TextBox^ textbox = safe_cast<System::Windows::Forms::TextBox ^> (sender);
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			MakeLMClick(SanteiHWND.find(GetSanteiOrder(textbox->Name))->second,
				e->X, e->Y);
		}
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			MakeRMClick(SanteiHWND.find(GetSanteiOrder(textbox->Name))->second,
				e->X, e->Y);
		}
	}
	private: System::Void TextBox_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		System::Windows::Forms::TextBox^ textbox = safe_cast<System::Windows::Forms::TextBox ^> (sender);
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			MakeLMDbClick(SanteiHWND.find(GetSanteiOrder(textbox->Name))->second,
				e->X, e->Y);
		}
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			MakeRMDbClick(SanteiHWND.find(GetSanteiOrder(textbox->Name))->second,
				e->X, e->Y);
		}
	}

	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	}

			 
	private: System::Void Button_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void Button_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void Button_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Button_MouseHover(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Button_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Button_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
};//end class
}//end namespace

