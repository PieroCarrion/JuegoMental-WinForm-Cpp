// ConsoleApplication8.cpp : main project file.

#include "stdafx.h"
#include <Windows.h>
#include "Calculadora.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	FreeConsole();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PjCalculadora::Calculadora form;
	Application::Run(%form);
}
