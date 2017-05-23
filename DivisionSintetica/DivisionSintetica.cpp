#include "stdafx.h"  //________________________________________ DivisionSintetica.cpp
#include "DivisionSintetica.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	DivisionSintetica app;
	return app.BeginDialog(IDI_DivisionSintetica, hInstance);
}

void DivisionSintetica::Window_Open(Win::Event& e)
{
}

void DivisionSintetica::btCalcular_Click(Win::Event& e)
{
	valarray<double>input;
	valarray<double>output;
	Sys::Convert::ToVector(tbxInput.Text, input);
	Division(tbxX.DoubleValue, input, output);
	wstring text;
	Sys::Convert::ToString(output, text);
	tbxSalida.Text = text;
}
void DivisionSintetica::Division(double x, const valarray<double>&input, valarray<double>&output)
{
	double s = input[0];
	wstring salida = Sys::Convert::ToString(s);
	int y = input.size();
	for (int i = 1; i < y; i++)
	{
		s = (s*x) + input[i];
		salida += L",";
		salida += Sys::Convert::ToString(s);
	}
	Sys::Convert::ToVector(salida,output);
}


