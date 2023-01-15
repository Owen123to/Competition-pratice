/* File name: circularQueue.cpp */
// �ϥ�������C�[�WTAG�B�z���--�s�W�B�R���B��X
// July 5, 2021

#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 5

class Cqueue {
private:
    char item[MAX][20];
    int front;
    int rear;
    int tag;  /* TAG���O��FRONT�Ҧb�O�_���x�s���
               0�ɬ��S���s���ơA1�ɬ����s���� */
public:
    Cqueue();
    void enqueue_f(void);   // �s�W���
    void dequeue_f(void);   // �R�����
    void list_f(void);      // ��X���
};

Cqueue::Cqueue()
{
    front = MAX - 1;
    rear = MAX - 1;
    tag = 0;
}

void Cqueue::enqueue_f(void)
{
    if (front == rear && tag == 1) // ���C�w���A�h��ܿ��~
        cout << "\n��C�w�� !\n";
    else {
        rear = (rear + 1) % MAX;
        cout << "\n �п�J�@�Ӫ���:  ";
        cin.getline(item[rear], 21);
        if(front == rear)
			tag = 1;
    }
}

void Cqueue::dequeue_f(void)
{
    if (front == rear && tag == 0)   // ���ƨS����Ʀs�b�A�h��ܿ��~
        cout << "\n ��C�O�Ū� !\n";
    else {
        front = (front + 1) % MAX;
        cout << "\n " << item[front] << "�w�Q�R��\n";
        if (front == rear)
			tag = 0;
    }
}

void Cqueue::list_f(void)
{
    int count = 0, i;
    if (front == rear && tag == 0)
        cout << "\n ��C�O�Ū�\n";
    else {
        cout << "\n  ITEM\n";
        cout << " ------------------\n";
        cout.setf(ios::left, ios::adjustfield);
        for (i = (front + 1) % MAX; i != rear; i = ++i % MAX) {
            cout << "  ";
            cout.width(20);
            cout << item[i] << "\n";
            count++;
        }
        cout << "  ";
        cout.width(20);
        cout << item[i] << "\n";
        cout.setf(ios::right, ios::adjustfield);
        cout << " ------------------\n";
        cout << "  �`�@��: " << ++count << "\n";
    }
}

int main()
{
    Cqueue obj;
    char option;

    while (1) {
        cout << "\n *****************************\n";
        cout << "       <1> �[�J (enqueue)\n";
        cout << "       <2> �R�� (dequeue)\n";
        cout << "       <3> �C�L\n";
        cout << "       <4> ����\n";
        cout << " *****************************\n";
        cout << " �п�J�ﶵ: ";
        while (cin.get(option) && option == '\n');
        cin.get();
        switch (option) {
            case '1':
                obj.enqueue_f();
                break;
            case '2':
                obj.dequeue_f();
                break;
            case '3':
                obj.list_f();
                break;
            case '4':
                exit(0);
        }
    }
}


