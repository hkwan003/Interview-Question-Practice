#include <iostream>

using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;

};

void PrintInOrder(BstNode* root)
{
    if(root != NULL)
    {
        if(root -> left != NULL)
        {
            PrintInOrder(root -> left);
        }
        cout << root -> data << " ";
        if(root -> right != NULL)
        {
            PrintInOrder(root -> right);
        }
    }
    else
    {
        cout << "the tree is empty" << endl;
    }
}

BstNode* GetNewNode(int data)
{
    BstNode* newNode = new BstNode();
    newNode -> data = data;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}


BstNode* Insert(BstNode* root, int data)
{
    if(root == NULL)
    {
        root = GetNewNode(data);
        return root;
    }
    else if(data <= root -> data)
    {
        root -> left = Insert(root -> left, data);
    }
    else
    {
        root -> right = Insert(root -> right, data);
    }
    return root;
}

int main()
{
    BstNode* root;  //pointer to root node
    root = NULL;    //settting tree as empty tree
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 59);
    
    PrintInOrder(root);

}
