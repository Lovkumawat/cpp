#include<iostream>
using namespace std;
class node
{
public:
    char data;
    node* next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void printthelist(node*& head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertattail(node*& head, node*& tail, char d)
{
    node* temp = new node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
void removeconsecutivesequence(node*& head, node*& tail, node* startnode, int sequenceLength, node*& prev)
{
    node* current = startnode;
    for (int i = 0; i < sequenceLength; ++i)
    {
        if (current)
        {
            current = current->next;
        }
        else
        {
            break;
        }
    }
    if (startnode)
    {
        startnode->next = current->next;
        if (current == nullptr)
        {
            tail = startnode;
        }
    }
}

int main()
{
    node* head1 = NULL;
    node* tail1 = NULL;
    for (int i = 0; i < 10; i++)
    {
        insertattail(head1, tail1, 'a' + i);
    }
    printthelist(head1);

    node* head2 = NULL;
    node* tail2 = NULL;
    insertattail(head2, tail2, 'd');
    insertattail(head2, tail2, 'e');
    insertattail(head2, tail2, 'f');
    insertattail(head2, tail2, 'x');
    insertattail(head2, tail2, 'y');
    printthelist(head2);

    node* temp1 = head1;
    node* temp2 = head2;
    int length = 3;
    while (temp1 != NULL)
    {
        node* prev = NULL;
        int cnt = length;
        node* check = temp1;
        node* check2 = temp2;
        while (check != NULL && check2 != NULL && check->next->data == check2->data)
        {
            if (cnt == length)
            {
                prev = check;
            }
            check = check->next;
            check2 = check2->next;
            cnt--;
        }
        if (cnt == 0)
        {
            check=check->next;
            removeconsecutivesequence(head1, tail1, temp1, length, prev);
            break;
        }
        temp1 = temp1->next;
    }
    printthelist(head1);
	return 0;
}