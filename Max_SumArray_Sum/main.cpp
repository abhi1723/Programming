#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int result[t];
    int k=0;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int cs=0,ms=0;
        for(int i=0;i<n;i++)
        {
            cs+=a[i];
            if(cs<0)
                cs=0;
            ms=max(cs,ms);
        }
        result[k]=ms;
        k++;
        t--;
    }
    for(int i=0;i<=k;i++)
       cout<<result[i]<<endl;
    return 0;
}
