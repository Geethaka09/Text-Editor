#include "MyForm.h"
#include <string>

#include <Regex>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	NotePad::MyForm form;
	Application::Run(% form);
}


