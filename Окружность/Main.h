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
	private: System::Windows::Forms::OpenFileDialog^ openFile;
	protected:

	protected:

	private: System::Windows::Forms::SaveFileDialog^ saveFile;
	private: System::Windows::Forms::Timer^ timer;
	protected:


	protected:



	private: System::Windows::Forms::Label^ directory;

	private: System::Windows::Forms::Label^ email;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Button^ result;
	private: System::Windows::Forms::Panel^ data_panel;
	private: System::Windows::Forms::Label^ RR;





	private: System::Windows::Forms::Label^ YY;


	private: System::Windows::Forms::Label^ XX;



	private: System::Windows::Forms::TextBox^ dataR;
	private: System::Windows::Forms::TextBox^ dataY;
	private: System::Windows::Forms::TextBox^ dataX;
	private: System::Windows::Forms::PictureBox^ logo;


	private: System::Windows::Forms::ListBox^ listX;
	private: System::Windows::Forms::ListBox^ listY;
	private: System::Windows::Forms::ListBox^ listR;
	private: System::Windows::Forms::Button^ add;

	private: System::Windows::Forms::Button^ deletebutton;


	private: System::Windows::Forms::Button^ clear;


	private: System::Windows::Forms::Button^ load;


	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Panel^ title_Panel;






	private: System::Windows::Forms::Label^ close;
	private: System::Windows::Forms::NumericUpDown^ index_num;
	private: System::Windows::Forms::Panel^ delete_Panel;
	private: System::Windows::Forms::Label^ index;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Label^ label1;

	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::Label^ title;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->close = (gcnew System::Windows::Forms::Label());
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFile = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->directory = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Button());
			this->data_panel = (gcnew System::Windows::Forms::Panel());
			this->dataR = (gcnew System::Windows::Forms::TextBox());
			this->dataY = (gcnew System::Windows::Forms::TextBox());
			this->dataX = (gcnew System::Windows::Forms::TextBox());
			this->XX = (gcnew System::Windows::Forms::Label());
			this->YY = (gcnew System::Windows::Forms::Label());
			this->RR = (gcnew System::Windows::Forms::Label());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->listX = (gcnew System::Windows::Forms::ListBox());
			this->listY = (gcnew System::Windows::Forms::ListBox());
			this->listR = (gcnew System::Windows::Forms::ListBox());
			this->title_Panel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add = (gcnew System::Windows::Forms::Button());
			this->deletebutton = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->load = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->index_num = (gcnew System::Windows::Forms::NumericUpDown());
			this->delete_Panel = (gcnew System::Windows::Forms::Panel());
			this->index = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->back = (gcnew System::Windows::Forms::Button());
			title = (gcnew System::Windows::Forms::Label());
			this->data_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->title_Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->index_num))->BeginInit();
			this->delete_Panel->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// title
			// 
			title->BackColor = System::Drawing::Color::Transparent;
			title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			title->ForeColor = System::Drawing::SystemColors::ButtonFace;
			title->Location = System::Drawing::Point(180, 24);
			title->Name = L"title";
			title->Size = System::Drawing::Size(200, 40);
			title->TabIndex = 73;
			title->Text = L"Окружность";
			title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::Transparent;
			this->close->ForeColor = System::Drawing::SystemColors::Window;
			this->close->Location = System::Drawing::Point(540, 0);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(20, 20);
			this->close->TabIndex = 58;
			this->close->Text = L"X";
			this->close->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->close->Click += gcnew System::EventHandler(this, &Main::Clousebutton_Click);
			this->close->MouseEnter += gcnew System::EventHandler(this, &Main::Clousebutton_MouseEnter);
			this->close->MouseLeave += gcnew System::EventHandler(this, &Main::Clousebutton_MouseLeave);
			// 
			// openFile
			// 
			this->openFile->FileName = L"openFileDialog1";
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// directory
			// 
			this->directory->BackColor = System::Drawing::Color::Transparent;
			this->directory->ForeColor = System::Drawing::SystemColors::Window;
			this->directory->Location = System::Drawing::Point(520, 0);
			this->directory->Name = L"directory";
			this->directory->Size = System::Drawing::Size(20, 20);
			this->directory->TabIndex = 59;
			this->directory->Text = L"\?";
			this->directory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->directory->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			this->directory->MouseEnter += gcnew System::EventHandler(this, &Main::label2_MouseEnter);
			this->directory->MouseLeave += gcnew System::EventHandler(this, &Main::label2_MouseLeave);
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->BackColor = System::Drawing::Color::Transparent;
			this->email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->email->ForeColor = System::Drawing::SystemColors::Window;
			this->email->Location = System::Drawing::Point(442, 336);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(113, 14);
			this->email->TabIndex = 55;
			this->email->Text = L"umdari68@gmail.com\r\n";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->name->Location = System::Drawing::Point(10, 336);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(88, 14);
			this->name->TabIndex = 54;
			this->name->Text = L"Цыренов Чингис";
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::Color::Transparent;
			this->result->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->result->Location = System::Drawing::Point(130, 324);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(300, 26);
			this->result->TabIndex = 51;
			this->result->TabStop = false;
			this->result->Text = L"Результат";
			this->result->UseVisualStyleBackColor = false;
			this->result->Visible = false;
			this->result->Click += gcnew System::EventHandler(this, &Main::buttonResult_Click);
			// 
			// data_panel
			// 
			this->data_panel->BackColor = System::Drawing::Color::Transparent;
			this->data_panel->Controls->Add(this->dataR);
			this->data_panel->Controls->Add(this->dataY);
			this->data_panel->Controls->Add(this->dataX);
			this->data_panel->Controls->Add(this->XX);
			this->data_panel->Controls->Add(this->YY);
			this->data_panel->Controls->Add(this->RR);
			this->data_panel->Location = System::Drawing::Point(130, 267);
			this->data_panel->Name = L"data_panel";
			this->data_panel->Size = System::Drawing::Size(300, 40);
			this->data_panel->TabIndex = 53;
			// 
			// dataR
			// 
			this->dataR->Location = System::Drawing::Point(210, 20);
			this->dataR->Name = L"dataR";
			this->dataR->Size = System::Drawing::Size(90, 20);
			this->dataR->TabIndex = 43;
			this->dataR->TabStop = false;
			this->dataR->Enter += gcnew System::EventHandler(this, &Main::dataR_Enter);
			this->dataR->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::dataR_KeyPress);
			this->dataR->Leave += gcnew System::EventHandler(this, &Main::dataR_Leave);
			// 
			// dataY
			// 
			this->dataY->Location = System::Drawing::Point(105, 21);
			this->dataY->Name = L"dataY";
			this->dataY->Size = System::Drawing::Size(90, 20);
			this->dataY->TabIndex = 42;
			this->dataY->TabStop = false;
			this->dataY->Enter += gcnew System::EventHandler(this, &Main::dataY_Enter);
			this->dataY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::dataY_KeyPress);
			this->dataY->Leave += gcnew System::EventHandler(this, &Main::dataY_Leave);
			// 
			// dataX
			// 
			this->dataX->Location = System::Drawing::Point(0, 20);
			this->dataX->Name = L"dataX";
			this->dataX->Size = System::Drawing::Size(90, 20);
			this->dataX->TabIndex = 41;
			this->dataX->TabStop = false;
			this->dataX->Enter += gcnew System::EventHandler(this, &Main::dataX_Enter);
			this->dataX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::dataX_KeyPress);
			this->dataX->Leave += gcnew System::EventHandler(this, &Main::dataX_Leave);
			// 
			// XX
			// 
			this->XX->AutoSize = true;
			this->XX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->XX->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->XX->Location = System::Drawing::Point(38, 5);
			this->XX->Name = L"XX";
			this->XX->Size = System::Drawing::Size(14, 13);
			this->XX->TabIndex = 44;
			this->XX->Text = L"X";
			// 
			// YY
			// 
			this->YY->AutoSize = true;
			this->YY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->YY->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->YY->Location = System::Drawing::Point(143, 5);
			this->YY->Name = L"YY";
			this->YY->Size = System::Drawing::Size(15, 13);
			this->YY->TabIndex = 45;
			this->YY->Text = L"Y";
			// 
			// RR
			// 
			this->RR->AutoSize = true;
			this->RR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RR->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->RR->Location = System::Drawing::Point(248, 5);
			this->RR->Name = L"RR";
			this->RR->Size = System::Drawing::Size(15, 13);
			this->RR->TabIndex = 46;
			this->RR->Text = L"R";
			// 
			// logo
			// 
			this->logo->BackColor = System::Drawing::Color::Transparent;
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(0, 0);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(50, 50);
			this->logo->TabIndex = 60;
			this->logo->TabStop = false;
			// 
			// listX
			// 
			this->listX->Enabled = false;
			this->listX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listX->FormattingEnabled = true;
			this->listX->ItemHeight = 15;
			this->listX->Location = System::Drawing::Point(125, 67);
			this->listX->Name = L"listX";
			this->listX->Size = System::Drawing::Size(100, 199);
			this->listX->TabIndex = 62;
			this->listX->TabStop = false;
			this->listX->UseTabStops = false;
			// 
			// listY
			// 
			this->listY->Enabled = false;
			this->listY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listY->FormattingEnabled = true;
			this->listY->ItemHeight = 15;
			this->listY->Location = System::Drawing::Point(230, 67);
			this->listY->Name = L"listY";
			this->listY->Size = System::Drawing::Size(100, 199);
			this->listY->TabIndex = 63;
			this->listY->TabStop = false;
			// 
			// listR
			// 
			this->listR->Enabled = false;
			this->listR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listR->FormattingEnabled = true;
			this->listR->ItemHeight = 15;
			this->listR->Location = System::Drawing::Point(335, 67);
			this->listR->Name = L"listR";
			this->listR->Size = System::Drawing::Size(100, 199);
			this->listR->TabIndex = 64;
			this->listR->TabStop = false;
			// 
			// title_Panel
			// 
			this->title_Panel->BackColor = System::Drawing::Color::Transparent;
			this->title_Panel->Controls->Add(this->label1);
			this->title_Panel->Controls->Add(this->close);
			this->title_Panel->Controls->Add(this->directory);
			this->title_Panel->Location = System::Drawing::Point(0, 0);
			this->title_Panel->Name = L"title_Panel";
			this->title_Panel->Size = System::Drawing::Size(560, 50);
			this->title_Panel->TabIndex = 65;
			this->title_Panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::l3_MouseDown);
			this->title_Panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::l3_MouseMove);
			this->title_Panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::l3_MouseUp);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(500, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 20);
			this->label1->TabIndex = 60;
			this->label1->Text = L"---";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Main::label1_Click);
			this->label1->MouseEnter += gcnew System::EventHandler(this, &Main::label1_MouseEnter);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &Main::label1_MouseLeave);
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::Color::Transparent;
			this->add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->add->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->add->Location = System::Drawing::Point(3, 3);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(92, 29);
			this->add->TabIndex = 69;
			this->add->Text = L"Добавить";
			this->add->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &Main::buttonAdd_Click);
			// 
			// deletebutton
			// 
			this->deletebutton->AutoSize = true;
			this->deletebutton->BackColor = System::Drawing::Color::Transparent;
			this->deletebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->deletebutton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->deletebutton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->deletebutton->Location = System::Drawing::Point(3, 38);
			this->deletebutton->Name = L"deletebutton";
			this->deletebutton->Size = System::Drawing::Size(92, 29);
			this->deletebutton->TabIndex = 70;
			this->deletebutton->Text = L"Удалить";
			this->deletebutton->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->deletebutton->UseVisualStyleBackColor = false;
			this->deletebutton->Click += gcnew System::EventHandler(this, &Main::deletebutton_Click);
			// 
			// clear
			// 
			this->clear->AutoSize = true;
			this->clear->BackColor = System::Drawing::Color::Transparent;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->clear->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->clear->Location = System::Drawing::Point(3, 114);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(95, 29);
			this->clear->TabIndex = 71;
			this->clear->Text = L"Очистить";
			this->clear->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &Main::buttonDeleteAll_Click);
			// 
			// load
			// 
			this->load->BackColor = System::Drawing::Color::Transparent;
			this->load->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->load->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->load->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->load->Location = System::Drawing::Point(450, 67);
			this->load->Name = L"load";
			this->load->Size = System::Drawing::Size(100, 29);
			this->load->TabIndex = 74;
			this->load->Text = L"Открыть";
			this->load->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->load->UseVisualStyleBackColor = false;
			this->load->Click += gcnew System::EventHandler(this, &Main::buttonLoad_Click);
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::Transparent;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->save->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->save->Location = System::Drawing::Point(450, 102);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(100, 29);
			this->save->TabIndex = 75;
			this->save->Text = L"Сохранить";
			this->save->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &Main::buttonSave_Click);
			// 
			// index_num
			// 
			this->index_num->Location = System::Drawing::Point(0, 16);
			this->index_num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->index_num->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->index_num->Name = L"index_num";
			this->index_num->Size = System::Drawing::Size(100, 20);
			this->index_num->TabIndex = 76;
			this->index_num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// delete_Panel
			// 
			this->delete_Panel->BackColor = System::Drawing::Color::Transparent;
			this->delete_Panel->Controls->Add(this->index);
			this->delete_Panel->Controls->Add(this->index_num);
			this->delete_Panel->Location = System::Drawing::Point(3, 73);
			this->delete_Panel->Name = L"delete_Panel";
			this->delete_Panel->Size = System::Drawing::Size(100, 35);
			this->delete_Panel->TabIndex = 77;
			this->delete_Panel->Visible = false;
			// 
			// index
			// 
			this->index->AutoSize = true;
			this->index->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->index->Location = System::Drawing::Point(0, 0);
			this->index->Name = L"index";
			this->index->Size = System::Drawing::Size(95, 13);
			this->index->TabIndex = 77;
			this->index->Text = L"Индекс удаления";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->Controls->Add(this->add);
			this->flowLayoutPanel1->Controls->Add(this->deletebutton);
			this->flowLayoutPanel1->Controls->Add(this->delete_Panel);
			this->flowLayoutPanel1->Controls->Add(this->clear);
			this->flowLayoutPanel1->Controls->Add(this->back);
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 67);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(107, 218);
			this->flowLayoutPanel1->TabIndex = 78;
			// 
			// back
			// 
			this->back->AutoSize = true;
			this->back->BackColor = System::Drawing::Color::Transparent;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->back->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->back->Location = System::Drawing::Point(3, 149);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(95, 29);
			this->back->TabIndex = 72;
			this->back->Text = L"Отмена";
			this->back->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->back->UseVisualStyleBackColor = false;
			this->back->Visible = false;
			this->back->Click += gcnew System::EventHandler(this, &Main::back_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(560, 360);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->save);
			this->Controls->Add(this->load);
			this->Controls->Add(this->listR);
			this->Controls->Add(this->listY);
			this->Controls->Add(this->listX);
			this->Controls->Add(this->logo);
			this->Controls->Add(this->email);
			this->Controls->Add(this->name);
			this->Controls->Add(this->result);
			this->Controls->Add(this->data_panel);
			this->Controls->Add(title);
			this->Controls->Add(this->title_Panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Окружность";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Main::MainForm_FormClosed);
			this->Click += gcnew System::EventHandler(this, &Main::Main_Click);
			this->data_panel->ResumeLayout(false);
			this->data_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->title_Panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->index_num))->EndInit();
			this->delete_Panel->ResumeLayout(false);
			this->delete_Panel->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		void TextBox();
		void DeleteList();
		void DeleteList(int i);
		void AddList(float i, float j, float k);
		void Visible(bool vis);
		System::Void Clousebutton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonDeleteAll_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonResult_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void dataX_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
		System::Void dataY_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
		System::Void dataR_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
		System::Void dataX_Enter(System::Object^ sender, System::EventArgs^ e);
		System::Void dataY_Enter(System::Object^ sender, System::EventArgs^ e);
		System::Void dataR_Enter(System::Object^ sender, System::EventArgs^ e);
		System::Void dataX_Leave(System::Object^ sender, System::EventArgs^ e);
		System::Void dataY_Leave(System::Object^ sender, System::EventArgs^ e);
		System::Void dataR_Leave(System::Object^ sender, System::EventArgs^ e);
		System::Void Clousebutton_MouseEnter(System::Object^ sender, System::EventArgs^ e);
		System::Void Clousebutton_MouseLeave(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
		System::Void l3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void l3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void l3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
		System::Void label2_MouseEnter(System::Object^ sender, System::EventArgs^ e);
		System::Void label2_MouseLeave(System::Object^ sender, System::EventArgs^ e);
		System::Void deletebutton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void back_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void Main_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label1_MouseEnter(System::Object^ sender, System::EventArgs^ e);
        System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e);
};
}
