#include "MyForm.h"
#include "hire.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	//utworzenie i wyświetlenie głównej formatki
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CodeClicker::MyForm form;
	Application::Run(%form);
}
