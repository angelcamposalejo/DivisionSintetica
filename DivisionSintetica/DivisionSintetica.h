#pragma once  //______________________________________ DivisionSintetica.h  
#include "Resource.h"
class DivisionSintetica : public Win::Dialog
{
public:
	DivisionSintetica()
	{
	}
	~DivisionSintetica()
	{
	}
	void Division(double x, const valarray<double>&input, valarray<double>&output);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxInput;
	Win::Label lb2;
	Win::Textbox tbxX;
	Win::Button btCalcular;
	Win::Textbox tbxSalida;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(323);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(127);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"DivisionSintetica";
		lb1.Create(NULL, L"F(x)=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10, 6, 54, 25, hWnd, 1000);
		tbxInput.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 63, 6, 144, 25, hWnd, 1001);
		lb2.Create(NULL, L"X=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10, 41, 52, 25, hWnd, 1002);
		tbxX.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 60, 42, 64, 25, hWnd, 1003);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 213, 7, 99, 28, hWnd, 1004);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 10, 95, 306, 25, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxInput.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxX.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) { btCalcular_Click(e); return true; }
		return false;
	}
};
