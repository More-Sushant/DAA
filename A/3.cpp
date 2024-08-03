#include"iostream"
#include"string"
#include"vector"

using namespace std;

int trailZeros(int n)
{
    int count = 0;

    while(n % 10 == 0 && n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int t_zero = 0;
    int i = 1;

    while( t_zero < n )
    {
        int fact = 1;
        for (int j = 1 ; j <= i ; j++)
        {
            fact *= j;
        }

        t_zero = trailZeros(fact);

        if (t_zero >= n)
        {
            cout << i <<endl;
            break;
        }
        i++;
    }

    return 0;
} 
