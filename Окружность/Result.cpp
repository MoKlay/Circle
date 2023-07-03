#include "Result.h"
#include "Fields.h"

#define end "\r\n"

using namespace System;
using namespace Окружность;
using namespace Fields;

Void Result::Result_Shown(System::Object^ sender, System::EventArgs^ e) { //При открытии формы
	float average = 0;
	for (auto c : data) { average += c.GetR(); }                        //прибовляются все радиусы окружностей
	average /= 10;                                                     // и делится на их количество
	text_editor->Text = "Среднее значение радиуса: " + Convert::ToString(average) + end;
	text_editor->Text += "Координаты окружностей, у которых радиус больше среднего:" + end;
	for (auto c : data) {         //вычисление окружностей, у которых радиус больше среднего
		if (average < c.GetR())  text_editor->Text = "     X: " + c.GetX() + " Y: " + c.GetY() + end;
	}
}
Void Result::button1_Click_1(System::Object^ sender, System::EventArgs^ e) { // При нажатии на кнопку сохранить
	saveFileDialog1->DefaultExt = "txt";                                    //выстовляется по умолчанию формат файла txt
	saveFileDialog1->Filter = "TXT Файл (*.txt) | *.txt";                  // и в списке форматов добавляется формат файла txt
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {//Если в окне сохранения нажали на кнопку ОК, то 
		StreamWriter^ file = gcnew StreamWriter(saveFileDialog1->FileName, true); //записывается в указанный путь
		file->Write(text_editor->Text);                                             //записанный в TextBox результат
		file->Close();                                                          
		//После записи открывается диалоговое окно с информацией сохранения
		MessageBox::Show(this, "Файл сохранен в пути: " + saveFileDialog1->FileName, "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
Void Result::button_close1_Click_1(System::Object^ sender, System::EventArgs^ e) { //При нажаитии кнопки Х закрывается окно
	this->Close();
}
Void Result::label_circle_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = true;//переменная flage указывает что мышь нажата и удерживается
	location = e->Location; // записывается координаты мыши по координатам формы
}
Void Result::label_circle_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (flage) {
		screen = PointToScreen(e->Location); //записываетя координаты мышки по экранным координатам
		Location = Point(screen.X - location.X, screen.Y - location.Y);//и записывается в свойста расположения формы координат мыши
	}
}
Void Result::label_circle_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = false; //указывает, что кнопку опустили
}
//При наведении на кнопку курсором
Void Result::button_close1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	// становится красной
	close->BackColor = Color::Red;
}
// При выведении из кнопки курсор
Void Result::button_close1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	// черной
	close->BackColor = Color::Black;
}

Void Result::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ file = gcnew StreamWriter("Text.txt");
	file->Write(text_editor->Text);
	file->Close();
}
