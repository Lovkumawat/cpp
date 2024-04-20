#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertATtail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// SIMPLE METHOD//
// bool detectLoop(Node *head)
// {
//     if (head == NULL)
//     {
//         return false;
//     }
//     else
//     {
//         map<Node *, bool> visited;
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             if (visited[temp] == true)
//             {
//                 cout << "present on element : " << temp->data;
//                 return true;
//             }
//             visited[temp] = true;
//             temp = temp->next;
//         }
//         return false;
//     }
// }
// FLOYD'S CYCLE DETECTINON METHOD //
Node *floydDetected(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
        if (slow == fast)
        {
            return fast;
        }
    }
    return NULL;
}
Node *getintersection(Node *head)
{
    Node *slow = head;
    Node *intersection = floydDetected(head);
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return intersection;
}
Node *setlinear(Node *head)
{
    Node *first = getintersection(head);
    Node *second = floydDetected(head);
    while (second->next != first)
    {
        second = second->next;
    }
    second->next = NULL;
}

int main()
{
    Node *Node1 = new Node(10);
    Node *head = Node1;
    Node *tail = Node1;
    insertATtail(tail, 12);
    insertATtail(tail, 14);
    insertATtail(tail, 16);
    insertATtail(tail, 18);
    insertATtail(tail, 20);
    insertATtail(tail, 22);
    insertATtail(tail, 24);
    cout << "head is :" << head->data << endl;
    cout << "tail is : " << tail->data << endl;
    tail->next = head->next;
    // print(head);
    //  bool ans=detectLoop(head);
    //  cout<<endl;
    //  if(ans){
    //     cout<<"cycle is present";
    //  }else{
    //     cout<<"cycle is not present";
    //  }
    Node *ans = floydDetected(head);
    if (ans == NULL)
    {
        cout << " cyclic is not present";
    }
    else
    {
        cout << "cyclic is  present";
    }
    cout << endl;
    cout << " Lop is start from  element is : " << getintersection(head)->data << endl;
    ;
    cout << " after set linear : ";
    setlinear(head);
    print(head);
    return 0;
}