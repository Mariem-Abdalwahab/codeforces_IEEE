#include<bits/stdc++.h>
#include <iostream>
#include <string>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

using namespace std;




int main() {
    IOS

    ll q;
    cin>>q;
    while(q--){
        string s;
        ll c=0;
        cin>>s;
        for(ll i=0;i<3;i++){
//            cout<<s[i]-'a'<<endl;
            if(s[i]-'a'!=i) c++;
        }
        if(c==0 || c==2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;

}