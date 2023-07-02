#pragma once

namespace Окружность {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Result : public System::Windows::Forms::Form {
	public:
		Result() {
			InitializeComponent();
		}

	protected:
		~Result() {
			if (components) delete components;
		}
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Label^ close;





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;







	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::TextBox^ text_editor;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::ComponentModel::IContainer^ components;


































#pragma region Windows Form Designer generated code
		   void InitializeComponent() {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Result::typeid));
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->close = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->logo = (gcnew System::Windows::Forms::PictureBox());
			   this->text_editor = (gcnew System::Windows::Forms::TextBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->panel1->SuspendLayout();
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // saveFileDialog1
			   // 
			   this->saveFileDialog1->Tag = L".txt";
			   // 
			   // close
			   // 
			   this->close->BackColor = System::Drawing::Color::Transparent;
			   this->close->ForeColor = System::Drawing::SystemColors::Window;
			   this->close->Location = System::Drawing::Point(430, 0);
			   this->close->Name = L"close";
			   this->close->Size = System::Drawing::Size(20, 20);
			   this->close->TabIndex = 16;
			   this->close->Text = L"X";
			   this->close->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->close->Click += gcnew System::EventHandler(this, &Result::button_close1_Click_1);
			   this->close->MouseEnter += gcnew System::EventHandler(this, &Result::button_close1_MouseEnter);
			   this->close->MouseLeave += gcnew System::EventHandler(this, &Result::button_close1_MouseLeave);
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::Transparent;
			   this->panel1->Controls->Add(this->close);
			   this->panel1->Controls->Add(this->menuStrip1);
			   this->panel1->Location = System::Drawing::Point(30, 0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(460, 38);
			   this->panel1->TabIndex = 19;
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			   this->menuStrip1->Size = System::Drawing::Size(460, 24);
			   this->menuStrip1->TabIndex = 19;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // toolStripMenuItem1
			   // 
			   this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->toolStripMenuItem2,
					   this->toolStripMenuItem3
			   });
			   this->toolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			   this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			   this->toolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			   this->toolStripMenuItem1->Text = L"&Файл";
			   // 
			   // toolStripMenuItem2
			   // 
			   this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem2.Image")));
			   this->toolStripMenuItem2->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			   this->toolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			   this->toolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			   this->toolStripMenuItem2->Text = L"&Сохранить";
			   this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Result::toolStripMenuItem2_Click);
			   // 
			   // toolStripMenuItem3
			   // 
			   this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			   this->toolStripMenuItem3->Size = System::Drawing::Size(180, 22);
			   this->toolStripMenuItem3->Text = L"Сохранить &как";
			   this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Result::button1_Click_1);
			   // 
			   // logo
			   // 
			   this->logo->BackColor = System::Drawing::Color::Transparent;
			   this->logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.BackgroundImage")));
			   this->logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->logo->Location = System::Drawing::Point(0, 0);
			   this->logo->Name = L"logo";
			   this->logo->Size = System::Drawing::Size(30, 30);
			   this->logo->TabIndex = 61;
			   this->logo->TabStop = false;
			   // 
			   // text_editor
			   // 
			   this->text_editor->Location = System::Drawing::Point(12, 36);
			   this->text_editor->Multiline = true;
			   this->text_editor->Name = L"text_editor";
			   this->text_editor->Size = System::Drawing::Size(456, 252);
			   this->text_editor->TabIndex = 62;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(700, 198);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(0, 0);
			   this->textBox1->TabIndex = 63;
			   // 
			   // Result
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(61)));
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(480, 300);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->text_editor);
			   this->Controls->Add(this->logo);
			   this->Controls->Add(this->panel1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"Result";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Результат";
			   this->Shown += gcnew System::EventHandler(this, &Result::Result_Shown);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private:
		System::Void Result_Shown(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
		System::Void button_close1_Click_1(System::Object^ sender, System::EventArgs^ e);
		System::Void label_circle_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void label_circle_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void label_circle_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void button_close1_MouseEnter(System::Object^ sender, System::EventArgs^ e);
		System::Void button_close1_MouseLeave(System::Object^ sender, System::EventArgs^ e);
		System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
