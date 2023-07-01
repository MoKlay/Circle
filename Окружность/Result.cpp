#include "Result.h"
#include "Fields.h"

using namespace System;
using namespace ����������;
using namespace Fields;

Void Result::Result_Shown(System::Object^ sender, System::EventArgs^ e) { //��� �������� �����
	Console::WriteLine("���������� �������� �������� �������...");       //
	for (auto c : data) { average += c.GetR(); }                        //������������ ��� ������� �����������
	average /= 10;                                                     // � ������� �� �� ����������
	//� TextBox ����������� ���������
	this->textBox1->Text = "������� �������� �������: " + Convert::ToString(average) + "\r\n";
	this->textBox1->Text += "���������� �����������, � ������� ������ ������ ��������:\r\n";
	Console::WriteLine("��������� ���������...");                    
	for (auto c : data) {         //���������� �����������, � ������� ������ ������ ��������
		if (average < c.GetR())
			this->textBox1->Text += "     X: " + c.GetX() + " Y: " + c.GetY() + "\r\n";
	}
	Console::WriteLine("���������.");
}
Void Result::button1_Click_1(System::Object^ sender, System::EventArgs^ e) { // ��� ������� �� ������ ���������
	saveFileDialog1->DefaultExt = "txt";                                    //������������ �� ��������� ������ ����� txt
	saveFileDialog1->Filter = "TXT ���� (*.txt) | *.txt";                  // � � ������ �������� ����������� ������ ����� txt
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {//���� � ���� ���������� ������ �� ������ ��, �� 
		Console::WriteLine("���������� �����...");                                 //
		StreamWriter^ file = gcnew StreamWriter(saveFileDialog1->FileName, true); //������������ � ��������� ����
		file->Write(textBox1->Text);                                             //���������� � TextBox ���������
		file->Close();                                                          
		//����� ������ ����������� ���������� ���� � ����������� ����������
		MessageBox::Show(this, "���� �������� � ����: " + saveFileDialog1->FileName, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Console::WriteLine("���� �������� � ����: " + saveFileDialog1->FileName);
	}
}
Void Result::button_close1_Click_1(System::Object^ sender, System::EventArgs^ e) { //��� �������� ������ � ����������� ����
	Console::WriteLine("�������� ���� '���������'");
	this->Close();
}
Void Result::label_circle_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = true;//���������� flage ��������� ��� ���� ������ � ������������
	location = e->Location; // ������������ ���������� ���� �� ����������� �����
}
Void Result::label_circle_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (flage) {
		screen = PointToScreen(e->Location); //����������� ���������� ����� �� �������� �����������
		Location = Point(screen.X - location.X, screen.Y - location.Y);//� ������������ � ������� ������������ ����� ��������� ����
	}
}
Void Result::label_circle_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = false; //���������, ��� ������ ��������
}
//��� ��������� �� ������ ��������
System::Void ����������::Result::button_close1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	// ���������� �������
	button_close1->BackColor = System::Drawing::Color::Red;
}
// ��� ��������� �� ������ ������
System::Void ����������::Result::button_close1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	// ������
	button_close1->BackColor = System::Drawing::Color::Black;
}