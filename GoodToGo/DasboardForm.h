#pragma once
#include "User.h"

namespace GoodToGo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DasboardForm
	/// </summary>
	public ref class DasboardForm : public System::Windows::Forms::Form
	{
	public:
		DasboardForm(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbUserinfo->Text = "ID=" + user->id + ", Name = " +user ->Full_Name +
				", email = " + user->Email_Address +", address = "+ user->Delivery_Address;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DasboardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbUserinfo;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserinfo = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1121, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &DasboardForm::label1_Click);
			// 
			// lbUserinfo
			// 
			this->lbUserinfo->AutoSize = true;
			this->lbUserinfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserinfo->Location = System::Drawing::Point(276, 124);
			this->lbUserinfo->Name = L"lbUserinfo";
			this->lbUserinfo->Size = System::Drawing::Size(102, 37);
			this->lbUserinfo->TabIndex = 1;
			this->lbUserinfo->Text = L"label2";
			this->lbUserinfo->Click += gcnew System::EventHandler(this, &DasboardForm::lbUserinfo_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(239, 677);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// DasboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1174, 677);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->lbUserinfo);
			this->Controls->Add(this->label1);
			this->Name = L"DasboardForm";
			this->Text = L"DasboardForm";
			this->Load += gcnew System::EventHandler(this, &DasboardForm::DasboardForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DasboardForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserinfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
