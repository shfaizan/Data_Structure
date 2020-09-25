#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
    int top,a[5];
    public:
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top>=4)
        {
            cout<<"stack overflow";

        }
        else{
                cout<<"Enter elements:";
        cin>>x;
            a[++top]=x;
        }
    }
        void pop()
        {
            if(top<0)
            {
                cout<<"stack underflow";
            }
            else{
                cout<<"element "<<a[top--]<<" has been deleted";
            }
        }
    void display()
    {
        for(int i=top;i>=0;i--)
            cout<<a[i]<<"   ";

    }
};
    int main()
    {
        stack st;
        int a;
        while(1)
        {
            cout<<"1.push\n2.pop\n3.display\n4.exit\n";
            cin>>a;
        switch(a)
        {
            case 1:st.push(a);
            break;
            case 2:st.pop();
            break;
            case 3:st.display();
            break;
            case 4:exit(0);

        }
    }
    return 0;
}
