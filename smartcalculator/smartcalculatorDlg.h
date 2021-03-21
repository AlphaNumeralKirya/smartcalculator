
// smartcalculatorDlg.h: файл заголовка
//

#pragma once
#include <string>
using namespace std;

// Диалоговое окно CsmartcalculatorDlg
class CsmartcalculatorDlg : public CDialogEx
{
// Создание
public:
	CsmartcalculatorDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SMARTCALCULATOR_DIALOG };
#endif

	protected:
		virtual void DoDataExchange(CDataExchange* pDX)
		{
			CDialogEx::DoDataExchange(pDX);
			DDX_Text(pDX, IDC_EDIT1, equationString);
			DDX_Text(pDX, IDC_EDIT2, answerString);
		}	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString equationString;
	CString answerString;
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton21();
	void deleteOperation(string operations[], int amount, int position);
	void replaceNumbers(double numbers[], int amount, int position, double number);
	void deleteSpacesAndReplaceCommas(string & equation);
	void findOutNumbersAndOperations(string equation, string numbers[], int & amountOfNumbers, string operations[], int & amountOfOperations);
	void stringToDouble(int & amountOfNumbers, string numbers[], double numbersDouble[]);
	void optimizeOperations(double numbersDouble[], int & amountOfNumbers, string operations[], int & amountOfOperations);
	void calculateSum(int & amountOfNumbers, double & answerDouble, double numbersDouble[]);
	string toStringAnswerDouble(double answerDouble);
};
