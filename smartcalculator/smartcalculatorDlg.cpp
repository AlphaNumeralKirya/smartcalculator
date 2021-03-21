
// smartcalculatorDlg.cpp: файл реализации
//

#include "pch.h"
#include "framework.h"
#include "smartcalculator.h"
#include "smartcalculatorDlg.h"
#include "afxdialogex.h"
#include <string>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;


// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Диалоговое окно CsmartcalculatorDlg



CsmartcalculatorDlg::CsmartcalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SMARTCALCULATOR_DIALOG, pParent)
	, equationString(_T(""))
	, answerString(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

BEGIN_MESSAGE_MAP(CsmartcalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON4, &CsmartcalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CsmartcalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CsmartcalculatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CsmartcalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CsmartcalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CsmartcalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CsmartcalculatorDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CsmartcalculatorDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CsmartcalculatorDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CsmartcalculatorDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CsmartcalculatorDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CsmartcalculatorDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON1, &CsmartcalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CsmartcalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CsmartcalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON16, &CsmartcalculatorDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CsmartcalculatorDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CsmartcalculatorDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CsmartcalculatorDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CsmartcalculatorDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON22, &CsmartcalculatorDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CsmartcalculatorDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CsmartcalculatorDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CsmartcalculatorDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON21, &CsmartcalculatorDlg::OnBnClickedButton21)
END_MESSAGE_MAP()


// Обработчики сообщений CsmartcalculatorDlg

BOOL CsmartcalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Добавление пункта "О программе..." в системное меню.

	// IDM_ABOUTBOX должен быть в пределах системной команды.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CsmartcalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CsmartcalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CsmartcalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CsmartcalculatorDlg::OnBnClickedButton4()
{
	UpdateData(1);
	equationString += "1";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton5()
{
	UpdateData(1);
	equationString += "2";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton6()
{
	UpdateData(1);
	equationString += "3";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton7()
{
	UpdateData(1);
	equationString += "4";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton8()
{
	UpdateData(1);
	equationString += "5";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton9()
{
	UpdateData(1);
	equationString += "6";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton10()
{
	UpdateData(1);
	equationString += "7";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton11()
{
	UpdateData(1);
	equationString += "8";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton12()
{
	UpdateData(1);
	equationString += "9";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton13()
{
	UpdateData(1);
	equationString += "0";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton14()
{
	UpdateData(1);
	equationString = equationString.Mid(0, equationString.GetLength() - 1);
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton15()
{
	UpdateData(1);
	equationString = "";
	answerString = "";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton1()
{
	UpdateData(1);
	equationString += "x";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton2()
{
	UpdateData(1);
	equationString += "^";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton3()
{
	UpdateData(1);
	equationString += "!";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton16()
{
	UpdateData(1);
	equationString += "+";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton17()
{
	UpdateData(1);
	equationString += "-";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton18()
{
	UpdateData(1);
	equationString += "*";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton19()
{
	UpdateData(1);
	equationString += "/";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton20()
{
	UpdateData(1);
	equationString += "=";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton22()
{
	UpdateData(1);
	equationString += "(";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton23()
{
	UpdateData(1);
	equationString += ")";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton24()
{
	UpdateData(1);
	equationString += "y";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton25()
{
	UpdateData(1);
	equationString += "a";
	UpdateData(0);
}


void CsmartcalculatorDlg::OnBnClickedButton21()
{
	UpdateData(1);
	answerString = "";
	//логика - разбиваем на числа, знаки и скобки, а потом делаем новые строки с приоритетами
	//логика - числа с минусами как число, все операции умножения и деления заменяем числом, потом складываем
	string equation = equationString;
	double answerDouble = 0;
	string numbers[25];
	string operations[25];
	double numbersDouble[25];
	int amountOfNumbers = 0;
	int amountOfOperations = 0; //на 1 меньше чем amountofNumbers
	string availableCharacters = "0123456789.,!*/+-";//^()[]";

	for (int i = 0; i < equation.length(); i++) {
		if (availableCharacters.find(equation[i]) == -1) {
			answerString = "Unavailable characters!";
			UpdateData(0);
			return;
		}
	}

	//убираем пробелы и заменяем запятые на точки
	deleteSpacesAndReplaceCommas(equation);

	//выделяем числа и знаки
	findOutNumbersAndOperations(equation, numbers, amountOfNumbers, operations, amountOfOperations);
	if (amountOfNumbers != amountOfOperations + 1) {
		answerString = "Not finished equation!";
		UpdateData(0);
		return;
	}
	if (equation[0] == '*' || equation[0] == '/') {
		answerString = "Not finished equation!";
		UpdateData(0);
		return;
	}

	//debugging
	/*answerString += to_string(amountOfNumbers).c_str();
	for (int i = 0; i < amountOfNumbers; i++) {
		answerString += numbers[i].c_str();
		answerString += " ";
		answerString += operations[i].c_str();
		answerString += " ";
		UpdateData(0);
	}*/

	//преобразуем числа из строк в double
	stringToDouble(amountOfNumbers, numbers, numbersDouble);

	//считаем произведения и заменяем их одним числом
	optimizeOperations(numbersDouble, amountOfNumbers, operations, amountOfOperations);
	calculateSum(amountOfNumbers, answerDouble, numbersDouble);

	//убираем лишние нули в числовой строке
	answerString = toStringAnswerDouble(answerDouble).c_str();
	UpdateData(0);
}

void CsmartcalculatorDlg::deleteOperation(string operations[], int amount, int position) {
	for (int i = position; i < amount - 1; i++) {
		operations[i] = operations[i + 1];
	}
}

//заменяет a*b в массиве чисел на их произведение, убирая второе число
void CsmartcalculatorDlg::replaceNumbers(double numbers[], int amount, int position, double number) {
	numbers[position] = number;
	for (int i = position + 1; i < amount - 1; i++) {
		numbers[i] = numbers[i + 1];
	}
}

void CsmartcalculatorDlg::deleteSpacesAndReplaceCommas(string &equation) {
	while (equation.find_first_of(",") != -1) {
		equation.replace(equation.find_first_of(","), 1, ".");
	}
	while (equation.find_first_of(" ") != -1) {
		equation.erase(equation.find_first_of(" "), 1);
	}
}

void CsmartcalculatorDlg::findOutNumbersAndOperations(string equation, string numbers[], int &amountOfNumbers, string operations[], int &amountOfOperations) {
	const string SYMBOLS = "+-*/=!^";
	while (equation != "") {
		//поиск числа
		int index1 = equation.find_first_of(SYMBOLS);
		if (index1 > 0) {
			numbers[amountOfNumbers] = equation.substr(0, index1);
			amountOfNumbers++;
			equation.erase(0, index1);
		}
		else {
			if (equation.find_last_of(SYMBOLS) > 0) {
				numbers[amountOfNumbers] += equation.substr(0, 1);
				equation.erase(0, 1);
				numbers[amountOfNumbers] += equation.substr(0, equation.find_first_of(SYMBOLS));
				equation.erase(0, equation.find_first_of(SYMBOLS));
				amountOfNumbers++;
			}
			else {
				numbers[amountOfNumbers] = equation;
				equation = "";
				amountOfNumbers++;
			}
		}

		//поиск знака
		int index2 = equation.find_first_not_of(SYMBOLS);
		if (index2 != -1) {
			equation.erase(0, index2 - 1);
			operations[amountOfOperations] = equation.substr(0, 1);
			equation.erase(0, 1);
			amountOfOperations++;
		}
		else {
			//throw exception - only characters
		}
	}

	for (int i = 0; i < amountOfOperations; i++) {
		if (operations[i] == "-") {
			operations[i] = "+";
			numbers[i + 1] = "-" + numbers[i + 1];
		}
	}
}

void CsmartcalculatorDlg::stringToDouble(int &amountOfNumbers, string numbers[], double numbersDouble[]) {
	for (int i = 0; i < amountOfNumbers; i++) {
		numbersDouble[i] = stod(numbers[i]);
	}
}

void CsmartcalculatorDlg::optimizeOperations(double numbersDouble[], int &amountOfNumbers, string operations[], int &amountOfOperations) {
	for (int i = 0; i < amountOfOperations; i++) {
		if (operations[i] == "*") {
			double number = numbersDouble[i] * numbersDouble[i + 1];
			replaceNumbers(numbersDouble, amountOfNumbers, i, number);
			deleteOperation(operations, amountOfOperations, i);
			amountOfNumbers--;
			amountOfOperations--;
			i--;
		}
		else if (operations[i] == "/") {
			double number = (double)numbersDouble[i] / numbersDouble[i + 1];
			replaceNumbers(numbersDouble, amountOfNumbers, i, number);
			deleteOperation(operations, amountOfOperations, i);
			amountOfNumbers--;
			amountOfOperations--;
			i--;
		}
	}
}

void CsmartcalculatorDlg::calculateSum(int &amountOfNumbers, double &answerDouble, double numbersDouble[]) {
	for (int i = 0; i < amountOfNumbers; i++) {
		answerDouble += numbersDouble[i];
	}
}

string CsmartcalculatorDlg::toStringAnswerDouble(double answerDouble) {
	string toAnswer = to_string(answerDouble);
	while (toAnswer[toAnswer.length() - 1] == '0') {
		toAnswer.erase(toAnswer.length() - 1, 1);
	}
	if (toAnswer[toAnswer.length() - 1] == '.') {
		toAnswer.erase(toAnswer.length() - 1, 1);
	}
	return toAnswer;
}