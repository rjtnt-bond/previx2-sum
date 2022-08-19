#include<bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    int test_case;
    cin>>test_case;
    for(int i=1; i<=test_case; i++)
    {
        cout<<"Case "<<i<<":\n";
        int sz,q_num;
        cin>>sz>>q_num;
        int arr[sz];
        for(int i=0; i<sz; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<=q_num; i++)
        {
            int a;
            //quary number
            cin>>a;
            if(a==1)
            {
                //index
                int index1;
                cin>>index1;
                cout<<arr[index1]<<"\n";
                arr[index1]=0;
            }
            else if(a==2)
            {
                int inex1,value;
                cin>>inex1>>value;
                arr[inex1]+=value;
//                 cout<<arr[inex1]<<"\n";
            }
            else
            {
                int ps1,ps2;
                cin>>ps1>>ps2;
                int sum=0;
                for(int i=ps1; i<=ps2; i++)
                {
                    sum+=arr[i];
                }
                cout<<sum<<"\n";
            }
        }
    }

}



