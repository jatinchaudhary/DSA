#include<iostream>
#include<vector>
using namespace std;

struct Node{

int data;
Node* next;

Node(int data1,Node *next1){
    data = data1;
    next = next1;
}

Node(int data1){
    data = data1;
    next = nullptr;
}


};


Node* create_ll(vector<int> input){

    Node* head = new Node(input[0]);
    Node* temp = head;

    for(int i=1;i<input.size();i++){
        temp->next = new Node(input[i]);
        temp = temp->next;
    }

    return head;
}

void traverse_ll(Node* head){

    Node* temp = head;

    while(head!=nullptr){
        cout<<head->data<<"-";
        head = head->next;
    }
    cout<<endl;
}

Node* delete_ll_element(Node* head, int index){
    Node* pointer1 = head;
    Node* pointer2 = pointer1->next;
    int indexCount = 1;


    if(index == 0){
        head->next = nullptr;
        head = pointer2;
    }
    else{

        while(index!=indexCount){

            if(pointer2==nullptr){
                cout<<"Index out of bound";
                return head;
            }

            pointer1 = pointer1->next;
            pointer2 = pointer2->next;
            indexCount++;
        }

        pointer1->next = pointer2->next;
        pointer2->next = nullptr;

    }
    return head;
}


Node* reverse_ll(Node* head){


    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while(curr!=nullptr){

        next = curr->next;
        curr->next  = prev;
        prev= curr;
        curr= next;
    }
 return prev;


}


int main(){

Node* head = create_ll({3,4,5,6,7,8});
traverse_ll(head);
head = delete_ll_element(head,0);
traverse_ll(head);
head = reverse_ll(head);
traverse_ll(head);
return 0;
}
