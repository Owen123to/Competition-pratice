// File name: oddMagic.cpp
// 奇數魔術方陣實作
// July 5, 2021

#include <iostream>
#include <iomanip>
using namespace std;
#define MAX	15         // 矩陣最大為15 x 15
int Square[MAX][MAX];  // 定義整數矩陣
int N;                 // 矩陣行列大小變數
void Magic();

int main()
{
    int i, j;
    /*讀取魔術矩陣的大小N, N 為奇數且0 <= N <= 15 */
    do {
        cout << "\nEnter odd matrix size : ";
        cin >> N;
            if (N % 2 == 0 || N<= 0 || N >15)
            cout << "Should be > 0 and < 15 odd number";
        else
            break;
    } while (1);

    Magic();  // 將square 變為N x N 的魔術矩陣

    // 顯示魔術矩陣結果
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

    // 初始化矩陣內容, 矩陣全部清 0
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            Square[i][j] = 0;

    Square[0][(N -1) /2] = 1; // 將 1放至最上列中間位置
    key = 2;
    i = 0;
    j = (N-1) / 2;       // i, j記錄目前所在位置
    while (key <= N*N) {
        p = (i-1) % N;   // p, q為下一步位置, i, j各減 1表往西北角移動
        q = ( j-1) % N;
        // p < 0 (超出方陣上方)
        if (p < 0)       // 則將 p 移至N -1(最下列)
			p = N - 1;
        if (q < 0)       // q < 0 (超出方陣左方)
			q = N - 1;
        // 則將 q 移至N - 1(最右行)
        if (Square[p][q] != 0)  // 判斷下一步是否已有數字
            i = (i + 1) % N;    // 已有則 i 往下 ( 填在原值下方
        else {
            i = p;              // 將下一步位置 assing 給目前位置
            j = q;
        }
        Square[i][j] = key;
        key++;
    }
}
