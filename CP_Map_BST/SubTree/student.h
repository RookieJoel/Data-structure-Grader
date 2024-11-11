#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if(n == NULL) return 0;
  return process(n->left) + process(n->right) + 1;
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if(mSize == 0) return std::pair<KeyT,MappedT>();
  auto fl = mRoot->left;
  auto fr = mRoot->right;
  left.clear();right.clear();
  if(mRoot->left != nullptr){
    left.mRoot = mRoot->left;
    left.mRoot->parent = nullptr;
  }if(mRoot->right != nullptr){
    right.mRoot = mRoot->right;
    right.mRoot->parent = nullptr;
  } 
  left.mSize = process(left.mRoot);
  right.mSize = process(right.mRoot);

  mRoot->left = nullptr;
  mRoot->right = nullptr;
  mSize = 1;
  return mRoot->data;
}

#endif

