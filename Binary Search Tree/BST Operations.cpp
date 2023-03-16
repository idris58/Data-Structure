#include <iostream>
using namespace std;
struct node
{
    int value;
    node *left;
    node *right;
};
struct node *root = NULL;
void insert(int data, node *leaf)
{
    if(root == NULL)
    {
        root = new node;
        root->value = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if(data < leaf->value)
        {
            if(leaf->left != NULL)
            {
                insert(data, leaf->left);
            }
            else
            {
                leaf->left = new node;
                leaf->left->value = data;
                leaf->left->left = NULL;
                leaf->left->right = NULL;
            }
        }
        else if(data > leaf->value)
        {
            if(leaf->right != NULL)
            {
                insert(data, leaf->right);
            }
            else
            {
                leaf->right = new node;
                leaf->right->value = data;
                leaf->right->right = NULL;
                leaf->right->left = NULL;
            }
        }
    }
}
struct node *search(int data, node *leaf)
{
    if(leaf != NULL)
    {
        if(data == leaf->value)
        {
            cout << "Found." << endl;
            return leaf;
        }
        else if(data < leaf->value)
        {
            return search(data, leaf->left);
        }
        else
        {
            return search(data, leaf->right);
        }
    }
    else
    {
        cout << "Not Found." << endl;
        return NULL;
    }
}
void inorder_print(node *leaf)
{
    if(leaf != NULL)
    {
        inorder_print(leaf->left);
        cout << leaf->value << ", ";
        inorder_print(leaf->right);
    }
}
void postorder_print(node *leaf)
{
    if(leaf != NULL)
    {
        postorder_print(leaf->left);
        postorder_print(leaf->right);
        cout << leaf->value << ", ";
    }
}
void preorder_print(node *leaf)
{
    if(leaf != NULL)
    {
        cout << leaf->value << ", ";
        preorder_print(leaf->left);
        preorder_print(leaf->right);
    }
}
int main()
{
    insert(10, root);
    insert(6, root);
    insert(14, root);
    insert(5, root);
    insert(8, root);
    insert(11, root);
    insert(18, root);
    cout << "In-order Traversing of the Tree: ";
    inorder_print(root);
    cout << endl << endl;
    cout << "Pre-order Traversing of the Tree: " ;
    preorder_print(root);
    cout << endl << endl;
    cout << "Post-order Traversing of the Tree: " ;
    postorder_print(root);
    cout << endl << endl;
    cout << "Search the item 8 in the tree : ";
    search(8, root);
    cout << "Search the item 13 in the tree : ";
    search(13, root);
    return 0;
}
