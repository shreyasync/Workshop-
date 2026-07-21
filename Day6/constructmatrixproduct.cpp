// thru constructor product of 2 matrices
#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:
    // Constructor to take input
    Matrix()
    {
        cout << "Enter elements of 2x2 matrix:\n";
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    // Function to multiply matrices
    void multiply(Matrix m)
    {
        int result[2][2];

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                result[i][j] = 0;
                for(int k = 0; k < 2; k++)
                {
                    result[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        cout << "\nProduct of the matrices is:\n";
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1;   // Constructor called
    Matrix m2;   // Constructor called

    m1.multiply(m2);

    return 0;
}
