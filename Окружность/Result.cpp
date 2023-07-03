#include "Result.h"
#include "Fields.h"

#define end "\r\n"

using namespace System;
using namespace ����������;
using namespace Fields;

Void Result::Result_Shown(System::Object^ sender, System::EventArgs^ e) { //��� �������� �����
	float average = 0;
	for (auto c : data) { average += c.GetR(); }                        //������������ ��� ������� �����������
	average /= 10;                                                     // � ������� �� �� ����������
	text_editor->Text = "������� �������� �������: " + Convert::ToString(average) + end;
	text_editor->Text += "���������� �����������, � ������� ������ ������ ��������:" + end;
	for (auto c : data) {         //���������� �����������, � ������� ������ ������ ��������
		if (average < c.GetR())  text_editor->Text = "     X: " + c.GetX() + " Y: " + c.GetY() + end;
	}
}
Void Result::button1_Click_1(System::Object^ sender, System::EventArgs^ e) { // ��� ������� �� ������ ���������
	saveFileDialog1->DefaultExt = "txt";                                    //������������ �� ��������� ������ ����� txt
	saveFileDialog1->Filter = "TXT ���� (*.txt) | *.txt";                  // � � ������ �������� ����������� ������ ����� txt
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {//���� � ���� ���������� ������ �� ������ ��, �� 
		StreamWriter^ file = gcnew StreamWriter(saveFileDialog1->FileName, true); //������������ � ��������� ����
		file->Write(text_editor->Text);                                             //���������� � TextBox ���������
		file->Close();                                                          
		//����� ������ ����������� ���������� ���� � ����������� ����������
		MessageBox::Show(this, "���� �������� � ����: " + saveFileDialog1->FileName, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
Void Result::button_close1_Click_1(System::Object^ sender, System::EventArgs^ e) { //��� �������� ������ � ����������� ����
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
Void Result::button_close1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	// ���������� �������
	close->BackColor = Color::Red;
}
// ��� ��������� �� ������ ������
Void Result::button_close1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	// ������
	close->BackColor = Color::Black;
}

Void Result::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ file = gcnew StreamWriter("Text.txt");
	file->Write(text_editor->Text);
	file->Close();
}
