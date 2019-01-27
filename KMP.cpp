#include<bits/stdc++.h>
using namespace std;
int con;
int main()
{
    string t,p;
    cin>>t>>p;
    int st,sp;
    st=t.size();
    sp=p.size();
    int ind[sp];
    memset(ind,0,sizeof(ind));
    ind[0]=0;

    for(int i=0,j=1;j<sp;j++)
    {

        //cout<<"p[i]="<<p[i]<<" p[j]="<<p[j]<<endl;
        if(p[i]==p[j])
        {
            ind[j]=i+1;
            i++;
            //cout<<"ind[j]="<<ind[j]<<endl;
        }
        else
        {
            //cout<<"*i="<<i<<endl;
             if(i>0)
               {
                j--;
                }
             if(i>0)
             {

               i=ind[i-1];
            }
            //i=ind[i-1];

        }
        //cout<<"j="<<j<<" i="<<i<<endl;

    }

    for(int i=0,j=0;j<st;j++)
    {
        cout<<"p[i]="<<p[i]<<" t[j]="<<t[j]<<endl;
        if(p[i]==t[j])
        {
            i++;
            //j++;
            con++;
        }
        else
        {
            if(i>0)
            {
                j--;
            }
            if(i>0)
            {
                i=ind[i-1];
            }
        }
        //cout<<"i="<<i<<endl;
      if(i==sp)
      {
          cout<<j<<endl;
          break;
      }

    }
    return 0;
}
