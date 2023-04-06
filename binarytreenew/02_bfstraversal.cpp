#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
class Pair
{
public:
    int height;
    int diameter;
};
class HBbalance
{
public:
    int height;
    bool balance;
};

node *buildtree()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *root = new node(data);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
void bfs(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *f = q.front();
        cout << f->data << ",";
        q.pop();
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    return;
}
void bfs2(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *f = q.front();
        if (f == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << f->data << ",";
            q.pop();
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
    }
}
int countnodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + countnodes(root->left) + countnodes(root->right);
}
int sum_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->data + sum_nodes(root->left) + sum_nodes(root->right);
}
int heightoftree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = heightoftree(root->left);
    int h2 = heightoftree(root->right);
    return max(h1, h2) + 1;
}
Pair optimized_diameter(node *root)
{
    Pair p;
    if (root == NULL)
    {
        p.diameter = p.height = 0;
        return p;
    }
    Pair left = optimized_diameter(root->left);
    Pair right = optimized_diameter(root->right);
    p.height = max(left.height, right.height) + 1;
    p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
    return p;
}
int diameter_tree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = heightoftree(root->left);
    int h2 = heightoftree(root->right);
    int op1 = h1 + h1;
    int op2 = diameter_tree(root->left);
    int op3 = diameter_tree(root->right);
    return max(op1, max(op2, op3));
}
int replacesumnodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return root->data;
    }
    int leftsum = replacesumnodes(root->left);
    int rightsum = replacesumnodes(root->right);
    int temp = root->data;
    root->data = leftsum + rightsum;
    return temp + root->data;
}
HBbalance isheightbalance(node *root)
{
    HBbalance h;
    if (root == NULL)
    {
        h.height = 0;
        h.balance = true;
        return h;
    }
    HBbalance left = isheightbalance(root->left);
    HBbalance right = isheightbalance(root->right);
    h.height = max(left.height, right.height) + 1;
    if (abs(left.height - right.height) <= 1 && left.balance && right.balance)
    {
        h.balance = true;
    }
    else
    {
        h.balance = false;
    }
    return h;
}
node *buildtree_fromarray(int *arr, int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    node *root = new node(arr[mid]);
    root->left = buildtree_fromarray(arr, s, mid - 1);
    root->right = buildtree_fromarray(arr, mid + 1, e);
    return root;
}
node *createtree_frominpre(int *ino, int *pre, int s, int e)
{
    static int i = 0;
    if (s > e)
    {
        return NULL;
    }
    node *root = new node(pre[i]);
    int index = -1;
    for (int j = s; j <= e; j++)
    {
        if (ino[j] == pre[i])
        {
            index = j;
            break;
        }
    }
    i++;
    root->left = createtree_frominpre(ino, pre, s, index - 1);
    root->right = createtree_frominpre(ino, pre, index + 1, e);
    return root;
}
void printrightview(node *root, int level, int &maxlevel)
{
    if (root == NULL)
    {
        return;
    }
    if (maxlevel < level)
    {
        cout << root->data << ",";
        maxlevel = level;
    }
    printrightview(root->right, level + 1, maxlevel);
    printrightview(root->left, level + 1, maxlevel);
}
node *lca(node *root, int a, int b)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == a or root->data == b)
    {
        return root;
    }
    node *leftans = lca(root->left, a, b);
    node *rightans = lca(root->right, a, b);
    if (leftans != NULL and rightans != NULL)
    {
        return root;
    }
    if (leftans != NULL)
    {
        return leftans;
    }
    return rightans;
}
int search(node *root, int key, int level)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == key)
    {
        return level;
    }
    int left = search(root->left, key, level + 1);
    if (left != -1)
    {
        return left;
    }
    return search(root->right, key, level + 1);
}
int findshortestpath(node *root, int a, int b)
{
    node *lowestca = lca(root, a, b);
    int leftpath = search(lowestca, a, 0);
    int rightpath = search(lowestca, b, 0);
    return leftpath + rightpath;
}
int main()
{
    node *root = buildtree();
    // bfs2(root);
    // cout << endl;
    // cout << countnodes(root);
    // cout << endl;
    // cout << sum_nodes(root);
    // cout << endl;
    // cout << diameter_tree(root);
    // cout << endl;
    // Pair p = optimized_diameter(root);
    // cout << p.height << " " << p.diameter;
    // replacesumnodes(root);
    // bfs2(root);
    // cout<<endl;
    // if(isheightbalance(root).balance){
    //     cout<<"balanced tree"<<endl;
    // }
    // else{
    //     cout<<"not balanced"<<endl;
    // }
    // int arr[1000];
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // node *root = buildtree_fromarray(arr, 0, n - 1);
    // bfs2(root);
    // int ino[] = {3, 2, 8, 4, 1, 6, 7, 5};
    // int pre[] = {1, 2, 3, 4, 8, 5, 6, 7};
    // int n = sizeof(ino) / sizeof(int);
    // node *root = createtree_frominpre(ino, pre, 0, n - 1);
    // bfs2(root);
    int maxlevel = -1;
    int level = 0;
    printrightview(root, level, maxlevel);
    cout << endl;
    node *lca2 = lca(root, 1, 13);
    cout << lca2->data << endl;
    cout << endl;
    cout << findshortestpath(root, 1, 13);

    return 0;
}