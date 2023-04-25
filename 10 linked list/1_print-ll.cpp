#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int num)
    {
        this->data = num;
        this->next = NULL;
    }
};

// insert at head
void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    newNode->next = head;

    if (head == NULL)
    {
        tail = newNode;
    }

    head = newNode;
}

// insert at tail
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
        tail->next = newNode;

    tail = newNode;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;

    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);

    insertAtTail(head, tail, 10);
    print(head);
    return 0;
}