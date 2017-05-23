#include "stdafx.h"  //________________________________________ DivisionSintetica.cpp
#include "DivisionSintetica.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	DivisionSintetica app;
	return app.BeginDialog(IDI_DivisionSintetica, hInstance);
}

void DivisionSintetica::Window_Open(Win::Event& e)
{
}

void DivisionSintetica::btCalcular_Click(Win::Event& e)
{
}

