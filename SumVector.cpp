#include <iostream>
using namespace std;
//заполняем случ числами
void fill_arr(int* _v, short _N) 
{
    for (int i = 0; i < _N; i++) {
        *(_v + i) = rand() % 20;
    }
    cout << endl;
}
void show_arr(int* _v, short _N)
{
    for (int i = 0; i < _N; i++) {
        cout << _v[i]<<'\t';
    }
    cout << endl;
}
void join_arr(int *v1,short N1, int *v2, short N2, int *v3)
{
    for (int i = 0; i < N1+N2;i++) {
        if (i < N1)v3[i] = v1[i];
        else v3[i] = v2[i-N1];
    }
    cout << endl;
} 
int main()
{
    const short N1=3;
    const short N2 = 4;
    const short N3 = N1 + N2;
    int v1[N1];
    int v2[N2];
    int v3[N3];
    fill_arr(v1, N1);
    fill_arr(v2, N2);
    show_arr(v1, N1);
    show_arr(v2, N2);
    join_arr(v1, N1, v2, N2, v3);
    show_arr(v3, N3);
}


