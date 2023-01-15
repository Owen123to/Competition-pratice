// File name: oddMagic.cpp
// �_���]�N��}��@
// July 5, 2021

#include <iostream>
#include <iomanip>
using namespace std;
#define MAX	15         // �x�}�̤j��15 x 15
int Square[MAX][MAX];  // �w�q��Ưx�}
int N;                 // �x�}��C�j�p�ܼ�
void Magic();

int main()
{
    int i, j;
    /*Ū���]�N�x�}���j�pN, N ���_�ƥB0 <= N <= 15 */
    do {
        cout << "\nEnter odd matrix size : ";
        cin >> N;
            if (N % 2 == 0 || N<= 0 || N >15)
            cout << "Should be > 0 and < 15 odd number";
        else
            break;
    } while (1);

    Magic();  // �Nsquare �ܬ�N x N ���]�N�x�}

    // ����]�N�x�}���G
    cout << "\nThe "<< N << "*" << N << " Magic Matrix\n";
    cout << "-------------------------\n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << setw(4) << Square[i][j];
        cout << "\n";
    }
    return 0;
}

void Magic()
{
    int i, j, p, q, key;

    // ��l�Ưx�}���e, �x�}�����M 0
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            Square[i][j] = 0;

    Square[0][(N -1) /2] = 1; // �N 1��̤ܳW�C������m
    key = 2;
    i = 0;
    j = (N-1) / 2;       // i, j�O���ثe�Ҧb��m
    while (key <= N*N) {
        p = (i-1) % N;   // p, q���U�@�B��m, i, j�U�� 1����_������
        q = ( j-1) % N;
        // p < 0 (�W�X��}�W��)
        if (p < 0)       // �h�N p ����N -1(�̤U�C)
			p = N - 1;
        if (q < 0)       // q < 0 (�W�X��}����)
			q = N - 1;
        // �h�N q ����N - 1(�̥k��)
        if (Square[p][q] != 0)  // �P�_�U�@�B�O�_�w���Ʀr
            i = (i + 1) % N;    // �w���h i ���U ( ��b��ȤU��
        else {
            i = p;              // �N�U�@�B��m assing ���ثe��m
            j = q;
        }
        Square[i][j] = key;
        key++;
    }
}
