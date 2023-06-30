#include "Welcome.h"
#include "Fields.h"
#include "Main.h"

using namespace System;
using namespace Окружность;
using namespace Fields;

Void Welcome::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	//При каждой милисикунде таймера
	t++;                                                                  //счетчик прибовляется
	progressBar1->Value = t;                                             //в прогресе загрузки записывается процент загрузки)
	if (t <= 100) Console::WriteLine("Загрузка приложения: " + t + "%");//
	if (t == 100) {                                                    //Если счетчик равен 100, то 
		Console::Clear();                                             //
		this->Hide();                                                //форма скрывается
		Main^ frm = gcnew Main();               // конструируется окно
		frm->Show();                                               // и показывается
		this->timer1->Enabled = false;                            //таймер отключается
	}
}
