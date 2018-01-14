#include "sqlTestForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	sql_test1::sqlTestForm form;
	Application::Run(%form);
	return 0;
}