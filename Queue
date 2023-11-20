#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n;

    cout<<"enter range of stack : ";
    cin>>n;

    queue<int> s;
    queue<int> s1;

    for(int i=0;i<n;i++)
    {
        int x;

        cout<<"enter value : ";
        cin>>x;
        
        s.push(x);
    }

    for(int i=0;i<n;i++)
    {
        int x = s.front();
        s1.push(x);
        s.pop();
    }

    for(int i=0;i<n;i++)
    {
        int x = s1.front();
        cout<<x<<" ";
        s1.pop();
    }
    
    
}
