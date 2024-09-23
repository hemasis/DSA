#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Capacity of this vector-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of this vector-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of this vector -> "<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;

    cout<<"Element at the 2nd index: "<<v.at(2)<<endl;

    cout<<"front element: "<<v.front()<<endl;   // returns the first element or u can modify the first element
    cout<<"back element: "<<v.back()<<endl;    // returns the last element or u can modify the last element

    // if u want to modify the first element
    v.front()=10;
    cout<<"after changing front element: "<<v.front()<<endl;
    v.back()=20;
    cout<<"After modifying the last element: "<<v.back()<<endl;

    cout<<"before pop: "<<v.size()<<endl;
    for(int i=0;i==v.size();i++)
    {
        cout<<""<<v[i];
    }
    cout<<endl;

    v.pop_back();   // removes the last element in the vector

    cout<<"after pop"<<endl;
    for(int i=0;i==v.size();i++)
    {
        cout<<""<<v[i];
    }
    cout<<endl;

    // cout<<"before clear: "<<v.size()<<endl;
    // v.clear();
    // cout<<"after clear: "<<v.size()<<endl;

}

// deque
//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);
//     for(int i:d)
//     {
//         cout<<i<<" ";
//     }
//     // d.pop_front();
//     cout<<endl;
//     cout<<"Print first index element: "<<d.at(1)<<endl;

//     cout<<"front "<<d.front()<<endl;
//     cout<<"back "<<d.back()<<endl;

//     cout<<"Empty or not:"<<d.empty()<<endl;

// }