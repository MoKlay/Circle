#include "HelpForm.h"

using namespace Окружность;

HelpForm::HelpForm() { //конструктор формы 
	InitializeComponent();
	StreamReader^ file = File::OpenText("Contacts.txt");//записывается фалй о разработчике
	textBox2->Text = file->ReadToEnd(); //и записывается в текстовое поле
	file = File::OpenText("README.txt");// после считывает файл о приложении
	textBox1->Text = file->ReadToEnd(); //и записывается в текстовое поле
	file->Close();
}
