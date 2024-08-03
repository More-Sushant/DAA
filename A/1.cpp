#include"iostream"

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        if ( arr[i] == 0 )
        {
            count += 1;
        }
    }

    cout << "Number of zeros in the array : " << count ;

    return 0;
} 
