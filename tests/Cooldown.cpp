#include <iostream>
#include <ctime>
#include "TXLib.h"
using namespace std;

int main()
{
    clock_t start;
    int i = 3; //����� ����������� � ��������
    start = clock();
    txMessageBox("Space - ����������� 3 �������\nSpace + Shift - ����������� 6 ������");
    while(!GetAsyncKeyState(VK_ESCAPE)){
        if(GetAsyncKeyState(VK_SPACE) && (clock() - start) / CLK_TCK >= i){
            cout << "������ ������ " << (clock() - start) / CLK_TCK;
            start = clock();
            i = 3;
            if(GetAsyncKeyState(VK_SHIFT))
                i = 6;
            cout << ": �� ���������� ������� " << i << " ������(�)" << endl;
        }
    }
    cout << "��������� �������� " << clock() / CLK_TCK << " ������(�)";
}
