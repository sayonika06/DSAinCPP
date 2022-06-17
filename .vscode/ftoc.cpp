#include<bits/stdc++.h>
using namespace std;
main()
{
    int S,E,W,C;
    cin>>S;
    cin>>E;
    cin>>W;
    while (S<=E)
    {
        C=(5.0/9)*(S-32);
        
        cout<<S<<"\t"<<C;
        cout<<endl;
        S=S+W;
    }


}