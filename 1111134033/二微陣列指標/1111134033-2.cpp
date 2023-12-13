﻿// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[][4]);
void swap(int* a, int* b);
int main(void)
{
    // initialize a
    int a[SIZE][4] = { {1,58,96,0},{2,52,91,0},{3,99,25,0}
        ,{4,33,100,0},{5,12,6,0},{6,33,1,0},
        {7,98,96,0},{8,75,68,0},{9,72,10,0},{10,87,87,0}};
    
    puts("Data items in original order");
    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }
    bubble(a);
   
    puts("\nData items in ascending order");
    printf("\n%4s %4s %4s %4s", "學號", "數學", "計概", "平均");
    // output sorted array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("\n%4d %4d %4d %4d", a[i][0], a[i][1], a[i][2], a[i][3]);
    }
    puts("");
}

void bubble(int array[][4])
{
    unsigned int pass;
    // bubble sort                                         
    // loop to control number of passes                    
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (size_t i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (array[i][3] < array[i + 1][3]) {
                swap(&array[i][0], &array[i + 1][0]);
                swap(&array[i][1], &array[i + 1][1]);
                swap(&array[i][2], &array[i + 1][2]);
                swap(&array[i][3], &array[i + 1][3])
            }
        }
    }
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;


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
