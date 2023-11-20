#include <iostream>
#include <map>
using namespace std;

int main() {
    
    map<int,string> m;
    
    int n;
    
    cout<<"enter map size : ";
    cin>>n;
    
    cout<<"----insert values----"<<endl;
    
    for(int i=0;i<n;i++)
    {
        int key;
        string value;
        
        cout<<"enter key and value : ";
        cin>>key>>value;
        
        m.insert(make_pair(key,value));
    }
    
    // // first method
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    
    // second method
    // for(auto i=m.begin();i!=m.end();i++)
    // {
    //     // cout<<i->first<<" "<<i->second<<endl;
    //     cout<<(*i).first<<" "<<(*i).second<<endl;
    // }
    
    // third method
    map<int,string> :: iterator i;
    for(i=m.begin();i!=m.end();i++)
    {
        // cout<<i->first<<" "<<i->second<<endl;
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    return 0;
}
