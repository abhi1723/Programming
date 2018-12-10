#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N],left[N],right[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
        int left_max_A=A[0];
        left[0]=A[0];
        int right_max_A=A[N-1];
        right[N-1]=right_max_A;
        int sum=0;
    for(int i=1;i<N;i++)
    {
        if(A[i]<left_max_A)
        {
            left[i]=left_max_A;
        }
        else
        {
            left[i]=A[i];
            left_max_A=A[i];
        }
    }
    for(int i=N-2;i>=0;i--)
    {
        if(A[i]<right_max_A)
            right[i]=right_max_A;
        else
        {
            right[i]=A[i];
            right_max_A=A[i];
        }
    }
    for(int i=0;i<N;i++)
    {
        sum+=(min(left[i],right[i])-A[i]);
    }
        cout<<sum<<endl;
    return 0;
}
