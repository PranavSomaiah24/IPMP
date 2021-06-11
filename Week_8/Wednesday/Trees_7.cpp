// Serialize BST

void serialize(Node *root, FILE *fp)
{
    if (root==NULL)
    {
        fprintf(fp, "%d ", MARKER);
        return;
    }
    fprintf(fp, "%d ", root->key);
    serialize(root->left, fp);
    serialize(root->right, fp);
}