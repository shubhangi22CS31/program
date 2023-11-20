#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n;

    cout<<"enter range of stack : ";
    cin>>n;

    stack<int> s;
    stack<int> s1;

    for(int i=0;i<n;i++)
    {
        int x;

        cout<<"enter value : ";
        cin>>x;
        
        s.push(x);
    }

    for(int i=0;i<n;i++)
    {
        int x = s.top();
        s1.push(x);
        s.pop();
    }

    for(int i=0;i<n;i++)
    {
        int x = s1.top();
        cout<<x<<" ";
        s1.pop();
    }
    
    
}
