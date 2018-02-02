#include <iostream>
using namespace std;

// making a node
class node {

// defining the node member datas as public variables
public :

int data;
node *next;

};
// making another class called queue
class queue {
// declaring a pointer top which points to begning and end of the queue
private:

node *head, *tail;

// declaring all other functions as public
public:
// defining class constructer to make the head and tail to point to NULL as default

queue(){
 head = NULL;
 tail = NULL;
};
// declaring all other member functions
void enque(int n);
void Deque();
void show();
};

// defining the enque function
void queue::enque (int n){
// making a new node
node *temp = new node;
temp->next = NULL;
temp->data = n;

if(head==NULL){
head = temp;
tail = temp;
}
else{
tail-> next = temp;
tail = temp;

}
};

// defining a function to deque from the end
void queue::Deque(){
if(head == NULL){
cout<<"emty queue syntax error!!!!"<<endl;
}
else if(head == tail){

head = NULL;
tail = NULL;

}
else{

node *temp = new node;
temp = tail;
tail = head;
while(tail-> next != temp){
tail = tail->next;
}
tail-> next = NULL;
delete temp;
}
}


// defining the function to show all the elements

void queue::show(){
node *temp = new node;
temp = head;
// top = NULL then it is an empty queue
if(head == NULL){
cout<<"there is nothing in the stacks"<<endl;
}
else{
while (temp != NULL){
cout<<" ->"<<temp-> data<<endl;
temp = temp->next;
}
    }
        };



int main() {

queue a;
a.enque(1);
a.enque(2);
a.enque(3);
a.enque(4);
a.enque(5);
a.show();
a.Deque();
a.show();

return 0;

}
