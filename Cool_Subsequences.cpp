#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        vector<int>vec1;
        vector<int>vec2;
        vector<int>vec3;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec1.push_back(x);
            mp[x]++;
        }
        for(int i=0; i<n; i++){
            if(mp[vec1[i]]>1){
                vec2.push_back(vec1[i]);
                mp[vec1[i]]=0;
                break;
            }else{
                vec3.push_back(vec1[i]);
            }
        }
        if(vec2.size()==0){
            cout<<-1<<endl;
        }else{
            cout<<vec2.size()<<endl;
            for(int i:vec2){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        }
    return 0;
}