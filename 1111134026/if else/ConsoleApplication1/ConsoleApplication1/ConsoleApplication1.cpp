﻿
#include <iostream>
#include <stdio.h>

int main(void)
{
    int grade;
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");

    while ((grade = getchar()) != EOF) {

        if (grade == 'A' || grade == 'a') {
            ++aCount;
        }
        else if (grade == 'B' || grade == 'b') {
            ++bCount;
        }
        else if (grade == 'C' || grade == 'c') {
            ++cCount;
        }
        else if (grade == 'D' || grade == 'd') {
            ++dCount;
        }
        else if (grade == 'F' || grade == 'f') {
            ++fCount;
        }
        else if (grade == '\n' || grade == '\t' || grade == ' ') {     
       }
        else {
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
        }
    }

    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);

    return 0;
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
