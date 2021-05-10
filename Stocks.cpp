#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int stocks(int a[],int n){
    int prft = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[i-1])
            prft = prft + a[i] - a[i-1];
    }
    return prft;
}

int main() 
{
    int arr[] = {1,5,3,8,12};
    cout << stocks(arr,5);
    return 0;
}