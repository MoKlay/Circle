#include "Welcome.h"
#include "Fields.h"
#include "Main.h"

using namespace System;
using namespace ����������;
using namespace Fields;

Void Welcome::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	//��� ������ ����������� �������
	t++;                                                                  //������� ������������
	progressBar1->Value = t;                                             //� �������� �������� ������������ ������� ��������)
	if (t <= 100) Console::WriteLine("�������� ����������: " + t + "%");//
	if (t == 100) {                                                    //���� ������� ����� 100, �� 
		Console::Clear();                                             //
		this->Hide();                                                //����� ����������
		Main^ frm = gcnew Main();               // �������������� ����
		frm->Show();                                               // � ������������
		this->timer1->Enabled = false;                            //������ �����������
	}
}
