#include "bits/stdc++.h"
using namespace std;

int main()
{
    // Queue principle => First-in-First-out .

    queue<int>q;
    q.push(10);
    q.push(9);
    q.push(8);
    for(auto i : {7,6,5,4} )
        q.emplace(i);

    cout<<"q.back() before pop : "<<q.back()<<endl; // 4
    cout<<"q.front() before pop : "<<q.front()<<endl; // 10
    q.pop();
    cout<<"q.back() after pop : "<<q.back()<<endl; // 4
    cout<<"q.front() after pop : "<<q.front()<<endl; // 9

    cout<<endl;

    // Printing queue values :
    cout<<"queue values : "<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
