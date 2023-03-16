#include <iostream>
using namespace std;
struct node
{
    int id;
    string name;
    float cgpa;
    node *left;
    node *right;
};
struct node *root = NULL;
void insert(int data,string data2,float data3, node *leaf)
{
    if(root == NULL)
    {
        root = new node;
        root->id = data;
        root->name = data2;
        root->cgpa = data3;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if(data < leaf->id)
        {
            if(leaf->left != NULL)
            {
                insert(data,data2,data3, leaf->left);
            }
            else
            {
                leaf->left = new node;
                leaf->left->id = data;
                leaf->left->name = data2;
                leaf->left->cgpa = data3;
                leaf->left->left = NULL;
                leaf->left->right = NULL;
            }
        }
        else if(data > leaf->id)
        {
            if(leaf->right != NULL)
            {
                insert(data,data2,data3, leaf->right);
            }
            else
            {
                leaf->right = new node;
                leaf->right->id = data;
                leaf->right->name = data2;
                leaf->right->cgpa = data3;
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
        if(data == leaf->id)
        {
            cout << "Found." << endl;
            return leaf;
        }
        else if(data < leaf->id)
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
        cout << leaf->id << " \t";
        cout << leaf->name << " \t";
        cout << leaf->cgpa <<endl;
        inorder_print(leaf->right);
    }
}
void postorder_print(node *leaf)
{
    if(leaf != NULL)
    {
        postorder_print(leaf->left);
        postorder_print(leaf->right);
        cout << leaf->id << " \t";
        cout << leaf->name << " \t";
        cout << leaf->cgpa <<endl;
    }
}
void preorder_print(node *leaf)
{
    if(leaf != NULL)
    {
        cout << leaf->id << " \t";
        cout << leaf->name << " \t";
        cout << leaf->cgpa <<endl;
        preorder_print(leaf->left);
        preorder_print(leaf->right);
    }
}
int main()
{
    insert(101,"IDRIS",3.76, root);
    insert(106,"ASIF",3.80, root);
    insert(109,"BIPUL",3.95, root);
    insert(105,"SOJOL",3.76, root);
    insert(108,"RUDRO",3.76, root);
    insert(111,"YEASIN",3.76, root);
    insert(118,"FAYSAL",3.76, root);
    cout << "In-order Traversing of the Tree: \n";
    cout << "ID\tNAME\tCGPA"<<endl;
    inorder_print(root);
    cout << endl << endl;
    cout << "Pre-order Traversing of the Tree: \n" ;
    cout << "ID\tNAME\tCGPA"<<endl;
    preorder_print(root);
    cout << endl << endl;
    cout << "Post-order Traversing of the Tree: \n" ;
    cout << "ID\tNAME\tCGPA"<<endl;
    postorder_print(root);
    cout << endl << endl;
    cout << "Search the item 118 in the tree : ";
    search(118, root);
    cout << "Search the item 113 in the tree : ";
    search(113, root);
    return 0;
}
