#include "Main.h"
#include "Fields.h"
#include "Result.h"
#include "HelpForm.h"

using namespace System;
using namespace ����������;
using namespace Fields;

int i = 0; //���������� ����������� �����������

void Main::TextBox() {
	dataX->Text = "0";
	dataY->Text = "0";
	dataR->Text = "0";
}
Void Main::Clousebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
Void Main::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i < 10) {
		// ����������� ��������� ������ � ���������� double
		x = Convert::ToDouble(dataX->Text);
		y = Convert::ToDouble(dataY->Text);
		r = Convert::ToDouble(dataR->Text);
		data[i].Set(x, y, r);// ������ ������ � ������ �������
		this->listBox1->Items->Add("X: " + x + " Y: " + y + " R: " + r); //���������� � ListBox ������ � �������
		Console::WriteLine
		("��������� ���������� �" + (i + 1) + " � �������: X:" + data[i].GetX() +
			" Y: " + data[i].GetY() + " R: " + data[i].GetR());
		i++; //������� ����������
		TextBox();
	}
}
Void Main::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedItem) {                                                     //���� � ListBox'� ������ �������, �� 
		int d = listBox1->SelectedIndex + 1;
		Console::WriteLine("������� ���������� �" + d + "\n���������� ������");
		i--;                                                                         //������� ���������� ����������� �����������,
		this->listBox1->Items->Remove(listBox1->SelectedItem);                      //��������� ������� ���������,
		for (int j = listBox1->SelectedIndex; j < i; j++) data[j] = data[j + 1]; //� ��������������� ������ � ������� �������� 

	}
}
Void Main::buttonDeleteAll_Click(System::Object^ sender, System::EventArgs^ e) {
	i = 0;                                                                       //������� ���������� ����������� ����������
	this->listBox1->Items->Clear();                                             //ListBox ��������� �� ���������
	Console::WriteLine("��� ������ �������");
}
Void Main::buttonResult_Click(System::Object^ sender, System::EventArgs^ e) {
	Console::WriteLine("�������� ���� '���������'");                          //
	Result^ form = gcnew Result();               //�������������� ������� ����� Result
	form->Show();//� ������������ �� ������ 
}
Void Main::dataX_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (dataX->Text == "") {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 45) { e->Handled = true; }
	}
	else if (dataX->Text == "-") {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) { e->Handled = true; }
	}
	else
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 44) { e->Handled = true; }
}
Void Main::dataY_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (dataY->Text == "") {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 45) { e->Handled = true; }
	}
	else if (dataY->Text == "-") {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) { e->Handled = true; }
	}
	else
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 44) { e->Handled = true; }
}
Void Main::dataR_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (dataR->Text == "") {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) { e->Handled = true; }
	}
	else
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 44) { e->Handled = true; }
}
Void Main::dataX_Enter(System::Object^ sender, System::EventArgs^ e) {
	dataX->Text = "";
}
Void Main::dataY_Enter(System::Object^ sender, System::EventArgs^ e) {
	dataY->Text = "";
}
Void Main::dataR_Enter(System::Object^ sender, System::EventArgs^ e) {
	dataR->Text = "";
}
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
	Clousebutton->BackColor = System::Drawing::Color::Red;
}
Void Main::Clousebutton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Clousebutton->BackColor = System::Drawing::Color::Black;
}
Void Main::buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->DefaultExt = "csv";                                               //������������ �� ��������� ������ ����� csv
	saveFileDialog1->Filter = "CSV ���� (*.csv) | *.csv";                             // � � ������ �������� ����������� ������ ����� 
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //���� � ���� ���������� ������ �� ������ ��, �� 
		StreamWriter^ file = gcnew StreamWriter(saveFileDialog1->FileName, true);   //������������ � ��������� ���� ������:
		file->Write("Circle\n");                         //������������ ���� ��� ������������ �������� �������
		for (int j = 0; j < i; j++) {                    //� ������
			String^ X = Convert::ToString(data[j].GetX());
			String^ Y = Convert::ToString(data[j].GetY());
			String^ R = Convert::ToString(data[j].GetR());
			file->Write(X + ";" + Y + ";" + R + ".\n");
		}
		file->Close();
		//����� ������ ����������� ���������� ���� � ����������� ����������
		MessageBox::Show(this, "���� �������� � ����: " + saveFileDialog1->FileName, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Console::WriteLine("���������� �����...");
		Console::WriteLine("���� �������� � ����: " + saveFileDialog1->FileName);
	}
}
Void Main::buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->DefaultExt = "csv";                                              //������������ �� ��������� ������ ����� csv
	openFileDialog1->Filter = "CSV ���� (*.csv) | *.csv";                            // � � ������ �������� ����������� ������ ����� csv
	csv = true;
	while (csv) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {//���� � ���� ���������� ������ �� ������ ��, �� 
			StreamReader^ file = File::OpenText(openFileDialog1->FileName);           //����������� � ��������� ���� ����
			String^ X = ""; String^ Y = ""; String^ R = "";//��������� ���������� ������ ��� ������ � ���� �����       
			Console::WriteLine("�������� �����...\n" + openFileDialog1->FileName);
			X = file->ReadLine();
			if (X == "Circle") { // ���� �������� ���������� ����
				X = "";
				listBox1->Items->Clear();   i = 0; //ListBox ��������� �� ���������, ��������� ������� �����������
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
							x = Convert::ToDouble(X);
							y = Convert::ToDouble(Y);
							r = Convert::ToDouble(R);
							data[i].Set(x, y, r);
							Console::WriteLine("X: " + x + " Y: " + y + " R: " + r);
							this->listBox1->Items->Add("X: " + x + " Y: " + y + " R: " + r);
							column = 1; X = ""; Y = ""; R = ""; i++;//��������� �� ��������� ����������
						}
					}
					else {  //���� ����� ����������
						column = 1;
						Console::WriteLine("�������� ���������.");

						MessageBox::Show(this, "���� ��������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
						csv = false; //���� �������������
					}
				}
				file->Close();
			}
			else { //����� ������� ���� � �������
				Console::Write("������ �����!!!");
				MessageBox::Show(this, "�������� ���� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else break;//���� �� ������ ���� ��������
	}
}
Void Main::MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();                                                                                 //  ���������� �����������
}
Void Main::l3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = true;//���������� flage ���������� �������
	location = e->Location;
}
Void Main::l3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (flage) {
		screen = PointToScreen(e->Location); //����������� ���������� ����� �� �������� �����������
		Location = Point(screen.X - location.X, screen.Y - location.Y);//� ������������ � ������� ������������ ����� ��������� ����
	}
}
Void Main::l3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	flage = false;//���������� flage ���������� �����
}

System::Void ����������::Main::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	HelpForm^ form = gcnew HelpForm();
	form->Show();
}

System::Void ����������::Main::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if (i == 10) {                          // ���� ����� ��� 10 �����������, ��  
		this->buttonResult->Visible = true;//  ���������� ������ ����������
		this->panel2->Visible = false;    //   � ���������� TextBox'�
	} 
	else {
		this->buttonResult->Visible = false;                                       //������ ���������� ����������,
		this->panel2->Visible = true;                                             //TextBox'� ����������
	}
}
