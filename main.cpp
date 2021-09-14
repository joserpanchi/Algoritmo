#include <iostream>
#include <iomanip>
using namespace std;
#include "1.h"

int main()
{
    int A[15]= {-5,8,4,-90,-14123, -64, 133, -43, -798, 343, 2543, -50, 0, -1000,907};
    cout<<"Elementos originales"<<endl;
    for(int i=0;i<15;i++)
        {
            cout<<"["<<A[i]<<"]";
        }
        cout << endl;
    cout<<"Elementos ordenados"<<endl;
    ordenar(A,0,16);
    for(int i=0;i<16;i++)
        {
            cout<<"["<<A[i]<<"]";
        }

    return 0;

}


