
// smartcalculator.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// основные символы


// CsmartcalculatorApp:
// Сведения о реализации этого класса: smartcalculator.cpp
//

class CsmartcalculatorApp : public CWinApp
{
public:
	CsmartcalculatorApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CsmartcalculatorApp theApp;
