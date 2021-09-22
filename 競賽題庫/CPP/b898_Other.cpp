#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n;
    while(cin>>n) {
        for(int i=0; i<n; i++) {
            char a[100001],b[100001],c[100001];
            cin>>a>>b>>c;

            int stra=strlen(a),strb=strlen(b),strc=strlen(c);
            if(stra!=strb||strb!=strc||strc!=stra) {
                if(stra>strb) {
                    if(stra>strc) cout<<a<<endl;
                    else if(stra<strc) cout<<c<<endl;
                    else {
                        if(strcmp(a,c)>0) cout<<a<<endl;
                        else cout<<c<<endl;
                    }
                }
                else if(stra<strb) {
                    if(strb>strc) cout<<b<<endl;
                    else if(strb<strc) cout<<c<<endl;
                    else {
                        if(strcmp(b,c)>0) cout<<b<<endl;
                        else cout<<c<<endl;
                    }
                }
                else {
                    if(stra>strc) {
                        if(strcmp(a,b)>0) cout<<a<<endl;
                        else cout<<b<<endl;
                    }
                    else cout<<c<<endl;
                }
            }
            else {
                if(strcmp(a,b)>0) {
                    if(strcmp(a,c)>0) cout<<a<<endl;
                    else cout<<c<<endl;
                }
                else {
                    if(strcmp(b,c)>0) cout<<b<<endl;
                    else cout<<c<<endl;
                }
            }
        }
    }

    return 0 ;
}
