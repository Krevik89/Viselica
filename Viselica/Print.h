#pragma once
#include <iostream>
#include<Windows.h>
#include<conio.h>

using namespace std;

void shoW(int s) {
    switch (s)
    {
    case 0:
        cout << "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                                 \n";
            
        break;
    case 1:
        cout << "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "                       \n"
            "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    case 2:
        cout << "                       \n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    case 3:
        cout << "        $$$$$$$$$$$$$$$\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    case 4:
        cout << "        $$$$$$$$$$$$$$$\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    case 5:
        cout << "        $$$$$$$$$$$$$$$\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        O             $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    case 6:
        cout << "        $$$$$$$$$$$$$$$\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        O             $\n"
            "      /               $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    case 7:
        cout << "        $$$$$$$$$$$$$$$\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        O             $\n"
            "      /   \\           $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    case 8:
        cout << "        $$$$$$$$$$$$$$$\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        O             $\n"
            "      / | \\           $\n"
            "        |             $\n"
            "                      $\n"
            "                      $\n"
            "                      $\n"
            "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    case 9:
        cout << "        $$$$$$$$$$$$$$$\n"
        "        |             $\n"
        "        |             $\n"
        "        |             $\n"
        "        |             $\n"
        "        O             $\n"
        "      / | \\           $\n"
        "        |             $\n"
        "       /              $\n"
        "                      $\n"
        "                      $\n"
        "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    case 10:
        cout << "        $$$$$$$$$$$$$$$\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        |             $\n"
            "        O             $\n"
            "      / | \\           $\n"
            "        |             $\n"
            "       / \\            $\n"
            "                      $\n"
            "                      $\n"
            "            $$$$$$$$$$$$$$$$$$$$$\n";
        break;
    }
    
            
}
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // ѕолучаем дескриптор консоли
// “екстовый курсор в точку x,y 
void GoToXY(short x, short y)
{
    SetConsoleCursorPosition(hStdOut, { x, y });
}
void ConsoleCursorVisible(bool show, short size)
{
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut, &structCursorInfo);
    structCursorInfo.bVisible = show; // измен€ем видимость курсора
    structCursorInfo.dwSize = size;   // измен€ем размер курсора
    SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}

void Show2() {
    char c = 0;
    int r = 0;
    char mas[5]{'*','*','*','*','*' };
     int k = 0;

    ConsoleCursorVisible(false, 100);
    do
    {
        shoW(r);
        cout << "\n\n";
            for (int i = 0; i < 5; i++)
            {
                cout << mas[i] << " ";
            }
            
        cout << "\nPlease Enter Symbol\n";
        c = _getch();

        if (int(c) < 97 || int(c) > 122) {
            r++;
            system("cls");
            continue;
        }
        if (int(c) > 96 || int(c) < 123) {
            mas[k] = c;
            k++;
        }
        
        
        system("cls");
    } while (r < 10 && k < 5);
    if (r == 10) {
        cout << "You've lost";
    }
    if (k == 5) {
        cout << "You Win!!!";
    }
}