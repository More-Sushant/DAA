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

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0 ; j < n - 1 ; j++)
        {
            if ( arr[j] == 0 )
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
} 
