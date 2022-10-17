#include "MyForm3.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PokédexAnthonyBelteton1171422::MyForm3 form;
	Application::Run(% form);
	return 0;
}
