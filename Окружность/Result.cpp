#include "Result.h"
#include "Fields.h"

using namespace System;
using namespace Окружность;
using namespace Fields;

Void Result::Result_Shown(System::Object^ sender, System::EventArgs^ e) { //При открытии формы
	Console::WriteLine("Вычесление среднего значения радиуса...");           //
	for (int i = 0; i < 10; i++) { average += data[i].GetR(); }          //прибовляются все радиусы окружностей                                    //
	average /= 10;                                                       // и делится на их количество
	//в TextBox зписываются резльтаты
	this->textBox1->Text = "Среднее значение радиуса: " + Convert::ToString(average) + "\r\n";
	this->textBox1->Text += "Координаты окружностей, у которых радиус больше среднего:\r\n";
	Console::WriteLine("Выведение координат...");                    //
	for (auto c : data) {         //вычисление окружностей, у которых радиус больше среднего
		if (average < c.GetR())
			this->textBox1->Text += "     X: " + Convert::ToString(c.GetX()) + 
			" Y: " + Convert::ToString(c.GetY()) + "\r\n";
	}
	Console::WriteLine("Выполнено.");
}
Void Result::button1_Click_1(System::Object^ sender, System::EventArgs^ e) { // При нажатии на кнопку сохранить
	saveFileDialog1->DefaultExt = "txt";                                              //выстовляется по умолчанию формат файла txt
	saveFileDialog1->Filter = "TXT Файл (*.txt) | *.txt";                            // и в списке форматов добавляется формат файла txt
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {//Если в окне сохранения нажали на кнопку ОК, то 
		Console::WriteLine("Сохранения файла...");                                 //
		StreamWriter^ file = gcnew StreamWriter(saveFileDialog1->FileName, true); //записывается в указанный путь
		file->Write(textBox1->Text);                                             //записанный в TextBox результат
		file->Close();                                                          //
		//После записи открывается диалоговое окно с информацией сохранения
		MessageBox::Show(this, "Файл сохранен в пути: " + saveFileDialog1->FileName, "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Console::WriteLine("Файл сохранен в пути: " + saveFileDialog1->FileName);
	}
}
Void Result::button_close1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Console::WriteLine("Закрытие окна 'Результат'");
	this->Close();
}
Void Result::label_circle_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = true;//переменная flage становится истиной
	location = e->Location;
}
Void Result::label_circle_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (flage) {
		screen = PointToScreen(e->Location); //записываетя координаты мышки по экранным координатам
		Location = Point(screen.X - location.X, screen.Y - location.Y);//и записывается в свойста расположения формы координат мыши
	}
}
Void Result::label_circle_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = false;
}

System::Void Окружность::Result::button_close1_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	button_close1->BackColor = System::Drawing::Color::Red;
}

System::Void Окружность::Result::button_close1_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	button_close1->BackColor = System::Drawing::Color::Black;
}

