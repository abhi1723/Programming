#include <iostream>

using namespace std;
int main()
{
   int t,max_sum;
   cin>>t;
   while(t>0)
   {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
        cin>>a[i];
        max_sum=a[0];
       for(int i=0;i<n;i++)
       {
           int number_of_comparisions=0,k=i;
           while(number_of_comparisions<n-1)
           {
               int sum=0,kr=0;
               while(kr<=number_of_comparisions)
               {
                   sum+=a[k];
                   k++;
                   kr++;
                   if(k==n)
                   k=0;
              }
              if(sum>max_sum)
                max_sum=sum;
               number_of_comparisions++;
           }
       }
       cout<<max_sum<<endl;
       t--;
   }
    return 0;
}
