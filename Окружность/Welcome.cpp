#include "Welcome.h"
#include "Fields.h"
#include "Main.h"

using namespace System;
using namespace ����������;
using namespace Fields;

int t = 0;

Void Welcome::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	//��� ������ ����������� �������
	t++;                                                                  //������� ������������
	progressBar1->Value = t;                      //� �������� �������� ������������ ������� ��������)
	if (t == 100) {                                                    //���� ������� ����� 100, �� 
		this->Hide();                                                //����� ����������
		Main^ frm = gcnew Main();                                   // �������������� ����
		frm->Show();                                               // � ������������
		this->timer1->Enabled = false;                            //������ �����������
	}
}
