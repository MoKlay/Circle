#include "Main.h"
#include "Fields.h"
#include "Result.h"
#include "HelpForm.h"

using namespace System;
using namespace Окружность;
using namespace Fields;

int i = 0; //Количество добавленных окружностей

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
		// Конвертация введенных данных в переменную double
		x = Convert::ToDouble(dataX->Text);
		y = Convert::ToDouble(dataY->Text);
		r = Convert::ToDouble(dataR->Text);
		data[i].Set(x, y, r);// Запись данных в массив объекта
		this->listBox1->Items->Add("X: " + x + " Y: " + y + " R: " + r); //Добавление в ListBox данных в элемент
		Console::WriteLine
		("Добавлено окружность №" + (i + 1) + " с данными: X:" + data[i].GetX() +
			" Y: " + data[i].GetY() + " R: " + data[i].GetR());
		i++; //Счетчик прибавился
		TextBox();
	}
}
Void Main::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedItem) {                                                     //Если в ListBox'е выбран элемент, то 
		int d = listBox1->SelectedIndex + 1;
		Console::WriteLine("Удалено окружность №" + d + "\nПерезапись данных");
		i--;                                                                         //счетчик количества окружностей уменьшается,
		this->listBox1->Items->Remove(listBox1->SelectedItem);                      //выбранный элемент удаляется,
		for (int j = listBox1->SelectedIndex; j < i; j++) data[j] = data[j + 1]; //и перезаписываюся данные в массиве обьектов 

	}
}
Void Main::buttonDeleteAll_Click(System::Object^ sender, System::EventArgs^ e) {
	i = 0;                                                                       //счетчик количества окружностей обнуляется
	this->listBox1->Items->Clear();                                             //ListBox очищается от элементов
	Console::WriteLine("Все данные удалены");
}
Void Main::buttonResult_Click(System::Object^ sender, System::EventArgs^ e) {
	Console::WriteLine("Открытие окна 'Результат'");                          //
	Result^ form = gcnew Result();               //конструируется оконная форма Result
	form->Show();//и показывается на экране 
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
	saveFileDialog1->DefaultExt = "csv";                                               //выстовляется по умолчанию формат файла csv
	saveFileDialog1->Filter = "CSV Файл (*.csv) | *.csv";                             // и в списке форматов добавляется формат файла 
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //Если в окне сохранения нажали на кнопку ОК, то 
		StreamWriter^ file = gcnew StreamWriter(saveFileDialog1->FileName, true);   //записывается в указанный путь данные:
		file->Write("Circle\n");                         //записывается ключ для правельности загрузки формата
		for (int j = 0; j < i; j++) {                    //и данные
			String^ X = Convert::ToString(data[j].GetX());
			String^ Y = Convert::ToString(data[j].GetY());
			String^ R = Convert::ToString(data[j].GetR());
			file->Write(X + ";" + Y + ";" + R + ".\n");
		}
		file->Close();
		//После записи открывается диалоговое окно с информацией сохранения
		MessageBox::Show(this, "Файл сохранен в пути: " + saveFileDialog1->FileName, "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Console::WriteLine("Сохранение файла...");
		Console::WriteLine("Файл сохранен в пути: " + saveFileDialog1->FileName);
	}
}
Void Main::buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->DefaultExt = "csv";                                              //выстовляется по умолчанию формат файла csv
	openFileDialog1->Filter = "CSV Файл (*.csv) | *.csv";                            // и в списке форматов добавляется формат файла csv
	csv = true;
	while (csv) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {//Если в окне сохранения нажали на кнопку ОК, то 
			StreamReader^ file = File::OpenText(openFileDialog1->FileName);           //открывается в указанном пути файл
			String^ X = ""; String^ Y = ""; String^ R = "";//создается переменные строки для записи в него чисел       
			Console::WriteLine("Загрузка файла...\n" + openFileDialog1->FileName);
			X = file->ReadLine();
			if (X == "Circle") { // если прочитал правельный ключ
				X = "";
				listBox1->Items->Clear();   i = 0; //ListBox очищается от элементов, очищается счетчик окружностей
				while (csv) {
					int intdata = file->Read(); //считывание по символьно
					if (intdata != -1) {
						if (Char::IsDigit(intdata) || intdata == 44 || intdata == 45) {//Если прочитала цифру
							switch (column) {//записывает в
							case 1://Х
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
						else if (intdata == 59) column++;//Если прочитал ; то следующая переменная строки
						else if (intdata == 46) { //если встрети точку
							//Добавляем загруженные данные в ListBox и в массив окружностей
							x = Convert::ToDouble(X);
							y = Convert::ToDouble(Y);
							r = Convert::ToDouble(R);
							data[i].Set(x, y, r);
							Console::WriteLine("X: " + x + " Y: " + y + " R: " + r);
							this->listBox1->Items->Add("X: " + x + " Y: " + y + " R: " + r);
							column = 1; X = ""; Y = ""; R = ""; i++;//переходим на следующую окружность
						}
					}
					else {  //Если поток закончился
						column = 1;
						Console::WriteLine("Загрузка выполнена.");

						MessageBox::Show(this, "Файл загружен!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
						csv = false; //цикл заканчивается
					}
				}
				file->Close();
			}
			else { //иначе выводит окно с ошибкой
				Console::Write("Ошибка файла!!!");
				MessageBox::Show(this, "Неверный файл загрузки!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else break;//если же закрыл окно загрузки
	}
}
Void Main::MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();                                                                                 //  приложение завершается
}
Void Main::l3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = true;//переменная flage становится истиной
	location = e->Location;
}
Void Main::l3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (flage) {
		screen = PointToScreen(e->Location); //записываетя координаты мышки по экранным координатам
		Location = Point(screen.X - location.X, screen.Y - location.Y);//и записывается в свойста расположения формы координат мыши
	}
}
Void Main::l3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	flage = false;//переменная flage становится ложью
}

System::Void Окружность::Main::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	HelpForm^ form = gcnew HelpForm();
	form->Show();
}

System::Void Окружность::Main::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if (i == 10) {                          // Если ввели все 10 окружностей, то  
		this->buttonResult->Visible = true;//  появляется кнопка Результата
		this->panel2->Visible = false;    //   и скрываются TextBox'ы
	} 
	else {
		this->buttonResult->Visible = false;                                       //кнопка Результата скрывается,
		this->panel2->Visible = true;                                             //TextBox'ы появляются
	}
}
