//
//  main.cpp
//  EX11-Q02 学生成绩管理（二进制文件读写）
//
//  Created by Rain Chen on 2021/12/27.
//

#include <iostream>
using namespace std;

//  定义结构体用于表示学生的基本信息，采用链表结构

struct student {
    int no;
    char name[20], sex;
    int age;    //  年龄
    float chinese, computer;    //
    student * next;
    bool operator<(const student & another) {
        return /*write*/
    }
};
student * ReadFile(FILE * fp, student * head, int &n);
void display(student * head);
void WriteFile(FILE * fp, student * head);
student * input(student * head, int &n);
void swapNode(student * s, student * q);

int main() {
    int n = 0;
    student * head = NULL;
    FILE * fp;
    
    fp = fopen("grade.bin", /*write*/);
    display(head);
    fclose(fp);
    
}
