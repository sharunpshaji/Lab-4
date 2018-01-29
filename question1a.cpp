#include <iostream>
using namespace std;

// making a node
class node {

// defining the node member datas as public variables
public :

int data;
node *next;

};
// making another class called stacks
class stacks {
// declaring a pointer top which points to top of the stacks
private:

node *top;

// declaring all other functions as public
public:
// defining class constructer to make the top to point to NULL as default

stacks(){
 top = NULL;
};
// declaring all other member functions
void push(int n);
void pop();
void show();
};

// defining the push function
void stacks::push(int n){
// making a new node
node *temp = new node;
temp->next = NULL;
temp->data = n;

if(top==NULL){
top = temp;
}
else{
temp->next = top;
top = temp;

}
};

// defining a function to pop out from the top
void stacks::pop(){
if(top == NULL){
cout<<"popping out from an empty stack is impossible!!!!"<<endl;
}
else{
node *temp = new node;
temp = top;
top = temp->next;
temp->next = NULL;
delete temp;

}

}


// defining the function to show all the elements

void stacks::show(){
node *temp = new node;
temp = top;
// top = NULL then it is an empty stack
if(top == NULL){
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

stacks a;
a.push(1);
a.push(2);
a.push(3);
a.push(4);
a.show();
a.pop();
cout<<"after poping out"<<endl;
a.show();


return 0;

}
