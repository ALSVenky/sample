#include <iostream>
using namespace std;
int main()
{
    int num, factorsCount = 0, j = 0;
    cout << "enter a number ";
    cin >> num;
    if (num == 1)
    {
        cout << "composite";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                factorsCount++;
                // cout<<endl<<factorsCount<<endl;
            }
            if (factorsCount > 2)
            {
                break;
            }
            j++;
            // cout<<endl<<j<<endl;
        }
        if (factorsCount > 2)
        {
            cout << "not a prime";
        }
        else
        {
            cout << "prime";
        }
    }

    cout << endl<< j << endl;
    return 0;
}
