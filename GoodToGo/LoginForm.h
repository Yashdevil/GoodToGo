#pragma once
#include "User.h"

namespace GoodToGo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TbEmail_Login;
	private: System::Windows::Forms::TextBox^ TbPassword_Login;




	private: System::Windows::Forms::Label^ txtpassword;
	private: System::Windows::Forms::CheckBox^ CheckbxShowPas;
	private: System::Windows::Forms::Button^ BtnLogin;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ BtnCancle;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;





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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TbEmail_Login = (gcnew System::Windows::Forms::TextBox());
			this->TbPassword_Login = (gcnew System::Windows::Forms::TextBox());
			this->txtpassword = (gcnew System::Windows::Forms::Label());
			this->CheckbxShowPas = (gcnew System::Windows::Forms::CheckBox());
			this->BtnLogin = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BtnCancle = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->label1->Location = System::Drawing::Point(36, 41);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome Back";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// TbEmail_Login
			// 
			this->TbEmail_Login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->TbEmail_Login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TbEmail_Login->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbEmail_Login->Location = System::Drawing::Point(42, 132);
			this->TbEmail_Login->Multiline = true;
			this->TbEmail_Login->Name = L"TbEmail_Login";
			this->TbEmail_Login->Size = System::Drawing::Size(257, 36);
			this->TbEmail_Login->TabIndex = 2;
			// 
			// TbPassword_Login
			// 
			this->TbPassword_Login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->TbPassword_Login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TbPassword_Login->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbPassword_Login->Location = System::Drawing::Point(42, 222);
			this->TbPassword_Login->Multiline = true;
			this->TbPassword_Login->Name = L"TbPassword_Login";
			this->TbPassword_Login->PasswordChar = '*';
			this->TbPassword_Login->Size = System::Drawing::Size(257, 36);
			this->TbPassword_Login->TabIndex = 4;
			// 
			// txtpassword
			// 
			this->txtpassword->AutoSize = true;
			this->txtpassword->Location = System::Drawing::Point(37, 191);
			this->txtpassword->Name = L"txtpassword";
			this->txtpassword->Size = System::Drawing::Size(100, 28);
			this->txtpassword->TabIndex = 3;
			this->txtpassword->Text = L"Password";
			// 
			// CheckbxShowPas
			// 
			this->CheckbxShowPas->AutoSize = true;
			this->CheckbxShowPas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CheckbxShowPas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CheckbxShowPas->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckbxShowPas->Location = System::Drawing::Point(146, 263);
			this->CheckbxShowPas->Name = L"CheckbxShowPas";
			this->CheckbxShowPas->Size = System::Drawing::Size(163, 29);
			this->CheckbxShowPas->TabIndex = 5;
			this->CheckbxShowPas->Text = L"Show Password";
			this->CheckbxShowPas->UseVisualStyleBackColor = true;
			this->CheckbxShowPas->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::checkBox1_CheckedChanged);
			// 
			// BtnLogin
			// 
			this->BtnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->BtnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnLogin->ForeColor = System::Drawing::Color::White;
			this->BtnLogin->Location = System::Drawing::Point(42, 323);
			this->BtnLogin->Name = L"BtnLogin";
			this->BtnLogin->Size = System::Drawing::Size(257, 41);
			this->BtnLogin->TabIndex = 6;
			this->BtnLogin->Text = L"LOGIN";
			this->BtnLogin->UseVisualStyleBackColor = false;
			this->BtnLogin->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(71, 451);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Don\'t Have an Account";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::label3_Click);
			// 
			// BtnCancle
			// 
			this->BtnCancle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->BtnCancle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtnCancle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnCancle->ForeColor = System::Drawing::Color::White;
			this->BtnCancle->Location = System::Drawing::Point(42, 386);
			this->BtnCancle->Name = L"BtnCancle";
			this->BtnCancle->Size = System::Drawing::Size(257, 41);
			this->BtnCancle->TabIndex = 9;
			this->BtnCancle->Text = L"CANCLE";
			this->BtnCancle->UseVisualStyleBackColor = false;
			this->BtnCancle->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold));
			this->linkLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->linkLabel1->Location = System::Drawing::Point(94, 476);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(143, 25);
			this->linkLabel1->TabIndex = 10;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Create Account";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(337, 551);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->BtnCancle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->BtnLogin);
			this->Controls->Add(this->CheckbxShowPas);
			this->Controls->Add(this->TbPassword_Login);
			this->Controls->Add(this->txtpassword);
			this->Controls->Add(this->TbEmail_Login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		public:User^ user = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->TbEmail_Login->Text;
		String^ password = this->TbPassword_Login->Text;

		if (email->Length == 0 || password->Length == 0) {
			if (email->Length == 0 && password->Length == 0) {
				MessageBox::Show("Please enter Email and Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (email->Length == 0) {
				MessageBox::Show("Please enter Email", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				MessageBox::Show("Please enter Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			return;
		}

		try {
			String^ ConnString = "Data Source=localhost\\sqlexpress;Initial Catalog=GoodToGo;Integrated Security=True ";
			SqlConnection sqlConn(ConnString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE Email_Address=@email AND Password=@pwd ";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd",password);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->Full_Name = reader->GetString(1);
				user->Email_Address = reader->GetString(2);
				user->Phone_Number = reader->GetString(3);
				user->Delivery_Address = reader->GetString(4);
				user->Password = reader->GetString(5);

				this->Close();

			}
			else {
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	public:bool switchToSignUp = false;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToSignUp= true;
	this->Close();
}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
