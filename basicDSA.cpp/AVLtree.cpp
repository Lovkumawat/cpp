#include<iostream>;
using namespace std;
class node
{
public:
int data;
node* left;
node* right;
int height;
};
int height(node* n)
{
if(n == NULL)
{
return 0;
}
return n-&gt;height;
}
node* newnode(int d)
{
node* temp = new node();
temp-&gt;data = d;
temp-&gt;left = NULL;
temp-&gt;right = NULL;
temp-&gt;height = 1;
return temp;
}

node* rightrotate(node* y)
{
node* x = y-&gt;left;
node* rightdata = x-&gt;right;
x-&gt;right = y;
y-&gt;left = rightdata;
y-&gt;height = max(height(y-&gt;left), height(y-&gt;right)) + 1;
x-&gt;height = max(height(x-&gt;left), height(x-&gt;right)) + 1;
return x;
}
node* leftrotate(node* y)
{
node* x = y-&gt;right;
node* leftdata = x-&gt;left;
x-&gt;left = y;
y-&gt;right = leftdata;
y-&gt;height = max(height(y-&gt;left), height(y-&gt;right)) + 1;
x-&gt;height = max(height(x-&gt;left), height(x-&gt;right)) + 1;
return x;
}
int getbalance(node* n)
{
if(n == NULL)
{
return 0;
}
return height(n-&gt;left) - height(n-&gt;right);
}
node* insertintree(node* temp, int key)
{
if(temp == NULL)
{
return newnode(key);
}
else if(key &lt; temp-&gt;data)
{
temp-&gt;left = insertintree(temp-&gt;left, key);
}
else if(key &gt; temp-&gt;data)
{
temp-&gt;right = insertintree(temp-&gt;right, key);

}
else
return temp;
temp-&gt;height = 1 + max(height(temp-&gt;left), height(temp-&gt;right));
int balance = getbalance(temp);
if(balance &gt; 1 &amp;&amp; key &lt; temp-&gt;left-&gt;data)
{
return rightrotate(temp);
}
if(balance &gt; 1 &amp;&amp; key &gt; temp-&gt;left-&gt;data)
{
temp-&gt;left = leftrotate(temp-&gt;left);
return rightrotate(temp);
}
if(balance &lt; -1 &amp;&amp; key &gt; temp-&gt;right-&gt;data)
{
return leftrotate(temp);
}
if(balance &lt; -1 &amp;&amp; key &lt; temp-&gt;right-&gt;data)
{
temp-&gt;right = rightrotate(temp-&gt;right);
return leftrotate(temp);
}
return temp;
}
void inorder(node* root)
{
if(root != NULL)
{
inorder(root-&gt;left);
cout &lt;&lt; root-&gt;data &lt;&lt; &quot; &quot;;
inorder(root-&gt;right);
}
}
int findheight(node* root)
{
if(root == NULL)
{
return 0;
}
int leftheight = findheight(root-&gt;left);
int rightheight = findheight(root-&gt;right);

return max(leftheight, rightheight) + 1;
}
node* mini(node* temp)
{
node* curr = temp;
while(curr-&gt;left != NULL)
{
curr = curr-&gt;left;
}
return curr;
}
node* deletefromtree(node* root, int key)
{
if(root == NULL)
{
return root;
}
if(key &lt; root-&gt;data)
{
root-&gt;left = deletefromtree(root-&gt;left, key);
}
else if(key &gt; root-&gt;data)
{
root-&gt;right = deletefromtree(root-&gt;right, key);
}
else
{
if(root-&gt;left == NULL)
{
node* temp = root-&gt;right;
delete root;
return temp;
}
else if(root-&gt;right == NULL)
{
node* temp = root-&gt;left;
delete root;
return temp;
}
node* temp = mini(root-&gt;right);
root-&gt;data = temp-&gt;data;
root-&gt;right = deletefromtree(root-&gt;right, temp-&gt;data);

}
if(root == NULL)
{
return root;
}
root-&gt;height = 1 + max(height(root-&gt;left), height(root-&gt;right));
int balance = getbalance(root);
if(balance &gt; 1 &amp;&amp; getbalance(root-&gt;left) &gt;= 0)
{
return rightrotate(root);
}
if(balance &gt; 1 &amp;&amp; getbalance(root-&gt;left) &lt; 0)
{
root-&gt;left = leftrotate(root-&gt;left);
return rightrotate(root);
}
if(balance &lt; -1 &amp;&amp; getbalance(root-&gt;right) &lt;= 0)
{
return leftrotate(root);
}
if(balance &lt; -1 &amp;&amp; getbalance(root-&gt;right) &gt; 0)
{
root-&gt;right = rightrotate(root-&gt;right);
return leftrotate(root);
}
return root;
}
int main()
{
node* root = NULL;
root = insertintree(root, 10);
root = insertintree(root, 20);
root = insertintree(root, 30);
root = insertintree(root, 40);
root = insertintree(root, 50);
root = insertintree(root, 45);
root = insertintree(root, 35);
root = insertintree(root, 25);
root = insertintree(root, 15);
root = insertintree(root, 5);
root = insertintree(root, 8);
root = insertintree(root, 18);
root = insertintree(root, 28);

root = insertintree(root, 38);
root = insertintree(root, 48);
cout &lt;&lt; &quot;The inorder traversal of the formed AVL tree is &quot; &lt;&lt; endl;
inorder(root);
cout &lt;&lt; endl &lt;&lt; endl;
cout &lt;&lt; &quot;The height of the constructed AVL tree is &quot; &lt;&lt; endl;
cout &lt;&lt; findheight(root) &lt;&lt; endl;
root = deletefromtree(root, 38);
root = deletefromtree(root, 50);
root = deletefromtree(root, 10);
cout &lt;&lt; endl &lt;&lt; &quot;After deleting the nodes, our inorder traversal is &quot; &lt;&lt; endl;
inorder(root);
return 0;
}