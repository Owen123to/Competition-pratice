// File name: matrixMultiply.cpp
// �x�}�ۭ���@�A�N��x�}��C�ۭ����M��J�ĤT�ӯx�}
// July 5, 2021

#include <iostream>
#include <iomanip>
#define N 3  /*N x N �x�}*/
using namespace std;
void outputMatrix(int [][N]); /*��ܯx�}���e���*/

int main()
{
    int A[N][N] = {
       		1, 2, 3,
        	4, 5, 6,
        	7, 8, 9
    };
    int B[N][N] = {
        	1, 0, 0,
        	0, 1, 0,
        	0, 0, 1
    };
    int C[N][N], i, j, k, sum;

    /*	�NA�x�}�C�@�C�����PB�x�}�C�@�C����
     �ۭ����M��JC�x�}���� */
    /*for (i=0; i<N; i++)
        for (j=0; j<N; j++) {
            sum = 0;
            for (k=0; k<N; k++)
                sum = sum + A[i][k] * B[k][j];
            C[i][j] = sum;
        }*/
for(i = 0;i<N;i++)
    for( j = 0;j< N;j++)
    {
           sum = 0;
    for( k = 0;k<N;k++)
        sum+=A[i][k] * B[k][j];
    C[i][j]= sum;
    }
    /*�C�X�T�x�}���e*/
    cout << "\nContent of Matrix A :\n\n";
    outputMatrix(A);
    cout << "\nContent of Matrix B :\n\n";
    outputMatrix(B);
    cout << "\nContent of Matrix C :\n\n";
    outputMatrix(C);
    return 0;
}

void outputMatrix(int m[N][N])
{
    int i, j;

    for (i=0; i<N; i++) {
        for (j=0; j<N; j++)
            cout << setw(5) << m[i][j];
        cout << "\n";
    }
}

