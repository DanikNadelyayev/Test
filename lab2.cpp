#include<iostream>
using namespace std;


template <typename T1, typename T2>
class Tree
{
  
  struct node
{
    T1 x;
    T2 y;
    node* right;
    node* left;
};
  node* root;
  
  node* mEmpty(node* val) 
{
    if(val == NULL)
      return NULL;
    {
      mEmpty(val->left);
      mEmpty(val->right);
      delete val;
    }
    return NULL;