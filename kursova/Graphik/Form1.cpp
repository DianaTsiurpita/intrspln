#include "Form1.h"
#include <cmath>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::ComponentModel;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Graphik::Form1 form;
    Application::Run(% form);
    return 0;
}
