#include<iostream>
#include<stdlib.h>
using namespace std;
class queue
{
    int head,tail,a[5];
public:
    queue()
    {
        head=-1;
        tail=-1;
    }
    void enqueue(int x)
    {
        if(tail>=5)
        {
            cout<<"queue is full";
        }
        else{
            a[++tail]=x;
        }
    }
    void dequeue()
    {
        if(tail==head)
        {
            cout<<"queue is empty";
        }
        cout<<"element has been deleted :"<<a[++head];
    }
    void display()
    {
        if(tail==head)
        {
            cout<<"empty";
        }
        for(int i=head+1;i<tail;i++)
        cout<<a[i]<<"  ";
    }
};
    int main()
    {
        int q;
        queue q1;
        while(1)
        {
            cout<<"\n1.enqueue\n2.dequeue\n3.display\n4.exit";
            cin>>q;
            switch(q)
            {
            case 1:cout<<"enter elements:";
                    cin>>q;
                    q1.enqueue(q);
                    break;
                    case 2:q1.dequeue();
                    break;
                    case 3:q1.display();
                    break;
                    case 4:exit(0);
            }
        }
        return 0;
    }
