#include "Main.h"
#include "Fields.h"
#include "Result.h"
#include "HelpForm.h"

using namespace System;
using namespace Окружность;
using namespace Fields;

int i = 0; //Количество добавленных окружностей
bool t = true, f = false, voll = false; 
bool zet;


void Main::TextBox() {
	dataX->Text = "0";
	dataY->Text = "0";
	dataR->Text = "0";
}
void Main::DeleteList() {
	listX->Items->Clear();
	listY->Items->Clear();
	listR->Items->Clear();
}
void Main::DeleteList(int i) {
	listX->Items->RemoveAt(i);
	listY->Items->RemoveAt(i);
	listR->Items->RemoveAt(i);
}

void Окружность::Main::AddList(float x, float y, float r) {
	this->listX->Items->Add(x);
	this->listY->Items->Add(y);
	this->listR->Items->Add(r);
}

void Окружность::Main::Visible(bool vis) { 
	if (vis) {
		delete_Panel->Visible = t;
		add->Visible = f;
		clear->Visible = f;
		back->Visible = t;
	}
	else {
		delete_Panel->Visible = f;
		add->Visible = t;
		clear->Visible = t;
		back->Visible = f;
	}
}

Void Main::Clousebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
Void Main::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i < 10) {
		// Конвертация введенных данных в переменную double
		float x = Convert::ToDouble(dataX->Text);
		float y = Convert::ToDouble(dataY->Text);
		float r = Convert::ToDouble(dataR->Text);
		//ограничение по записи значений
		if (x < 100 && x > -100 && y > -100 && y < 100 && r < 100) {
			data[i].Set(x, y, r);// Запись данных в массив объекта
			AddList(x, y, r);//Добавление в ListBox данных в элемент
			i++; //Счетчик прибавился
		}
		else
			MessageBox::Show(this, "Большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		TextBox();
	}
}
Void Main::buttonDeleteAll_Click(System::Object^ sender, System::EventArgs^ e) {
	i = 0;//счетчик количества окружностей обнуляется
	//ListBox очищается от элементов      
	DeleteList();
}
Void Main::buttonResult_Click(System::Object^ sender, System::EventArgs^ e) {
	Result^ form = gcnew Result();               //конструируется оконная форма Result
	form->Show();//и показывается на экране 
}
// Реализация обработки нужных символов в TextBox
Void Main::dataX_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    wchar_t l = e->KeyChar;
	//запись первых символов: цифры и минус
	if (dataX->Text == "") { if (!Char::IsDigit(l) && l != 8 && l != 45) e->Handled = true; }
	//если первый символ минус записывается цифра
	else if (dataX->Text == "-") { if (!Char::IsDigit(l) && l != 8) e->Handled = true; }
	//проверка: введенали запятая
	else if (l == 44 && dataX->Text->IndexOf(44) != -1) { e->Handled = true; }
	//если запина цифра может записатся запятая
	else if (!Char::IsDigit(l) && l != 8 && l != 44) { e->Handled = true; }
}
Void Main::dataY_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	wchar_t l = e->KeyChar;
	if (dataY->Text == "") { if (!Char::IsDigit(l) && l != 8 && l != 45) e->Handled = true; }
	else if (dataY->Text == "-") { if (!Char::IsDigit(l) && l != 8) e->Handled = true; }
	else if (l == 44 && dataY->Text->IndexOf(44) != -1) { e->Handled = true; }
	else if (!Char::IsDigit(l) && l != 8 && l != 44) { e->Handled = true; }
	
}
Void Main::dataR_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	wchar_t l = e->KeyChar;
	//в TextBox со значением R обрабатываюся только цифры и запятая, и backspace
	if (dataR->Text == "") { if (!Char::IsDigit(l) && l != 8) e->Handled = true; }
	else if (l == 44 && dataR->Text->IndexOf(44) != -1) { e->Handled = true; }
	else if (!Char::IsDigit(l) && l != 8 && l != 44) { e->Handled = true; }
	
}
//при фокусе текстовых полей поле становится пустым
Void Main::dataX_Enter(System::Object^ sender, System::EventArgs^ e) {
	dataX->Text = "";
}
Void Main::dataY_Enter(System::Object^ sender, System::EventArgs^ e) {
	dataY->Text = "";
}
Void Main::dataR_Enter(System::Object^ sender, System::EventArgs^ e) {
	dataR->Text = "";
}
//при расфокусировки текстовые поля если оно пустое записывается 0
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
	//При наведении курсором на кнопку Х становится красным
	close->BackColor = Color::Red;
}
Void Main::Clousebutton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//При выведении курсора из кнопки Х становится черным
	close->BackColor = Color::Transparent;
}
Void Main::buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i > 0) {
		saveFile->DefaultExt = "csv";                                               //выстовляется по умолчанию формат файла csv
		saveFile->Filter = "CSV Файл (*.csv) | *.csv";                             // и в списке форматов добавляется формат файла 
		if (saveFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //Если в окне сохранения нажали на кнопку ОК, то 
			StreamWriter^ file = gcnew StreamWriter(saveFile->FileName, true);   //записывается в указанный путь данные:
			file->Write("Circle.\n");                         //записывается ключ для правельности загрузки формата
			for (int j = 0; j < i; j++) {                    //и данные
				String^ X = Convert::ToString(data[j].GetX());
				String^ Y = Convert::ToString(data[j].GetY());
				String^ R = Convert::ToString(data[j].GetR());
				file->Write(X + ";" + Y + ";" + R + ".\n");
			}
			file->Close();
			//После записи открывается диалоговое окно с информацией сохранения
			MessageBox::Show(this, "Файл сохранен в пути: " + saveFile->FileName, "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
Void Main::buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {
	openFile->DefaultExt = "csv";                                              //выстовляется по умолчанию формат файла csv
	openFile->Filter = "CSV Файл (*.csv) | *.csv";                            // и в списке форматов добавляется формат файла csv
	csv = true;
	while (csv) {
		if (openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {//Если в окне сохранения нажали на кнопку ОК, то 
			StreamReader^ file = File::OpenText(openFile->FileName);           //открывается в указанном пути файл
			String^ X = ""; String^ Y = ""; String^ R = "";//создается переменные строки для записи в него чисел 
			int column = 1;
			X = file->ReadLine();
			if (X == "Circle.") { // если прочитал правельный ключ
				X = ""; DeleteList(); i = 0; //ListBox очищается от элементов, очищается счетчик окружностей
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
							float x = Convert::ToDouble(X);
							float y = Convert::ToDouble(Y);
							float r = Convert::ToDouble(R);
							data[i].Set(x, y, r);
							AddList(x, y, r);
							column = 1; X = ""; Y = ""; R = ""; i++;//переходим на следующую окружность
						}
					}
					else {  //Если поток закончился
						column = 1;
						MessageBox::Show(this, "Файл загружен!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
						csv = false; //цикл заканчивается
					}
				}
				file->Close();
			}
			else //иначе выводит окно с ошибкой
				MessageBox::Show(this, "Неверный файл загрузки!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else break;//если же закрыл окно загрузки
	}
}
Void Main::MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();                                              //  приложение завершается
}
Void Main::l3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	flage = true;//переменная flage указывает что мышь нажата и удерживается
	location = e->Location;// записывается координаты мыши по координатам формы
}
Void Main::l3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (flage) {
		screen = PointToScreen(e->Location); //записываетя координаты мышки по экранным координатам
		Location = Point(screen.X - location.X, screen.Y - location.Y);//и записывается в свойста расположения формы координат мыши
	}
}
Void Main::l3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { flage = false; }//указывает, что кнопку опустили

System::Void Окружность::Main::button1_Click(System::Object^ sender, System::EventArgs^ e) {//При нажатии на кнопку ?
	HelpForm^ form = gcnew HelpForm(); //конструируется
	form->Show();
}

Void Main::timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (i == 10) {                          // Если ввели все 10 окружностей, то  
		this->result->Visible = true;//  появляется кнопка Результата
		this->data_panel->Visible = false;    //   и скрываются TextBox'ы
	} 
	else {
		this->result->Visible = false;      //кнопка Результата скрывается,
		this->data_panel->Visible = true;    //TextBox'ы появляются
	}
}

Void Main::label2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	directory->BackColor = Color::White;
	directory->ForeColor = Color::Black;
}

Void Main::label2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	directory->BackColor = Color::Transparent;
	directory->ForeColor = SystemColors::Window;
}

Void Main::deletebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i > 0) {
		if (!delete_Panel->Visible) {//если панель с numUpDown не видна
			Visible(true);//показывает нужные элементы управления
			index_num->Maximum = i;//в numUpDown ставится мах значение
		}
		else {
			Visible(false);//возвращает кнопки
			i--;//уменьшает счетчик окружностей
			int in = Convert::ToInt32(index_num->Value);
			DeleteList(in - 1);//удаляет элемнт из списков
			for (int j = in; j < i; j++) data[j] = data[j+1];//перезапись данных
		}
	}
}

Void Main::back_Click(System::Object^ sender, System::EventArgs^ e) {
	Visible(false);
}

Void Main::Main_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox();
}

Void Main::label1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!voll) { this->WindowState = FormWindowState::Minimized; voll = true; }
	else this->WindowState = FormWindowState::Normal; voll = false;
}

System::Void Окружность::Main::label1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label1->BackColor = Color::White;
	label1->ForeColor = Color::Black;
}

System::Void Окружность::Main::label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label1->BackColor = Color::Transparent;
	label1->ForeColor = SystemColors::Window;
}
