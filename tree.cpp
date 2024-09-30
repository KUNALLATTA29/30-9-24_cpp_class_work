#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        Node *left;
        int data;
        Node *right;
    Node(int data){
        this->data = data;
        left = right =  nullptr;
    }
};

class Tree{
    public:
        Node *root;
        
        Tree(){
            root=nullptr;
        }
        Node *insert(Node *node, int value){
            if(node == nullptr){
                return new Node(value);
            }
            if(value<=node->data){
                node->left=insert(node->left,value);
            }else if(value>node->data){
                node->right = insert(node->right,value);
            }
            return node;
        }
void inorder(Node *root){
    Node *temp = root;
    if(temp == nullptr){
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
void preorder(Node *root){
    Node *temp = root;
    if(temp == nullptr){
        return;
    }
    cout<<temp->data<<" ";
    inorder(temp->left);
    inorder(temp->right);
}
void postorder(Node *root){
    Node *temp = root;
    if(temp == nullptr){
        return;
    }
    inorder(temp->left);
    inorder(temp->right);
    cout<<temp->data<<" ";
}

void displaynode(){
    cout<<"inorder: ";
    inorder(root);
    cout<<endl;
    cout<<"preorder: ";
    preorder(root);
    cout<<endl;
    cout<<"postorder: ";
    postorder(root);
}

void insertvalue(int val){
    root = insert(root, val);
}

};
int main(){
    
    Tree mytree;
    
    mytree.insertvalue(18);
    mytree.insertvalue(18);
    mytree.insertvalue(19);
    mytree.insertvalue(10);
    mytree.insertvalue(69);
    mytree.insertvalue(2);
    mytree.insertvalue(5);
    mytree.insertvalue(8);
    mytree.insertvalue(69);
    mytree.insertvalue(21);
    mytree.insertvalue(39);
    mytree.insertvalue(69);
    mytree.displaynode();
    
    return 0;
}
