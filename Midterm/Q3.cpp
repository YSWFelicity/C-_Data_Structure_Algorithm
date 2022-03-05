#include<iostream>
#include<cstdlib>
using namespace std;
 
// declaring the node
struct node
{
    int data;
    struct node *link;    
}*front, *rear;
 
// declaring the queue class
class Queue
{
    public:
        void insert(int);
        void display();
        void del();
        
        // constructor to initialize the front and rear of the node
        Queue()
        {
            front = NULL;
            rear = NULL;
        }               
};
 
// main function
int main()
{
    int choice, item;
    
    // creating an object of the Queue class
    Queue ql;
    
    // while loop which continues till the user opts out
    while (1)
    {
        // defining the user interface
        cout<<"\n----------------"<<endl;
        cout<<"Queue Operations";
        cout<<"\n----------------"<<endl;
        cout<<"1.Insert Element into the Queue"<<endl;
        cout<<"2.Delete Element from the Queue"<<endl;
        cout<<"3.Traverse the Queue"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter your Choice: ";
        
        // taking input of the choice
        cin>>choice;
        
        // switch case
        switch(choice)
        {
            // insert element into the queue
            case 1:
                cout<<"Enter value to be inserted into the queue: ";
                cin>>item;
                ql.insert(item);
                break;
                
            // delete element from the queue    
            case 2:
                ql.del();
                break;
                
            // print the elements of the queue    
            case 3:
                ql.display();
                break;
            
            // break out of the loop    
            case 4:
                exit(1);
                break;
            
            // any other response    
            default:
                cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
 
// function to insert an element into the queue
void Queue::insert(int item)
{
    node *tmp;
    tmp = new (struct node);
    tmp->data = item;
    tmp->link = NULL;
    if (front == NULL)
        front = tmp;
    else
        rear->link = tmp;
    rear = tmp;
}
 
// function to delete an element from the queue
void Queue::del()
{
    node *tmp;
    // if the queue has no elements
    if (front == NULL)
        cout<<"Queue Underflow"<<endl;
    else
    {       
        tmp = front;
        cout<<"Element Deleted: "<<tmp->data<<endl;
        front = front->link;
        free(tmp);
    }
}
 
// function to traverse the queue and print the elements in the queue
void Queue::display()
{       
    node *ptr;
    ptr = front;
    // if the queue is empty
    if (front == NULL)
        cout<<"The Queue is empty"<<endl;
        
    else
    {
        cout<<"The Queue elements :"<<endl;
        while (ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->link;
        }
        cout<<endl;
    }
}