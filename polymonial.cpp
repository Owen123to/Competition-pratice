// File name: polymonialAdd.cpp
// �Q�ΰ}�C��ܪk���h�����ۥ[
// July 5, 2021

#include <iostream>
#include <iomanip>
#define DUMMY -1
using namespace std;
void outputP(int [], int);
void Padd(int [], int [], int []);
char compare(int , int );

int main()
{
    /* �h��������ܤ覡�Q�Υu�x�s�D�s���k
     ���O�x�s�C�@�ӫD�s�������ƤΫY�ơA
     �}�C�Ĥ@������h�����D�s���ӼơC
     ex: �U�C A�h������ 3 �ӫD�s���A��h������ :
     5x�|���� + 3x�G���� + 2  */

    int A[] = {DUMMY, 3, 4, 5, 2, 3, 0, 2};
    int B[] = {DUMMY, 3, 3, 6, 2, 2, 0, 1};
    int C[13] = {DUMMY};

    Padd(A, B, C);  // �N A �[ B ��� C
    // ��ܦU�h�������G
    cout << "A = ";
    outputP(A, A[1]*2 +1);  // A[1]*2 + 1���}�C A ���j�p
    cout << "\nB = ";
    outputP(B, B[1]*2 +1);
    cout << "\nC = ";
    outputP(C, C[1]*2 +1);
    return 0;
}

/*�������e�Ҹѻ��ĤG�ؤ�k���h�����ۥ[���*/
void Padd(int a[], int b[], int c[])
{
    int p, q, r, m, n;
    char result;

    m = a[1]; n = b[1];
    p = q = r = 2;
    while ((p <= 2*m) && (q <= 2*n)){
        /*���a�Pb������*/
        result = compare ( a[p], b[q] );
        switch (result) {
            case '=':           /* a�����Ƶ���b������ */
                c[r+1] = a[p+1] + b[q+1];  /*�Y�Ƭۥ[*/
                if (c[r+1] != 0){
                    c[r] = a[p];  /*����assign��c */
                    r+=2;
                }
                p+=2; q+=2;  /*���ܤU�@�ӫ��Ʀ�m*/
                break;
            case '>':      /* a�����Ƥj��b������ */
                c[r+1] = a[p+1];
                c[r] = a[p];
                p+=2; r+= 2;
                break;
            case '<':      /* a�����Ƥp��b������ */
                c[r+1] = b[q+1];
                c[r] = b[q];
                q+=2; r+= 2;
                break;
        }
    }
    while (p <= 2*m) {  /*�N�h����a���l����������c */
        c[r+1] = a[p+1];
        c[r] = a[p];
        p+=2;  r+=2;
    }
    while (q <= 2*n) {  /*�N�h����b���l����������c */
        c[r+1] = b[q+1];
        c[r] = b[q];
        q+=2; r+=2;
    }
    c[1] = r/2 - 1;  /*�p��c�`�@���h�֫D�s��*/
}

char compare(int x, int y)
{
    if (x == y)
        return '=';
    else if (x > y)
        return '>';
    else
        return '<';
}

void outputP(int p[], int n)
{
    int i;

    cout << "(";
    for (i=1; i<=n; i++)
        cout << setw(3) << p[i];
    cout << "  )";
}
