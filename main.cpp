// Complete the following program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int exp;
    cin >> exp;

    double power = 1.0;

    cout << fixed << setprecision(5);

    cout << power << "\t";

    if (exp > 0)
    {
        for (int i = 0; i < exp; i++)
        {
            power *= 2;
            cout << power << "\t";
        }
    }
    else if (exp < 0)
    {
        for (int i = 0; i < -exp; i++)
        {
            power /= 2;
            cout << power << "\t";
        }
    }

    cout << endl;

    return 0;
}