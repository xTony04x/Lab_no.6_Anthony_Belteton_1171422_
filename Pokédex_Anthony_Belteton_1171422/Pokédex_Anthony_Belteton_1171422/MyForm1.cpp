#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Pok�dexAnthonyBelteton1171422::MyForm1 form;
	Application::Run(% form);
	return 0;
}

