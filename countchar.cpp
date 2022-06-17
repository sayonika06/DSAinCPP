#include<bits/stdc++.h>
using namespace std;
main()
{
    char c;
    c=cin.get();
    int calpha=0,cnum=0, cspace=0;
    while(c!='$')
    {
        cin>>c;
        if(c>=65 && c<=90)
        {
            calpha=calpha+1;
        }
        

        else if(c>='0' && c<='9')
        {
            cnum++;
        }
        else if(c==' '|| c=='\n'|| c=='\t')
        {
            cspace++;
        }
        c=cin.get();
        
        
    }
    cout<<calpha<<" "<<cnum<<" "<<cspace;
    
}