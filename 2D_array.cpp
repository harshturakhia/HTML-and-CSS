#include <iostream>
using namespace std;

int main()
{
    //array created in stack
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

    //array created partially in stack and partially in heap
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    //array created in heap
    int **C;
    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }

    cout<<endl<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j];
        }
        cout << endl;
    }

    cout<<endl<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j];
        }
        cout << endl;
    }
}