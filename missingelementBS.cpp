#include <iostream>
using namespace std;
int missingELementFind(int a[], int n)   
{
    int start = 0 ;
    int end = n -1 ; 
    int mid = start + (end - start)/2;
    int ans = 0;
    while(start <= end)
    {
        if(a[n-1] - (n-1) == 1)
        {
            ans = n + 2;
            break;
        }
            
        if((a[mid] - mid) == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = a[mid];
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return (ans - 1);
}
int main()
{
    int n;
    cout << "Enter size of array : " ;
    cin >> n;
    int arr[n];
    cout << "Enter array : " << endl;
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i];
    int missingNumber = missingELementFind(arr, n);
    cout << "Missing number is : " << missingNumber << endl;
    return 0;
}