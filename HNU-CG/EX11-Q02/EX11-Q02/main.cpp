//
//  main.cpp
//  EX11-Q02 学生成绩管理（二进制文件读写）
//
//  Created by Rain Chen on 2021/12/27.
//

#include <iostream>
using namespace std;
//  定义结构体 student 用于表示学生的基本信息，采用链表结构
struct student {
    int no;
    char name[20], sex;
    int age;
    float chinese, computer;
    student * next;
    bool operator<(const student & another) const {
        return ;
    }
};

student * ReadFile(FILE * fp, student * head, int & n);
void display(student * head);
void WriteFile(FILE * fp, student * head);
student * input(student * head, int & n);
student * LinkSort(student * head, const int & n);
void swapNode(student * s, student * q);

int main() {
    int n = 0;
    student * head = NULL;
    FILE * fp;
    
    fp = fopen("grade.bin", );
    head = ReadFile();
    display(head);
    fclose(fp);
    
    head = input(head, n);
    head = LinkSort(head, n);
    
    fp = fopen("grade.bin", "wb");
    WriteFile(fp, head);
    fclose(fp);
    
    return 0;
}

student * ReadFile(FILE * fp, student * head, int & n) {
    student * q = head;
    if (head) {
        while (q -> next) q = q -> next;
    }
    while (1) {
        student * p = new student;
        if (!fread()) {
            delete p;
            break;
        }
        p -> next = NULL;
        if (!head) {
            head = p;
        } else {
            q -> next = p;
        }
        q = p;
        n++;
    }
    return head;
}

void WriteFile() {
    while (head) {
        fwrite();
        head = head -> next;
    }
}

void display(student * head) {
    student * p = head;
    while (p) {
        
    }
}

student * input(student * head, int & n) {
    student * q = head;
    if (head) {
        while (q -> next) q = q -> next;
    }
    while (1) {
        printf("Input continue(y/n)?");
        if (getchar() != 'y') {
            break;
        }
        student * p = new student;
        printf("No: ");
        scanf("%d", &p -> no);
        getchar();
        printf("Name: ");
        gets(p -> name);
        printf("Sex(M/F): ");
        p -> sex = getchar();
        printf("Age: ");
        scanf("%d", &p -> age);
        printf("Chinese score: ");
        scanf("%f", &p -> chinese);
        printf("Computer score: ");
        scanf("%f", &p -> computer);
        p -> next = NULL;
        getchar();
        
        if (!head) {
            head = p;
        } else {
            q -> next = p;
        }
        q = p;
        n++;
    }
    return head;
}

student * LinkSort(student * head, const int & n) {
    student * p;
    for (int i = 1, i <= n - 1; i++) {
        p = head;
        for (int j = 0; )
    }
}
