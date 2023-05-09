#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
clock_t start_time = clock();
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
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // Получаем дескриптор консоли
// Текстовый курсор в точку x,y 
void GoToXY(short x, short y)
{
    SetConsoleCursorPosition(hStdOut, { x, y });
}
void ConsoleCursorVisible(bool show, short size)
{
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut, &structCursorInfo);
    structCursorInfo.bVisible = show; // изменяем видимость курсора
    structCursorInfo.dwSize = size;   // изменяем размер курсора
    SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}
string Slovo() {

    setlocale(0, "");
    // Открываем файл для чтения
    ifstream inputFile("slovo.txt");

    // Проверяем, удалось ли открыть файл
    if (!inputFile.is_open()) {
        cerr << "Ошибка открытия файла!" << endl;

    }

    // Считываем содержимое файла в строку
    string inputString;
    getline(inputFile, inputString);

    // Закрываем файл
    inputFile.close();

    // Переворачиваем строку

    string words = _strrev((char*)inputString.c_str());

    // string words;
    words[rand() % (sizeof(words) / sizeof(words[0]))];
    //выделяем слово ;

    return words;
}
void Game(string slovo) {
    char c = 0;
    int r = 0;
    string sl = slovo;
    int lengt = slovo.size();
    char player[100];
    int count_shift = 0;
    char * mas = new char[lengt];
    for (int i = 0; i < lengt; i++)
    {
        mas[i] ='*';
    }
    int k = 0;
    int countPlayer = 0;
    ConsoleCursorVisible(false, 100);
    
    do
    {
        shoW(r);
        cout << "\n\n";
            for (int i = 0; i < lengt; i++)
            {
                cout << mas[i] << " ";
            }

        cout << "\nPlease Enter Symbol\n";
        c = _getch();
        count_shift++;
        player[countPlayer] = c;
        countPlayer++;
        if (sl[k] != c) {
            r++;
            system("cls");
            continue;
        }
        if ( sl[k] == c) {
            mas[k] = c;
            k++;
        }
        
        system("cls");
    } while (r < 10 && k < lengt);

    if (r == 10) {
        cout << "You've lost\n";
        cout << setw(58) << "Slovo - " << sl << endl;
        int waste_time = int(clock() - start_time) / CLOCKS_PER_SEC;
        int h, m, sec;
        h = waste_time / 60 / 60;
        m = (waste_time - h * 3600) / 60;
        sec = waste_time % 60;
        cout << setw(58) << "Time - " << m << " m " << sec << " s\n";
        cout << setw(58)<<"Your letter - ";
        for (int i = 0; i < countPlayer; i++)
        {
            cout << player[i];
        }
        cout << endl;
        cout << setw(58) << "number of attempts - " << count_shift << endl;
    }
    if (k == lengt) {
        cout << "You Win!!!\n";
        cout << setw(58) << "Slovo - " << sl << endl;
        int waste_time = int(clock() - start_time) / CLOCKS_PER_SEC;
        int h, m, sec;
        h = waste_time / 60 / 60;
        m = (waste_time - h * 3600) / 60;
        sec = waste_time % 60;
        cout << setw(58) << "Time - " << m << " m " << sec << " s\n";
        cout << setw(58) << "Your letter - ";
        for (int i = 0; i < countPlayer; i++)
        {
            cout << player[i];
        }
        cout << endl;
        cout << setw(58) << "number of attempts - " << count_shift << endl;
    }
}