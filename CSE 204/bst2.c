#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* root = NULL;

struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insert() {
    int value;
    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    struct TreeNode* newNode = createNode(value);

    if (root == NULL) {
        root = newNode;
        printf("\nNode inserted as root\n");
        return;
    }

    struct TreeNode* current = root;
    struct TreeNode* parent = NULL;

    while (1) {
        parent = current;
        if (value < current->data) {
            current = current->left;
            if (current == NULL) {
                parent->left = newNode;
                printf("\nNode inserted to left of %d\n", parent->data);
                return;
            }
        } else if (value > current->data) {
            current = current->right;
            if (current == NULL) {
                parent->right = newNode;
                printf("\nNode inserted to right of %d\n", parent->data);
                return;
            }
        } else {
            printf("\nValue already exists in BST\n");
            free(newNode);
            return;
        }
    }
}

void search() {
    if (root == NULL) {
        printf("\nBST is empty\n");
        return;
    }

    int value;
    printf("\nEnter value to search: ");
    scanf("%d", &value);

    struct TreeNode* current = root;
    while (current != NULL) {
        if (value == current->data) {
            printf("\nValue %d found in BST\n", value);
            return;
        } else if (value < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    printf("\nValue %d not found in BST\n", value);
}

struct TreeNode* minValueNode(struct TreeNode* node) {
    struct TreeNode* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

void deleteNode() {
    if (root == NULL) {
        printf("\nBST is empty\n");
        return;
    }

    int value;
    printf("\nEnter value to delete: ");
    scanf("%d", &value);

    struct TreeNode* current = root;
    struct TreeNode* parent = NULL;

    // Find the node to delete
    while (current != NULL && current->data != value) {
        parent = current;
        if (value < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    if (current == NULL) {
        printf("\nValue not found in BST\n");
        return;
    }

    // Node with only one child or no child
    if (current->left == NULL) {
        struct TreeNode* temp = current->right;
        if (parent == NULL) {
            root = temp;
        } else if (parent->left == current) {
            parent->left = temp;
        } else {
            parent->right = temp;
        }
        free(current);
    } else if (current->right == NULL) {
        struct TreeNode* temp = current->left;
        if (parent == NULL) {
            root = temp;
        } else if (parent->left == current) {
            parent->left = temp;
        } else {
            parent->right = temp;
        }
        free(current);
    } else {
        // Node with two children
        struct TreeNode* temp = minValueNode(current->right);
        current->data = temp->data;
        // Delete the inorder successor
        struct TreeNode* tempParent = current;
        struct TreeNode* successor = current->right;
        while (successor->left != NULL) {
            tempParent = successor;
            successor = successor->left;
        }
        if (tempParent != current) {
            tempParent->left = successor->right;
        } else {
            tempParent->right = successor->right;
        }
        free(successor);
    }

    printf("\nNode with value %d deleted\n", value);
}

void inorder(struct TreeNode* node) {
    if (node != NULL) {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}

void preorder(struct TreeNode* node) {
    if (node != NULL) {
        printf("%d ", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

void postorder(struct TreeNode* node) {
    if (node != NULL) {
        postorder(node->left);
        postorder(node->right);
        printf("%d ", node->data);
    }
}

void displayInorder() {
    printf("\nInorder Traversal: ");
    inorder(root);
    printf("\n");
}

void displayPreorder() {
    printf("\nPreorder Traversal: ");
    preorder(root);
    printf("\n");
}

void displayPostorder() {
    printf("\nPostorder Traversal: ");
    postorder(root);
    printf("\n");
}

int countNodes(struct TreeNode* node) {
    if (node == NULL) {
        return 0;
    }
    return 1 + countNodes(node->left) + countNodes(node->right);
}

void displayCount() {
    printf("\nTotal nodes in BST: %d\n", countNodes(root));
}

int height(struct TreeNode* node) {
    if (node == NULL) {
        return 0;
    } else {
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);

        return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
    }
}

void displayHeight() {
    printf("\nHeight of BST: %d\n", height(root));
}

int main() {
    int choice = 0;
    while(1) {
        printf("\nBinary Search Tree Operations\n");
        printf("1. Insert\n2. Search\n3. Delete\n");
        printf("4. Inorder Traversal\n5. Preorder Traversal\n6. Postorder Traversal\n");
        printf("7. Count Nodes\n8. Height of BST\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: insert(); break;
            case 2: search(); break;
            case 3: deleteNode(); break;
            case 4: displayInorder(); break;
            case 5: displayPreorder(); break;
            case 6: displayPostorder(); break;
            case 7: displayCount(); break;
            case 8: displayHeight(); break;
            case 9: exit(0);
            default: printf("\nInvalid choice\n");
        }
    }
    return 0;
}
