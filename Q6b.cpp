#include<iostream>
using namespace std;
int main()
{
    int a[20][20],n,m,b[20][20],i,j,e=0,f=0,c[20][20],d[20][20],k=0,max,g[20][20];
    cout<<"enter the number of rows into the 1st matrix:\n";
    cin>>n;
    cout<<"enter the number of columns into the 1st matrix:\n";
    cin>>m;
    cout<<"enter the elements into the matrix:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"the 1st matrix is given as:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                e=e+1;
            }
        }
    }
    cout<<"no. of elements in the 1st sparse matrix: "<<e<<endl;
    
    cout<<"the sparse matrix of 1st matrix is given below:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                
                b[k][2]=a[i][j];
                b[k][0]=i;
                b[k][1]=j;
                k++;
                
            }
            
        }
        
    }
    for(i=0;i<e;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    cout<<"enter the elements into the 2nd matrix:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>c[i][j];
        }
    }
    cout<<"the 2nd matrix is given as:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(c[i][j]!=0)
            {
                f=f+1;
            }
        }
    }
    cout<<"no. of elements in the 2nd sparse matrix: "<<f<<endl;
    
    cout<<"the sparse matrix of 2nd matrix is given below:\n";
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(c[i][j]!=0)
            {
                
                d[k][2]=c[i][j];
                d[k][0]=i;
                d[k][1]=j;
                k++;
                
            }
            
        }
        
    }
    for(i=0;i<f;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<d[i][j]<<"\t";
        }
        cout<<"\n";
    }

    if(e>f)
    {
        max=e;
    }
    else 
    {
        max=f;
    }
    
    k=0;
        for(j=0;j<max;j++)
        {
            if(b[j][0]==d[j][0]&&b[j][1]==d[j][1])
            {
                g[k][0]=b[j][0];
                g[k][1]=b[j][1];
                g[k][2]=b[j][2]+d[j][2];
                k=k+1;
                
            }
            else 
            {
                g[k]=
            }
        
            
            
        }
    
    cout<<"the sparse matrix with the sum of two matrices is given as:\n";
    for(i=0;i<=k;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<g[i][j]<<"\t";

        }
        cout<<"\n";
    }

    
    
}