#include "HelpForm.h"

using namespace ����������;

HelpForm::HelpForm() { //����������� ����� 
	InitializeComponent();
	StreamReader^ file = File::OpenText("Contacts.txt");//������������ ���� � ������������
	textBox2->Text = file->ReadToEnd(); //� ������������ � ��������� ����
	file = File::OpenText("README.txt");// ����� ��������� ���� � ����������
	textBox1->Text = file->ReadToEnd(); //� ������������ � ��������� ����
	file->Close();
}
