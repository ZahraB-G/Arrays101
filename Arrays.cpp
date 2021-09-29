#include <iostream>
#include <array>
using namespace std;
int main()
{
    int i = 0;
    int arr[5] = {1,5,10,20,30};
    cout<<"Display an array with for loop"<<endl;
    for( i = 0; i<5; i++) //display an array with for loop
    {
        cout<<arr[i]<<" ";
    }
    i = 0;
    cout<<endl<<"Display an array with while loop"<<endl;
    while(i<5)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    i = 0;
    cout<<endl<<"Display an array with foreach loop"<<endl;
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    cout<<endl<<"Display an array reverse"<<endl;
    for(i = 4; i >= 0 ; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Finding sum of all elements in an array"<<endl;
    int sum = 0;
    for(auto x:arr)
    {
        sum += x;
    }
    cout<<"Sum of all the elements in array  "<<sum<<endl;
    cout<<"_______________________________________________"<<endl;
    cout<<"Finding maximum value in an array"<<endl;
    int max = INT_MIN;
    for(auto x: arr)
    {
        if(max < x)
            max = x;
    }
    cout<<"Max element in the array "<< max<<endl;
    cout<<"_______________________________________________"<<endl;
    cout<<endl<<"Linear search in an array"<<endl;
    int key = 30;
    for(int i = 0; i<5; i++)
    {
        if(arr[i] == key)
            cout<<"The key we were looking for is in the array index "<<i<<endl;
    }
    cout<<"_______________________________________________"<<endl;
    cout<<"Find minimum value in an array"<<endl;
    int min = INT_MAX;
    for(auto x:arr)
    {
        if(min > x)
            min = x;
    }
    cout<<"minimum value in the element is "<<min<<endl;
    cout<<"_______________________________________________"<<endl;
    cout<<"Binary search in an array"<<endl<<"For Binary search array has to be in order"<<endl;
    int* array;
    int n =0;
    cout<<"How many elements you want to enter in the array"<<endl;
    cin>>n;
    array = new int[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>array[i];
    }
    cout<<"Your array contains these elements"<<endl;
    for(int i =0; i< n ;i++)
    {
        cout<< array[i] <<" ";
    }
    cout<<endl;
    key = 666;
    int low = 0;
    int high = n;
    int mid =0;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(array[mid] == key)
        {
            cout<<"You have found your key in index "<< mid<<endl;
        }
        if(array[mid] > key)
        {
            high = mid - 1;
            
        }
        else
        {
            low = mid + 1;
        }
    }
    cout<<"_______________________________________________"<<endl;  
    cout<<"Count number of negative and positive numbers in Array"<<endl;
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    for(auto x: A)
        cout<<x <<" ";
    cout<<endl;
    int pCount = 0;
    int nCount = 0;
    for(auto x: A)
    {
        if(x < 0)
            nCount++;
        if(x > 0)
            pCount++;
    }
    cout<<"Array containts "<<pCount <<" positive number and "<<nCount<<" negative number"<<endl;



}