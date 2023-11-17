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
		DasboardForm(User^ user)
		{
			InitializeComponent();
			// Create a rounded rectangular region
			lbUserinfo->Text = user->Full_Name;
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

	private: System::Windows::Forms::Label^ lbUserinfo;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ BtnKathi;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ BtnMinimize;
	private: System::Windows::Forms::Button^ BtnExit;
	private: System::Windows::Forms::Label^ LbTime;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ LbDate;
	private: System::Windows::Forms::Button^ button1;


	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DasboardForm::typeid));
			this->lbUserinfo = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->BtnKathi = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->LbDate = (gcnew System::Windows::Forms::Label());
			this->LbTime = (gcnew System::Windows::Forms::Label());
			this->BtnExit = (gcnew System::Windows::Forms::Button());
			this->BtnMinimize = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbUserinfo
			// 
			this->lbUserinfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserinfo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->lbUserinfo->Location = System::Drawing::Point(66, 100);
			this->lbUserinfo->Name = L"lbUserinfo";
			this->lbUserinfo->Size = System::Drawing::Size(110, 25);
			this->lbUserinfo->TabIndex = 1;
			this->lbUserinfo->Text = L"User Name";
			this->lbUserinfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbUserinfo->Click += gcnew System::EventHandler(this, &DasboardForm::lbUserinfo_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->BtnKathi);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(239, 670);
			this->panel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(2, 609);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(251, 58);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Setting";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(13, 348);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(227, 52);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Maggi Hotspot";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(12, 290);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(227, 52);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Southern";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DasboardForm::button3_Click);
			// 
			// BtnKathi
			// 
			this->BtnKathi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->BtnKathi->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->BtnKathi->FlatAppearance->BorderSize = 0;
			this->BtnKathi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::WhiteSmoke;
			this->BtnKathi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->BtnKathi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnKathi->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold));
			this->BtnKathi->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->BtnKathi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnKathi.Image")));
			this->BtnKathi->Location = System::Drawing::Point(12, 174);
			this->BtnKathi->Name = L"BtnKathi";
			this->BtnKathi->Size = System::Drawing::Size(236, 52);
			this->BtnKathi->TabIndex = 1;
			this->BtnKathi->Text = L"Kathi";
			this->BtnKathi->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->BtnKathi->UseVisualStyleBackColor = true;
			this->BtnKathi->Click += gcnew System::EventHandler(this, &DasboardForm::BtnKathi_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(12, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L"M-block";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->lbUserinfo);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(239, 168);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(79, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(85, 85);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &DasboardForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1037, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel3->Controls->Add(this->LbDate);
			this->panel3->Controls->Add(this->LbTime);
			this->panel3->Controls->Add(this->BtnExit);
			this->panel3->Controls->Add(this->BtnMinimize);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(239, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1037, 45);
			this->panel3->TabIndex = 4;
			// 
			// LbDate
			// 
			this->LbDate->AutoSize = true;
			this->LbDate->Location = System::Drawing::Point(6, 1);
			this->LbDate->Name = L"LbDate";
			this->LbDate->Size = System::Drawing::Size(44, 20);
			this->LbDate->TabIndex = 5;
			this->LbDate->Text = L"Date";
			this->LbDate->Click += gcnew System::EventHandler(this, &DasboardForm::label1_Click_1);
			// 
			// LbTime
			// 
			this->LbTime->AutoSize = true;
			this->LbTime->Location = System::Drawing::Point(6, 21);
			this->LbTime->Name = L"LbTime";
			this->LbTime->Size = System::Drawing::Size(43, 20);
			this->LbTime->TabIndex = 5;
			this->LbTime->Text = L"Time";
			this->LbTime->Click += gcnew System::EventHandler(this, &DasboardForm::Time_Click);
			// 
			// BtnExit
			// 
			this->BtnExit->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BtnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->BtnExit->FlatAppearance->BorderSize = 0;
			this->BtnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnExit.Image")));
			this->BtnExit->Location = System::Drawing::Point(987, 1);
			this->BtnExit->Name = L"BtnExit";
			this->BtnExit->Size = System::Drawing::Size(47, 40);
			this->BtnExit->TabIndex = 5;
			this->BtnExit->UseVisualStyleBackColor = false;
			this->BtnExit->Click += gcnew System::EventHandler(this, &DasboardForm::BtnExit_Click);
			// 
			// BtnMinimize
			// 
			this->BtnMinimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->BtnMinimize->Cursor = System::Windows::Forms::Cursors::Default;
			this->BtnMinimize->FlatAppearance->BorderSize = 0;
			this->BtnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnMinimize.Image")));
			this->BtnMinimize->Location = System::Drawing::Point(934, 1);
			this->BtnMinimize->Name = L"BtnMinimize";
			this->BtnMinimize->Size = System::Drawing::Size(47, 41);
			this->BtnMinimize->TabIndex = 5;
			this->BtnMinimize->UseVisualStyleBackColor = true;
			this->BtnMinimize->Click += gcnew System::EventHandler(this, &DasboardForm::button5_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &DasboardForm::timer1_Tick);
			// 
			// DasboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1276, 670);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DasboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DasboardForm";
			this->Load += gcnew System::EventHandler(this, &DasboardForm::DasboardForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

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
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void PalNav_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void BtnKathi_Leave(System::Object^ sender, System::EventArgs^ e) {
		BtnKathi->BackColor = System::Drawing::Color::FromArgb(24, 30, 54);

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void BtnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Environment::Exit(0);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime currentDate = DateTime::Now;
		LbDate->Text = "Current Date: " + currentDate.ToString("dd-MM-yyyy");
		DateTime currentTime = DateTime::Now;
		LbTime->Text = "Current Time: " + currentTime.ToString("HH:mm:ss");
	}
	private: System::Void Time_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnKathi_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
