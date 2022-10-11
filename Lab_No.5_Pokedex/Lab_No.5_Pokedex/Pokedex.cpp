#include "Pokedex.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LabNo5Pokedex::Pokedex form;
	Application::Run(% form);
	return 0;
}

