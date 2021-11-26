#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
 {
    int n,d,c,m;
    cin>>n>>d>>c>>m;
    string s;
    cin>>s;
    //cout<<"n value "<<n<<" d value "<<d<<" c value "<<c<<" m value "<<endl<<s<<endl;
    int dc=0;
    
    for(int i=0;i<n;i++)
    if(s[i]=='D')
    dc++;
     
    for(int i=0;i<n;i++)
    {
        
        if(s[i]=='C')
        {
            if(c==0)
            break;
            c--;
        }
        else
        {
            if(d==0)
            break;
            d--;
            c=c+m;
            dc--;
        }
        //cout<<d<<" "<<c<<endl;
    }
    if(dc==0)
    cout<<"Case #"<<j<<": YES"<<endl;
    else
    cout<<"Case #"<<j<<": NO"<<endl;
 }
 return 0;
}
