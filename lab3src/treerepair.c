#include <stdlib.h>
#include <stdio.h>


typedef struct Node{
int datavalue;
int height;
struct Node *parent;
struct Node *left;
struct Node *right;

}Node;


void repair(Node *root, int height){
 root->datavalue= 4;
 root->height= height;
if(root->right!= NULL){
    root=root->right;
    repair(root,root->height++);

}
if(root->left!= NULL){
repair(root->left,root->height++);
}
 
}

void printTree (Node* root)
// Print whole tree. We cannot make it look pretty graphically, so we add some
// characters to make it a little easier to understand.  We also don't really
// know what the value field is - it is declared to be a void pointer - so we
// treat it as though it points to an integer.
{
	// assume printTree magically know the types in the tree node
	// start of this tree
	printf("{");
	// values in the root node (assuming value is pointing to an integer)
	printf("(%d,%d),", root->datavalue, root->height);
	
	// Now show left subtree or {} if there is no left subtree
	if (root->left != NULL)	printTree(root->left);
	else							printf("{}");
	// Marker between left and right subtrees		
	printf(",");
	// Now show right subtree or {} if there is no right subtree
	if (root->right != NULL)	printTree(root->right);
	else							printf("{}");
	// Close display of this tree with closing curly bracket	
	printf("}");
}//printTree()


int main(void){

Node *n = malloc(sizeof(Node));
	// initialize node if memory obtained
	if (n != NULL)	{
		n->left = NULL;
		n->right = NULL;
    }


Node *newnode = malloc(sizeof(Node));
n->left = newnode;
Node *newnode2 = malloc(sizeof(Node));
newnode->right= newnode2;
Node *newnode3 = malloc(sizeof(Node));
newnode->left=newnode3;

printTree(n);
}