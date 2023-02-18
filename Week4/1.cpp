#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    set<int> s;
    unordered_map<int, int> mp;
    map<int, int> mp1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        mp1[arr[i]]++;
        s.insert(arr[i]);
    }
    cout<<"\n Elements in vector: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\n \n Frequency of Elements in map: "<<endl;
    for(auto it: mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<"\n \n Frequency of Elements in sorted map: "<<endl;
    for(auto it: mp1){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<"\n \n Unique Elements in vector: "<<endl;
    for(auto i: s){
        cout<<i<<endl;
    }

    return 0;
}
