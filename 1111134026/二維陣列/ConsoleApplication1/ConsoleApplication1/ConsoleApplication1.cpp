﻿// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
//此程式是依照平均成績低到高排列
#include <stdio.h>
#define SIZE 10

void bubble(int array[][4]);
int main()
{
    int a[SIZE][4] = { {1,77,72,0},{2,55,89,0},{3,25,47,0},{4,89,41,0},{5,99,87,0},
        {6,56,72,0},{7,85,77,0},{8,77,72,0},{9,47,85,0},{10,20,72,0}};
    // 宣告變數二微陣列 a
    for (int i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2]) / 2;//計算平均
    }
    printf("%4s %4s %4s %4s","學號","數學","計概","平均");
    bubble(a);
   
    // output sorted array
    for (int i = 0; i < SIZE; ++i) {
        printf("\n%4d %4d %4d %4d", a[i][0],a[i][1],a[i][2],a[i][3]);
    }//列印副程式排列結果
    puts("");
}       
        //  & 取得變數的記憶體位址
        //  * 取得記憶體位址的內容

void bubble(int array[][4])//副程式(將a陣列引入變成array) 陣列為10列 4行
{
    unsigned int pass;
                       
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (int i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (array[i][3] > array[i + 1][3]) {
                int hold = array[i][0];
                array[i][0] = array[i + 1][0];
                array[i + 1][0] = hold;

                hold = array[i][1];
                array[i][1] = array[i + 1][1];
                array[i + 1][1] = hold;

                hold = array[i][2];
                array[i][2] = array[i + 1][2];
                array[i + 1][2] = hold;

                 hold = array[i][3];
                array[i][3] = array[i + 1][3];
                array[i + 1][3] = hold;
            }
        }
    }
}
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
