#include "Welcome.h"
#include "Fields.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Окружность;


[STAThreadAttribute]
int main() {
	Welcome^ form = gcnew Welcome();//коструируется окно с заставкой
	Application::Run(form); // и запускает окно
}