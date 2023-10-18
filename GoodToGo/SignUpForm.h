#pragma once
#include"User.h"

namespace GoodToGo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for SignUpForm
	/// </summary>
	public ref class SignUpForm : public System::Windows::Forms::Form
	{
	public:
		SignUpForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUpForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ BtnSignUp;

	private: System::Windows::Forms::CheckBox^ CheckbxShowPas;
	private: System::Windows::Forms::TextBox^ TbPassword_SignUp;




	private: System::Windows::Forms::Label^ txtpassword;
	private: System::Windows::Forms::TextBox^ TbFullName_SignUp;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TbEmail_SignUp;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TbPhoneNumber_SignUp;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TbRoomNumber_SignUp;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TbConfirmPassword_SignUp;

	private: System::Windows::Forms::Label^ TbConfirmPassword;
	private: System::Windows::Forms::LinkLabel^ llLogin;
	private: System::Windows::Forms::Button^ Btn_Cancle;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUpForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BtnSignUp = (gcnew System::Windows::Forms::Button());
			this->CheckbxShowPas = (gcnew System::Windows::Forms::CheckBox());
			this->TbPassword_SignUp = (gcnew System::Windows::Forms::TextBox());
			this->txtpassword = (gcnew System::Windows::Forms::Label());
			this->TbFullName_SignUp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TbEmail_SignUp = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TbPhoneNumber_SignUp = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TbRoomNumber_SignUp = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TbConfirmPassword_SignUp = (gcnew System::Windows::Forms::TextBox());
			this->TbConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->Btn_Cancle = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(80, 645);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(221, 25);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Alredy have an Account ";
			// 
			// BtnSignUp
			// 
			this->BtnSignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->BtnSignUp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtnSignUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnSignUp->ForeColor = System::Drawing::Color::White;
			this->BtnSignUp->Location = System::Drawing::Point(28, 590);
			this->BtnSignUp->Name = L"BtnSignUp";
			this->BtnSignUp->Size = System::Drawing::Size(310, 43);
			this->BtnSignUp->TabIndex = 15;
			this->BtnSignUp->Text = L"SIGNUP";
			this->BtnSignUp->UseVisualStyleBackColor = false;
			this->BtnSignUp->Click += gcnew System::EventHandler(this, &SignUpForm::BtnSignUp_Click);
			// 
			// CheckbxShowPas
			// 
			this->CheckbxShowPas->AutoSize = true;
			this->CheckbxShowPas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CheckbxShowPas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CheckbxShowPas->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckbxShowPas->Location = System::Drawing::Point(180, 543);
			this->CheckbxShowPas->Name = L"CheckbxShowPas";
			this->CheckbxShowPas->Size = System::Drawing::Size(163, 29);
			this->CheckbxShowPas->TabIndex = 14;
			this->CheckbxShowPas->Text = L"Show Password";
			this->CheckbxShowPas->UseVisualStyleBackColor = true;
			this->CheckbxShowPas->CheckedChanged += gcnew System::EventHandler(this, &SignUpForm::CheckbxShowPas_CheckedChanged);
			// 
			// TbPassword_SignUp
			// 
			this->TbPassword_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->TbPassword_SignUp->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TbPassword_SignUp->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbPassword_SignUp->Location = System::Drawing::Point(28, 430);
			this->TbPassword_SignUp->Multiline = true;
			this->TbPassword_SignUp->Name = L"TbPassword_SignUp";
			this->TbPassword_SignUp->PasswordChar = '*';
			this->TbPassword_SignUp->Size = System::Drawing::Size(310, 39);
			this->TbPassword_SignUp->TabIndex = 13;
			this->TbPassword_SignUp->TextChanged += gcnew System::EventHandler(this, &SignUpForm::textBox1_TextChanged);
			// 
			// txtpassword
			// 
			this->txtpassword->AutoSize = true;
			this->txtpassword->Location = System::Drawing::Point(23, 399);
			this->txtpassword->Name = L"txtpassword";
			this->txtpassword->Size = System::Drawing::Size(100, 28);
			this->txtpassword->TabIndex = 12;
			this->txtpassword->Text = L"Password";
			this->txtpassword->Click += gcnew System::EventHandler(this, &SignUpForm::txtpassword_Click);
			// 
			// TbFullName_SignUp
			// 
			this->TbFullName_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->TbFullName_SignUp->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TbFullName_SignUp->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbFullName_SignUp->Location = System::Drawing::Point(28, 122);
			this->TbFullName_SignUp->Multiline = true;
			this->TbFullName_SignUp->Name = L"TbFullName_SignUp";
			this->TbFullName_SignUp->Size = System::Drawing::Size(310, 39);
			this->TbFullName_SignUp->TabIndex = 11;
			this->TbFullName_SignUp->TextChanged += gcnew System::EventHandler(this, &SignUpForm::txtemail_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 28);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Full Name";
			this->label2->Click += gcnew System::EventHandler(this, &SignUpForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->label1->Location = System::Drawing::Point(21, 29);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 40);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Get Started";
			// 
			// TbEmail_SignUp
			// 
			this->TbEmail_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->TbEmail_SignUp->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TbEmail_SignUp->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbEmail_SignUp->Location = System::Drawing::Point(28, 196);
			this->TbEmail_SignUp->Multiline = true;
			this->TbEmail_SignUp->Name = L"TbEmail_SignUp";
			this->TbEmail_SignUp->Size = System::Drawing::Size(310, 39);
			this->TbEmail_SignUp->TabIndex = 21;
			this->TbEmail_SignUp->TextChanged += gcnew System::EventHandler(this, &SignUpForm::textBox3_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 28);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Email";
			this->label6->Click += gcnew System::EventHandler(this, &SignUpForm::label6_Click);
			// 
			// TbPhoneNumber_SignUp
			// 
			this->TbPhoneNumber_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->TbPhoneNumber_SignUp->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TbPhoneNumber_SignUp->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbPhoneNumber_SignUp->Location = System::Drawing::Point(28, 274);
			this->TbPhoneNumber_SignUp->Multiline = true;
			this->TbPhoneNumber_SignUp->Name = L"TbPhoneNumber_SignUp";
			this->TbPhoneNumber_SignUp->Size = System::Drawing::Size(310, 39);
			this->TbPhoneNumber_SignUp->TabIndex = 23;
			this->TbPhoneNumber_SignUp->TextChanged += gcnew System::EventHandler(this, &SignUpForm::textBox4_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 28);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Phone Number";
			this->label7->Click += gcnew System::EventHandler(this, &SignUpForm::label7_Click);
			// 
			// TbRoomNumber_SignUp
			// 
			this->TbRoomNumber_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->TbRoomNumber_SignUp->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TbRoomNumber_SignUp->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbRoomNumber_SignUp->Location = System::Drawing::Point(28, 352);
			this->TbRoomNumber_SignUp->Multiline = true;
			this->TbRoomNumber_SignUp->Name = L"TbRoomNumber_SignUp";
			this->TbRoomNumber_SignUp->Size = System::Drawing::Size(310, 39);
			this->TbRoomNumber_SignUp->TabIndex = 25;
			this->TbRoomNumber_SignUp->TextChanged += gcnew System::EventHandler(this, &SignUpForm::textBox5_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 321);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(149, 28);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Room Number";
			this->label8->Click += gcnew System::EventHandler(this, &SignUpForm::label8_Click);
			// 
			// TbConfirmPassword_SignUp
			// 
			this->TbConfirmPassword_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->TbConfirmPassword_SignUp->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TbConfirmPassword_SignUp->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbConfirmPassword_SignUp->Location = System::Drawing::Point(28, 503);
			this->TbConfirmPassword_SignUp->Multiline = true;
			this->TbConfirmPassword_SignUp->Name = L"TbConfirmPassword_SignUp";
			this->TbConfirmPassword_SignUp->PasswordChar = '*';
			this->TbConfirmPassword_SignUp->Size = System::Drawing::Size(310, 39);
			this->TbConfirmPassword_SignUp->TabIndex = 27;
			// 
			// TbConfirmPassword
			// 
			this->TbConfirmPassword->AutoSize = true;
			this->TbConfirmPassword->Location = System::Drawing::Point(23, 472);
			this->TbConfirmPassword->Name = L"TbConfirmPassword";
			this->TbConfirmPassword->Size = System::Drawing::Size(182, 28);
			this->TbConfirmPassword->TabIndex = 26;
			this->TbConfirmPassword->Text = L"Confirm Password";
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->llLogin->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->llLogin->Location = System::Drawing::Point(115, 669);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(136, 25);
			this->llLogin->TabIndex = 28;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Back to LOGIN";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SignUpForm::llLogin_LinkClicked);
			// 
			// Btn_Cancle
			// 
			this->Btn_Cancle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Btn_Cancle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Cancle.BackgroundImage")));
			this->Btn_Cancle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Btn_Cancle->Location = System::Drawing::Point(326, 12);
			this->Btn_Cancle->Name = L"Btn_Cancle";
			this->Btn_Cancle->Size = System::Drawing::Size(36, 35);
			this->Btn_Cancle->TabIndex = 29;
			this->Btn_Cancle->UseVisualStyleBackColor = false;
			this->Btn_Cancle->Click += gcnew System::EventHandler(this, &SignUpForm::Btn_Cancle_Click);
			// 
			// SignUpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(374, 745);
			this->Controls->Add(this->Btn_Cancle);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->TbConfirmPassword_SignUp);
			this->Controls->Add(this->TbConfirmPassword);
			this->Controls->Add(this->TbRoomNumber_SignUp);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TbPhoneNumber_SignUp);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TbEmail_SignUp);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->BtnSignUp);
			this->Controls->Add(this->CheckbxShowPas);
			this->Controls->Add(this->TbPassword_SignUp);
			this->Controls->Add(this->txtpassword);
			this->Controls->Add(this->TbFullName_SignUp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SignUpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignUpForm";
			this->Load += gcnew System::EventHandler(this, &SignUpForm::SignUpForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SignUpForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CheckbxShowPas_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtpassword_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btn_Cancle_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	public: bool switchToLogin = false;
private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}
	public:User^ user = nullptr;
private: System::Void BtnSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Full_Name = TbFullName_SignUp->Text;
	String^ Email_Address = TbEmail_SignUp->Text;
	String^ Phone_Number = TbPhoneNumber_SignUp->Text;
	String^ Delivery_Address = TbRoomNumber_SignUp->Text;
	String^ Password = TbPassword_SignUp->Text;
	String^ confirmPassword = TbConfirmPassword_SignUp->Text;

	if (Full_Name->Length == 0 || Email_Address->Length == 0
		|| Phone_Number->Length == 0 || Delivery_Address->Length == 0
		|| Password->Length == 0) {
	MessageBox::Show("Please enter all the fields",
		"On or more empty fields", MessageBoxButtons::OK);
	return;
	}
	if (String::Compare(Password, confirmPassword) != 0) {
		MessageBox::Show("Password and Confirm Password do not match",
			"Password Error", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ ConnString = "Data Source=localhost\\sqlexpress;Initial Catalog=GoodToGo;Integrated Security=True ";
		SqlConnection sqlConn(ConnString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users " +
			"(Full_Name, Email_Address, Phone_Number, Delivery_Address, Password) VALUES " +
			"(@name, @email, @phone, @address, @password);";
			SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name",Full_Name);
		command.Parameters->AddWithValue("@email", Email_Address);
		command.Parameters->AddWithValue("@phone", Phone_Number);
		command.Parameters->AddWithValue("@address", Delivery_Address);
		command.Parameters->AddWithValue("@password",Password);

		command.ExecuteNonQuery();

		user = gcnew User;
		user->Full_Name = Full_Name;
		user->Email_Address = Email_Address;
		user->Phone_Number = Phone_Number;
		user->Delivery_Address = Delivery_Address;
		user->Password = Password;

		this->Close();

	}
	catch (Exception^ ex){
	MessageBox::Show("Failed to register new user",
		"Register Failure", MessageBoxButtons::OK);
	}

}
};
}
