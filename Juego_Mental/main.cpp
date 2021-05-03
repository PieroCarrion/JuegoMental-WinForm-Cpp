#include "FmJuego.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;

void main() {
	FreeConsole();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Juego_Mental::FmJuego form;
	Application::Run(%form);
}