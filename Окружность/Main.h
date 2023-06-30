#pragma once

namespace Окружность {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Main : public System::Windows::Forms::Form {
	public:
		Main() {
			InitializeComponent();
			TextBox();
		}

	protected:
		~Main() {
			if (components) delete components;
		}

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ dataR;
	private: System::Windows::Forms::TextBox^ dataY;
	private: System::Windows::Forms::TextBox^ dataX;
	private: System::Windows::Forms::Button^ buttonResult;
	private: System::Windows::Forms::Button^ buttonLoad;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ Clousebutton;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ buttonDeleteAll;
	private: System::Windows::Forms::Panel^ panel1;



	private: System::Windows::Forms::Label^ l3;
	private: System::Windows::Forms::FlowLayoutPanel^ Flow;
	private: System::Windows::Forms::Label^ l11;
	private: System::Windows::Forms::Label^ l12;
	private: System::Windows::Forms::Label^ l13;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ l1;
	private: System::Windows::Forms::Label^ l2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Clousebutton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Flow = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteAll = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->l11 = (gcnew System::Windows::Forms::Label());
			this->l12 = (gcnew System::Windows::Forms::Label());
			this->l13 = (gcnew System::Windows::Forms::Label());
			this->dataR = (gcnew System::Windows::Forms::TextBox());
			this->dataY = (gcnew System::Windows::Forms::TextBox());
			this->dataX = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->Flow->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->Clousebutton);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->l1);
			this->panel1->Controls->Add(this->l2);
			this->panel1->Controls->Add(this->buttonResult);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->Flow);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->l3);
			this->panel1->Location = System::Drawing::Point(5, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(330, 270);
			this->panel1->TabIndex = 0;
			// 
			// Clousebutton
			// 
			this->Clousebutton->BackColor = System::Drawing::Color::Black;
			this->Clousebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Clousebutton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Clousebutton->Location = System::Drawing::Point(304, 7);
			this->Clousebutton->Name = L"Clousebutton";
			this->Clousebutton->Size = System::Drawing::Size(20, 20);
			this->Clousebutton->TabIndex = 26;
			this->Clousebutton->Text = L"Х";
			this->Clousebutton->UseVisualStyleBackColor = false;
			this->Clousebutton->Click += gcnew System::EventHandler(this, &Main::Clousebutton_Click);
			this->Clousebutton->MouseEnter += gcnew System::EventHandler(this, &Main::Clousebutton_MouseEnter);
			this->Clousebutton->MouseLeave += gcnew System::EventHandler(this, &Main::Clousebutton_MouseLeave);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(276, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 20);
			this->button1->TabIndex = 46;
			this->button1->Text = L"\?";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// l1
			// 
			this->l1->AutoSize = true;
			this->l1->BackColor = System::Drawing::Color::Transparent;
			this->l1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->l1->ForeColor = System::Drawing::SystemColors::Window;
			this->l1->Location = System::Drawing::Point(216, 246);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(108, 14);
			this->l1->TabIndex = 43;
			this->l1->Text = L"umdari68@gmail.com\r\n";
			// 
			// l2
			// 
			this->l2->AutoSize = true;
			this->l2->BackColor = System::Drawing::Color::Transparent;
			this->l2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->l2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->l2->Location = System::Drawing::Point(6, 246);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(89, 14);
			this->l2->TabIndex = 42;
			this->l2->Text = L"Цыренов Чингис";
			// 
			// buttonResult
			// 
			this->buttonResult->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonResult->Location = System::Drawing::Point(19, 211);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(300, 20);
			this->buttonResult->TabIndex = 33;
			this->buttonResult->Text = L"Результат";
			this->buttonResult->UseVisualStyleBackColor = false;
			this->buttonResult->Visible = false;
			this->buttonResult->Click += gcnew System::EventHandler(this, &Main::buttonResult_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(19, 49);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(212, 144);
			this->listBox1->TabIndex = 27;
			// 
			// Flow
			// 
			this->Flow->BackColor = System::Drawing::Color::Transparent;
			this->Flow->Controls->Add(this->buttonAdd);
			this->Flow->Controls->Add(this->buttonDelete);
			this->Flow->Controls->Add(this->buttonDeleteAll);
			this->Flow->Controls->Add(this->buttonSave);
			this->Flow->Controls->Add(this->buttonLoad);
			this->Flow->Location = System::Drawing::Point(231, 44);
			this->Flow->Margin = System::Windows::Forms::Padding(2, 0, 2, 2);
			this->Flow->Name = L"Flow";
			this->Flow->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Flow->Size = System::Drawing::Size(93, 153);
			this->Flow->TabIndex = 45;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonAdd->Location = System::Drawing::Point(3, 3);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(85, 25);
			this->buttonAdd->TabIndex = 28;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Main::buttonAdd_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonDelete->Location = System::Drawing::Point(3, 34);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(85, 25);
			this->buttonDelete->TabIndex = 30;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Main::buttonDelete_Click);
			// 
			// buttonDeleteAll
			// 
			this->buttonDeleteAll->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonDeleteAll->Location = System::Drawing::Point(3, 65);
			this->buttonDeleteAll->Name = L"buttonDeleteAll";
			this->buttonDeleteAll->Size = System::Drawing::Size(85, 25);
			this->buttonDeleteAll->TabIndex = 44;
			this->buttonDeleteAll->Text = L"Удалить все";
			this->buttonDeleteAll->UseVisualStyleBackColor = false;
			this->buttonDeleteAll->Click += gcnew System::EventHandler(this, &Main::buttonDeleteAll_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonSave->Location = System::Drawing::Point(3, 96);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(85, 25);
			this->buttonSave->TabIndex = 31;
			this->buttonSave->Text = L"Сохранить";
			this->buttonSave->UseVisualStyleBackColor = false;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Main::buttonSave_Click);
			// 
			// buttonLoad
			// 
			this->buttonLoad->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonLoad->Location = System::Drawing::Point(3, 127);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(85, 25);
			this->buttonLoad->TabIndex = 32;
			this->buttonLoad->Text = L"Загрузить";
			this->buttonLoad->UseVisualStyleBackColor = false;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &Main::buttonLoad_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->l11);
			this->panel2->Controls->Add(this->l12);
			this->panel2->Controls->Add(this->l13);
			this->panel2->Controls->Add(this->dataR);
			this->panel2->Controls->Add(this->dataY);
			this->panel2->Controls->Add(this->dataX);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Location = System::Drawing::Point(31, 199);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(270, 40);
			this->panel2->TabIndex = 41;
			// 
			// l11
			// 
			this->l11->AutoSize = true;
			this->l11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->l11->Location = System::Drawing::Point(203, 2);
			this->l11->Name = L"l11";
			this->l11->Size = System::Drawing::Size(15, 13);
			this->l11->TabIndex = 46;
			this->l11->Text = L"R";
			// 
			// l12
			// 
			this->l12->AutoSize = true;
			this->l12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->l12->Location = System::Drawing::Point(130, 2);
			this->l12->Name = L"l12";
			this->l12->Size = System::Drawing::Size(14, 13);
			this->l12->TabIndex = 45;
			this->l12->Text = L"Y";
			// 
			// l13
			// 
			this->l13->AutoSize = true;
			this->l13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->l13->Location = System::Drawing::Point(50, 2);
			this->l13->Name = L"l13";
			this->l13->Size = System::Drawing::Size(14, 13);
			this->l13->TabIndex = 44;
			this->l13->Text = L"X";
			// 
			// dataR
			// 
			this->dataR->Location = System::Drawing::Point(177, 19);
			this->dataR->Name = L"dataR";
			this->dataR->Size = System::Drawing::Size(61, 20);
			this->dataR->TabIndex = 43;
			this->dataR->Enter += gcnew System::EventHandler(this, &Main::dataR_Enter);
			this->dataR->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::dataR_KeyPress);
			this->dataR->Leave += gcnew System::EventHandler(this, &Main::dataR_Leave);
			// 
			// dataY
			// 
			this->dataY->Location = System::Drawing::Point(105, 19);
			this->dataY->Name = L"dataY";
			this->dataY->Size = System::Drawing::Size(61, 20);
			this->dataY->TabIndex = 42;
			this->dataY->Enter += gcnew System::EventHandler(this, &Main::dataY_Enter);
			this->dataY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::dataY_KeyPress);
			this->dataY->Leave += gcnew System::EventHandler(this, &Main::dataY_Leave);
			// 
			// dataX
			// 
			this->dataX->Location = System::Drawing::Point(32, 19);
			this->dataX->Name = L"dataX";
			this->dataX->Size = System::Drawing::Size(61, 20);
			this->dataX->TabIndex = 41;
			this->dataX->Enter += gcnew System::EventHandler(this, &Main::dataX_Enter);
			this->dataX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::dataX_KeyPress);
			this->dataX->Leave += gcnew System::EventHandler(this, &Main::dataX_Leave);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(270, 40);
			this->pictureBox3->TabIndex = 47;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(51, 51);
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			// 
			// l3
			// 
			this->l3->BackColor = System::Drawing::Color::Black;
			this->l3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->l3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->l3->Location = System::Drawing::Point(7, 7);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(317, 37);
			this->l3->TabIndex = 34;
			this->l3->Text = L"         Окружность";
			this->l3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::l3_MouseDown);
			this->l3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::l3_MouseMove);
			this->l3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::l3_MouseUp);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(341, 281);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Окружность";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Main::MainForm_FormClosed);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Flow->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private:
			//Функции
			void TextBox(); // При создании формы в TextBox'ах автоматически вводятся нули}
			//buttonClick
			System::Void Clousebutton_Click(System::Object^ sender, System::EventArgs^ e);//При нажатии кнопки Х завершается полность приложение
			System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e); //При нажатии кнопки Удалить
			System::Void buttonDeleteAll_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void buttonResult_Click(System::Object^ sender, System::EventArgs^ e); // При нажатии кнопки Результат
			//listboxKeyPress При записи данных в TextBox'ы обрабатываются только цыфры, запятая и кнопка Backspace
			System::Void dataX_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
			System::Void dataY_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
			System::Void dataR_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
			//dataEnterLeave При фокусе на TextBox'е текст становится пустым. 
			System::Void dataX_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void dataY_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void dataR_Enter(System::Object^ sender, System::EventArgs^ e);
			//Если же текст пустой в TextBox'ах при расфокусировке, то в текст записывается ноль
			System::Void dataX_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void dataY_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void dataR_Leave(System::Object^ sender, System::EventArgs^ e);
			//buttonCloseEnterLeave При наведенни на кнопку Х кнопка меняет цвет
			System::Void Clousebutton_MouseEnter(System::Object^ sender, System::EventArgs^ e);
			System::Void Clousebutton_MouseLeave(System::Object^ sender, System::EventArgs^ e);
			//SaveLoad
			System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e);           // При нажатии на кнопку сохранить
			System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e); //При нажатии на кнопку Загрузить
			//CloseForm
			System::Void MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);// При закрытии формы приложение завершается
			//Реализация перетаскивания формы по экрану// При нажатии на кнопку мыши
			System::Void l3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
			//При помощи события, который выполняется наведение мыши на элемент
			System::Void l3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
			// При отпускании кнопки мыши
			System::Void l3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
			System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);	
};
}
