#include "Authentification.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
   // gestionAgenceVoiture::MyForm form;
   //gestionAgenceVoiture::MyForm1 form1;
    gestionAgenceVoiture::Authentification Authentification;

    Application::Run(% Authentification);
}
