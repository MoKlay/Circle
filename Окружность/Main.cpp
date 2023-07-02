#include "Main.h"
#include "Fields.h"
#include "Result.h"
#include "HelpForm.h"

using namespace System;
using namespace ����������;
using namespace Fields;

int i = 0; //���������� ����������� �����������
bool t = true, f = false, voll = false; 
bool zet;


void Main::TextBox() {
	dataX->Text = "0";
	dataY->Text = "0";
	dataR->Text = "0";
}
void Main::DeleteList() {
	listX->Items->Clear();
	listY->Items->Clear();
	listR->Items->Clear();
}
void Main::DeleteList(int i) {
	listX->Items->RemoveAt(i);
	listY->Items->RemoveAt(i);
	listR->Items->RemoveAt(i);
}

void ����������::Main::AddList(float x, float y, float r) {
	this->listX->Items->Add(x);
	this->listY->Items->Add(y);
	this->listR->Items->Add(r);
}

void ����������::Main::Visible(bool vis) { 
	if (vis) {
		delete_Panel->Visible = t;
		add->Visible = f;
		clear->Visible = f;
		back->Visible = t;
	}
	else {
		delete_Panel->Visible = f;
		add->Visible = t;
		clear->Visible = t;
		back->Visible = f;
	}
}

Void Main::Clousebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
Void Main::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i < 10) {
		// ����������� ��������� ������ � ���������� double
		float x = Convert::ToDouble(dataX->Text);
		float y = Convert::ToDouble(dataY->Text);
		float r = Convert::ToDouble(dataR->Text);
		//����������� �� ������ ��������
		if (x < 100 && x > -100 && y > -100 && y < 100 && r < 100) {
			data[i].Set(x, y, r);// ������ ������ � ������ �������
			AddList(x, y, r);//���������� � ListBox ������ � �������
			i++; //������� ����������
		}
		else
			MessageBox::Show(this, "������� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		TextBox();
	}
}
Void Main::buttonDeleteAll_Click(System::Object^ sender, System::EventArgs^ e) {
	i = 0;//������� ���������� ����������� ����������
	//ListBox ��������� �� ���������      
	DeleteList();
}
Void Main::buttonResult_Click(System::Object^ sender, System::EventArgs^ e) {
	Result^ form = gcnew Result();               //�������������� ������� ����� Result
	form->Show();//� ������������ �� ������ 
}
// ���������� ��������� ������ �������� � TextBox
Void Main::dataX_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    wchar_t l = e->KeyChar;
	//������ ������ ��������: ����� � �����
	if (dataX->Text == "") { if (!Char::IsDigit(l) && l != 8 && l != 45) e->Handled = true; }
	//���� ������ ������ ����� ������������ �����
	else if (dataX->Text == "-") { if (!Char::IsDigit(l) && l != 8) e->Handled = true; }
	//��������: ��������� �������
	else if (l == 44 && dataX->Text->IndexOf(44) != -1) { e->Handled = true; }
	//���� ������ ����� ����� ��������� �������
	else if (!Char::IsDigit(l) && l != 8 && l != 44) { e->Handled = true; }
}
Void Main::dataY_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	wchar_t l = e->KeyChar;
	if (dataY->Text == "") { if (!Char::IsDigit(l) && l != 8 && l != 45) e->Handled = true; }
	else if (dataY->Text == "-") { if (!Char::IsDigit(l) && l != 8) e->Handled = true; }
	else if (l == 44 && dataY->Text->IndexOf(44) != -1) { e->Handled = true; }
	else if (!Char::IsDigit(l) && l != 8 && l != 44) { e->Handled = true; }
	
}
Void Main::dataR_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	wchar_t l = e->KeyChar;
	//� TextBox �� ��������� R ������������� ������ ����� � �������, � backspace
	if (dataR->Text == "") { if (!Char::IsDigit(l) && l != 8) e->Handled = true; }
	else if (l == 44 && dataR->Text->IndexOf(44) != -1) { e->Handled = true; }
	else if (!Char::IsDigit(l) && l != 8 && l != 44) { e->Handled = true; }
	
}
//��� ������ ��������� ����� ���� ���������� ������
Void Main::dataX_Enter(System::Object^ sender, System::EventArgs^ e) {
	dataX->Text = "";
}
Void Main::dataY_Enter(System::Object^ sender, System::EventArgs^ e) {
	dataY->Text = "";
}
Void Main::dataR_Enter(System::Object^ sender, System::EventArgs^ e) {
	dataR->Text = "";
}
//��� �������������� ��������� ���� ���� ��� ������ ������������ 0
Void Main::dataX_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (dataX->Text == "") dataX->Text = "0";
}
Void Main::dataY_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (dataY->Text == "") dataY->Text = "0";
}
Void Main::dataR_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (dataR->Text == "") dataR->Text = "0";
}
Void Main::Clousebutton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	//��� ��������� �������� �� ������ � ���������� �������
	close->BackColor = Color::Red;
}
Void Main::Clousebutton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//��� ��������� ������� �� ������ � ���������� ������
	close->BackColor = Color::Transparent;
}
Void Main::buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i > 0) {
		saveFile->DefaultExt = "csv";                                               //������������ �� ��������� ������ ����� csv
		saveFile->Filter = "CSV ���� (*.csv) | *.csv";                             // � � ������ �������� ����������� ������ ����� 
		if (saveFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //���� � ���� ���������� ������ �� ������ ��, �� 
			StreamWriter^ file = gcnew StreamWriter(saveFile->FileName, true);   //������������ � ��������� ���� ������:
			file->Write("Circle.\n");                         //������������ ���� ��� ������������ �������� �������
			for (int j = 0; j < i; j++) {                    //� ������
				String^ X = Convert::ToString(data[j].GetX());
				String^ Y = Convert::ToString(data[j].GetY());
				String^ R = Convert::ToString(data[j].GetR());
				file->Write(X + ";" + Y + ";" + R + ".\n");
			}
			file->Close();
			//����� ������ ����������� ���������� ���� � ����������� ����������
			MessageBox::Show(this, "���� �������� � ����: " + saveFile->FileName, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
Void Main::buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {
	openFile->DefaultExt = "csv";                                              //������������ �� ��������� ������ ����� csv
	openFile->Filter = "CSV ���� (*.csv) | *.csv";                            // � � ������ �������� ����������� ������ ����� csv
	csv = true;
	while (csv) {
		if (openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {//���� � ���� ���������� ������ �� ������ ��, �� 
			StreamReader^ file = File::OpenText(openFile->FileName);           //����������� � ��������� ���� ����
			String^ X = ""; String^ Y = ""; String^ R = "";//��������� ���������� ������ ��� ������ � ���� ����� 
			int column = 1;
			X = file->ReadLine();
			if (X == "Circle.") { // ���� �������� ���������� ����
				X = ""; DeleteList(); i = 0; //ListBox ��������� �� ���������, ��������� ������� �����������
				while (csv) {
					int intdata = file->Read(); //���������� �� ���������
					if (intdata != -1) {
						if (Char::IsDigit(intdata) || intdata == 44 || intdata == 45) {//���� ��������� �����
							switch (column) {//���������� �
							case 1://�
								if (intdata == 44) X += ",";
								else if (intdata == 45) X += "-";
								else X += Convert::ToString(intdata - 48);
								break;
							case 2://Y
								if (intdata == 44) Y += ",";
								else if (intdata == 45) Y += "-";
								else Y += Convert::ToString(intdata - 48);
								break;
							case 3://R
								if (intdata == 44) R += ",";
								else if (intdata == 45) R += "";
								else R += Convert::ToString(intdata - 48);
								break;
							}
						}
						else if (intdata == 59) column++;//���� �������� ; �� ��������� ���������� ������
						else if (intdata == 46) { //���� ������� �����
							//��������� ����������� ������ � ListBox � � ������ �����������
							float x = Convert::ToDouble(X);
							float y = Convert::ToDouble(Y);
							float r = Convert::ToDouble(R);
							data[i].Set(x, y, r);
							AddList(x, y, r);
							column = 1; X = ""; Y = ""; R = ""; i++;//��������� �� ��������� ����������
						}
					}
					else {  //���� ����� ����������
						column = 1;
						MessageBox::Show(this, "���� ��������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
						csv = false; //���� �������������
					}
				}
				file->Close();
			}
			else //����� ������� ���� � �������
				MessageBox::Show(this, "�������� ���� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else break;//���� �� ������ ���� ��������
	}
}
Void Main::MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();                                              //  ���������� �����������
}
Void Main::l3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = true;//���������� flage ��������� ��� ���� ������ � ������������
	location = e->Location;// ������������ ���������� ���� �� ����������� �����
}
Void Main::l3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (flage) {
		screen = PointToScreen(e->Location); //����������� ���������� ����� �� �������� �����������
		Location = Point(screen.X - location.X, screen.Y - location.Y);//� ������������ � ������� ������������ ����� ��������� ����
	}
}
Void Main::l3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { flage = false; }//���������, ��� ������ ��������

System::Void ����������::Main::button1_Click(System::Object^ sender, System::EventArgs^ e) {//��� ������� �� ������ ?
	HelpForm^ form = gcnew HelpForm(); //��������������
	form->Show();
}

Void Main::timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (i == 10) {                          // ���� ����� ��� 10 �����������, ��  
		this->result->Visible = true;//  ���������� ������ ����������
		this->data_panel->Visible = false;    //   � ���������� TextBox'�
	} 
	else {
		this->result->Visible = false;      //������ ���������� ����������,
		this->data_panel->Visible = true;    //TextBox'� ����������
	}
}

Void Main::label2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	directory->BackColor = Color::White;
	directory->ForeColor = Color::Black;
}

Void Main::label2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	directory->BackColor = Color::Transparent;
	directory->ForeColor = SystemColors::Window;
}

Void Main::deletebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i > 0) {
		if (!delete_Panel->Visible) {//���� ������ � numUpDown �� �����
			Visible(true);//���������� ������ �������� ����������
			index_num->Maximum = i;//� numUpDown �������� ��� ��������
		}
		else {
			Visible(false);//���������� ������
			i--;//��������� ������� �����������
			int in = Convert::ToInt32(index_num->Value);
			DeleteList(in - 1);//������� ������ �� �������
			for (int j = in; j < i; j++) data[j] = data[j+1];//���������� ������
		}
	}
}

Void Main::back_Click(System::Object^ sender, System::EventArgs^ e) {
	Visible(false);
}

Void Main::Main_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox();
}

Void Main::label1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!voll) { this->WindowState = FormWindowState::Minimized; voll = true; }
	else this->WindowState = FormWindowState::Normal; voll = false;
}

System::Void ����������::Main::label1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label1->BackColor = Color::White;
	label1->ForeColor = Color::Black;
}

System::Void ����������::Main::label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label1->BackColor = Color::Transparent;
	label1->ForeColor = SystemColors::Window;
}
