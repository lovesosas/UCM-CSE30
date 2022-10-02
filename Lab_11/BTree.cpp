#include "BTree.h"
using namespace std;

BTree::BTree(){ //initialize the root of our tree to be empty
    root = nullptr;
}

BTree::~BTree(){
    destroy_tree();
}

Node *BTree::BTree_root(){
    return root;
}

void BTree::destroy_tree(Node *leaf){ //a recursive function that destroys a subtree with the input argument(leaf) as root

    if(leaf != nullptr){
        destroy_tree(leaf -> left);
        destroy_tree(leaf -> right);
        delete leaf;
    }
}

void BTree::insert(int key, Node *leaf){ //5.pass user value and root.
    if(key < leaf -> key_value){ //if our user value is less  than our leafs key value and if our leafs left pointer has a value
        if(leaf -> left != nullptr){
            insert(key, leaf -> left); //run recursive function
        }
        else{ //else create a new node for our left pointer 
            leaf -> left = new Node;
            leaf -> left -> key_value = key; //make the value of that left leaf equal to our user key
            leaf -> left -> left = nullptr; //make that left leafs left point to nothing same with the right
            leaf -> left -> right = nullptr;
        }     
    }

    else if(key >= leaf -> key_value){ //do the same as above if our user key is bigger than our leafs value
        if(leaf -> right != nullptr) //
            insert(key, leaf -> right);
        else{
            leaf -> right = new Node;
            leaf -> right -> key_value = key;
            leaf -> right -> left = nullptr;
            leaf -> right -> right = nullptr;
        }
    }
}

Node *BTree::search(int key, Node *leaf){ 
    if(leaf != nullptr){ //if our leaf has a value and if our user key is equal to our leafs value. return that leaf pointer which returns a value
        if (key == leaf -> key_value){
            return leaf;   
        }

        if (key < leaf -> key_value){ //if our user key is less than our leafs key value
            return search(key, leaf -> left); //run recursive function for the left
        }
        else{ //if greater than our leafs key value 
            return search(key, leaf -> right); //run resursive function for the right
        }
    }
    else return nullptr; //if none of these are turn return null
}

void BTree::insert(int key){ //2. if our root does not equal nullptr call insert(key, root).
    if (root != nullptr){ //4. if our root does have a value, call insert(key, root)
        insert(key, root);
    }

    else{
        root = new Node; //3. not the case so make out root thats a type node pointer point to an acutal node with a int data, left pointer and right pointer.
        root -> key_value = key; //our users input (key) is saved in our key nodes key_value in which out root pointer has access to
        root -> left = nullptr; //do same for these bottom two. since our root pointer has access to left and right of our node, we have to use arrow to access them.
        root -> right = nullptr; //they are nullptrs becuase we dont want to do anything with them unless if we have another isnert function called. These are the end if no other insert function is called.
    }
}

Node *BTree::search(int key){ //function that searches for a specific key and calls our recursve search function which gets returned
    return search(key, root);
}

void BTree::destroy_tree(){ //function that call our recursive destroy function that destory our tree
    destroy_tree(root);
}