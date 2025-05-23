#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* insert(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

struct TreeNode* search(struct TreeNode* root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return search(root->left, value);
    }

    return search(root->right, value);
}

struct TreeNode* minValueNode(struct TreeNode* node) {
    struct TreeNode* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct TreeNode* deleteNode(struct TreeNode* root, int value) {
    if (root == NULL) return root;

    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children
        struct TreeNode* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int height(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    } else {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
    }
}

int countNodes(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int isBST(struct TreeNode* root, struct TreeNode* left, struct TreeNode* right) {
    if (root == NULL) return 1;

    if (left != NULL && root->data <= left->data) return 0;
    if (right != NULL && root->data >= right->data) return 0;

    return isBST(root->left, left, root) && isBST(root->right, root, right);
}

void printLevel(struct TreeNode* root, int level) {
    if (root == NULL) return;
    if (level == 1) {
        printf("%d ", root->data);
    } else if (level > 1) {
        printLevel(root->left, level-1);
        printLevel(root->right, level-1);
    }
}

void levelOrderTraversal(struct TreeNode* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++) {
        printLevel(root, i);
    }
}

int main() {
    struct TreeNode* root = NULL;
    int choice, value;

    while (1) {
        printf("\n\nBinary Search Tree Operations:");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Search");
        printf("\n4. Inorder Traversal");
        printf("\n5. Preorder Traversal");
        printf("\n6. Postorder Traversal");
        printf("\n7. Level Order Traversal");
        printf("\n8. Height of Tree");
        printf("\n9. Count Nodes");
        printf("\n10. Check if BST");
        printf("\n11. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &value);
                struct TreeNode* found = search(root, value);
                if (found != NULL) {
                    printf("Value %d found in BST\n", value);
                } else {
                    printf("Value %d not found in BST\n", value);
                }
                break;
            case 4:
                printf("Inorder Traversal: ");
                inorderTraversal(root);
                break;
            case 5:
                printf("Preorder Traversal: ");
                preorderTraversal(root);
                break;
            case 6:
                printf("Postorder Traversal: ");
                postorderTraversal(root);
                break;
            case 7:
                printf("Level Order Traversal: ");
                levelOrderTraversal(root);
                break;
            case 8:
                printf("Height of Tree: %d", height(root));
                break;
            case 9:
                printf("Total Nodes: %d", countNodes(root));
                break;
            case 10:
                if (isBST(root, NULL, NULL)) {
                    printf("It is a BST");
                } else {
                    printf("It is NOT a BST");
                }
                break;
            case 11:
                exit(0);
            default:
                printf("Invalid choice!");
        }
    }

    return 0;
}
