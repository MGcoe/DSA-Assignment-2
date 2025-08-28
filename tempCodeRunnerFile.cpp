#include <iostream>
using namespace std;

int main() {
   int a[100], i, j, n, k;
    cout<<"enter the order of the tri-diagonal matrix:\n";
    cin>>n;
    cout<<"enter elements into the array diagonal wise:\n";
    for(i=0;i<(3*n-2);i++)
    {
        cin>>a[i];
    }
    for(i=0;i<2;i++)
    {
        cout<<a[n-1+3*i]<<"\t";
    }
    for(i=0;i<n-2;i++)
    {
        cout<<"0\t";
    }
    cout<<"\n";
   for(i=0;i<n-1;i++)
   {
        for(j=0;j<n;j++)
        {
             if((i+j*n)<(3*n-2))
        {
            cout<<a[i+j*n]<<"\t";
         }
        
    }
    cout<<"\n";
    for(k=i;k<n-2;k++)
    {
    cout<<"0\t";
    }
   }
    
}