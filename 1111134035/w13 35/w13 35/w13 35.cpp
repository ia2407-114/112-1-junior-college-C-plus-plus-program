﻿// w13 35.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// function to perform binary search of an array
#include <stdio.h>
#define SIZE 10

// function main begins program execution
int binarySearch(const int b[], int searchKey, int low, int high);
void bubble(int array[SIZE]);
int main(void)
{
  
    int a[SIZE] ,key=1,result;
    puts("輸10個數");
    
    for (int i = 0; i < SIZE; ++i) {
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }
    bubble(a);
    puts("\nData items in ascending order");
    
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts("");
    while (key!=-1) 
    {
        printf("\n搜尋的數");
        scanf_s("%d", &key);
        result = binarySearch(a, key, 0, SIZE - 1);
        if (result != -1) {
            printf("你找的%d在a[]中第%d個",key,result+1);
        }
        else
        {
            printf("你找的%d不在a[]", key);
        }
   }   
}

void bubble(int array[SIZE])
{
    unsigned int pass;
                     
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

          
        for (int i = 0; i < SIZE - 1; ++i) {
                    
            if (array[i] > array[i + 1]) {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
}
int binarySearch(const int b[], int searchKey, int low, int high)
{
    
    while (low <= high) {

       
        int middle = (low + high) / 2;

     

        if (searchKey == b[middle]) {
            return middle;
        }

        
        else if (searchKey < b[middle]) {
            high = middle - 1;  
        }

     
        else {
            low = middle + 1; 
        }
    }
    return -1;
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
