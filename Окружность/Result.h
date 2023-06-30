#pragma once


namespace Окружность {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Result : public System::Windows::Forms::Form
	{
	public:
		Result() {
			InitializeComponent();
		}

	protected:
		~Result() {
			if (components) delete components;
		}
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_close1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label_circle;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		   void InitializeComponent() {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Result::typeid));
			   this->label_circle = (gcnew System::Windows::Forms::Label());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button_close1 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label_circle
			   // 
			   this->label_circle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label_circle->ForeColor = System::Drawing::SystemColors::ButtonFace;
			   this->label_circle->Location = System::Drawing::Point(6, 5);
			   this->label_circle->Name = L"label_circle";
			   this->label_circle->Size = System::Drawing::Size(356, 24);
			   this->label_circle->TabIndex = 10;
			   this->label_circle->Text = L"Результат";
			   this->label_circle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Result::label_circle_MouseDown);
			   this->label_circle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Result::label_circle_MouseMove);
			   this->label_circle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Result::label_circle_MouseUp);
			   // 
			   // saveFileDialog1
			   // 
			   this->saveFileDialog1->Tag = L".txt";
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::Black;
			   this->panel1->Controls->Add(this->button1);
			   this->panel1->Controls->Add(this->button_close1);
			   this->panel1->Controls->Add(this->textBox1);
			   this->panel1->Controls->Add(this->label_circle);
			   this->panel1->Controls->Add(this->pictureBox1);
			   this->panel1->Location = System::Drawing::Point(6, 6);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(400, 245);
			   this->panel1->TabIndex = 0;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::White;
			   this->button1->Location = System::Drawing::Point(318, 215);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(75, 23);
			   this->button1->TabIndex = 11;
			   this->button1->Text = L"Сохранить";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &Result::button1_Click_1);
			   // 
			   // button_close1
			   // 
			   this->button_close1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button_close1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button_close1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button_close1->Location = System::Drawing::Point(368, 6);
			   this->button_close1->Name = L"button_close1";
			   this->button_close1->Size = System::Drawing::Size(23, 23);
			   this->button_close1->TabIndex = 9;
			   this->button_close1->Text = L"X";
			   this->button_close1->UseVisualStyleBackColor = true;
			   this->button_close1->Click += gcnew System::EventHandler(this, &Result::button_close1_Click_1);
			   this->button_close1->MouseEnter += gcnew System::EventHandler(this, &Result::button_close1_MouseEnter);
			   this->button_close1->MouseLeave += gcnew System::EventHandler(this, &Result::button_close1_MouseLeave);
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::SystemColors::InfoText;
			   this->textBox1->Enabled = false;
			   this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			   this->textBox1->Location = System::Drawing::Point(10, 34);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(380, 175);
			   this->textBox1->TabIndex = 8;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(0, 0);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(400, 245);
			   this->pictureBox1->TabIndex = 12;
			   this->pictureBox1->TabStop = false;
			   // 
			   // Result
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(61)));
			   this->ClientSize = System::Drawing::Size(412, 257);
			   this->Controls->Add(this->panel1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"Result";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Результат";
			   this->Shown += gcnew System::EventHandler(this, &Result::Result_Shown);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private:
		System::Void Result_Shown(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
		System::Void button_close1_Click_1(System::Object^ sender, System::EventArgs^ e);
	    //Реализация перетаскивания формы по экрану
		System::Void label_circle_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void label_circle_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void label_circle_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void button_close1_MouseEnter(System::Object^ sender, System::EventArgs^ e);
		System::Void button_close1_MouseLeave(System::Object^ sender, System::EventArgs^ e);

};
}
