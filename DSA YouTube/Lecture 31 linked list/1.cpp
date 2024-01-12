#include <iostream>
using namespace std;

class Node
{
    int data;
    class Node *link;
    class Node *head;

public:
    void finsert();
    void linsert();
    void fdelete();
    void ldelete();
    void display();
};
void Node::display()
{
    class Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->link;
    }
}
void Node::finsert()
{
    class Node *n = (class Node *)malloc(sizeof(class Node));
    cout << "Enter data : ";
    cin >> n->data;
    n->link = NULL;

    if (head == NULL)
    {
        head = n;
    }
    else
    {
        n->link = head;
        head = n;
    }

    class Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->link;
    }

    // display();
}
void Node::linsert()
{
    class Node *n = (class Node *)malloc(sizeof(class Node));
    class Node *temp;
    cout << "Enter data : ";
    cin >> n->data;
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = n;
    }
    // display();
}
void Node::fdelete()
{
    class Node *temp;
    if (head == NULL)
    {
        cout << "The list is empty";
    }
    else
    {
        temp = head;
        head = head->link;
        free(temp);
    }
    // display();
}
void Node::ldelete()
{
    class Node *temp, *pre;
    if (head == NULL)
    {
        cout << "The list is empty";
    }
    else
    {
        pre = temp = head;
        while (temp->link != NULL)
        {
            pre = temp;
            temp = temp->link;
        }
        pre->link = NULL;
        free(temp);
    }
    // display();
}
int main()
{
    int ch;
    Node s1;
    cout << "HI";
    do
    {
        cout << "\n1.Insert at first \n2.Insert at last \n3.delete at first \n4.Delete at last \n5.display \n6.exit";
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.finsert();
            break;
        case 2:
            s1.linsert();
            break;
        case 3:
            s1.fdelete();
            break;
        case 4:
            s1.ldelete();
            break;
        case 5:
            s1.display();
            break;
        case 6:
            exit(0);

        default:
            break;
        }
    } while (ch != 6);
    return 0;
}