#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;
};

void insert(Node **root)
{
    char c;
    int value;
    do
    {
        cout << "Enter Node? (Y/N): ";
        cin >> c;

        if (c == 'N')
            break;

        // Node *temp_right = new Node();
        Node *temp = new Node();
        cout << "Enter left child: ";
        cin >> value;
        temp->data = value;
        temp->left = temp->right = NULL;
        // root->left = temp;

        cout << "Enter right child: ";
        cin >> value;
        temp->data = value;
        temp->left = temp->right = NULL;
        

    } while (c == 'Y');
}

main(void)
{
    Node *root = new Node();
    root->data = 45;
    root->left = NULL;
    root->right = NULL;

    return 0;
}

