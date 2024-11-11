#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "map_bst_lite.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, const KeyT &a, const KeyT &b, std::vector<MappedT> &result) const {
    // you MAY need to use this function
    if(n == NULL) return;
    KeyT k = n->data.first;
    MappedT v = n->data.second; 
    if(mLess(a,k)) my_recur(n->left,a,b,result);
    if(k >= a && k <= b) result.push_back(v);
    if(mLess(k,b)) my_recur(n->right,a,b,result);
    
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<MappedT> CP::map_bst<KeyT, MappedT, CompareT>::value_in_key_range(const KeyT &a, const KeyT &b) const {
	/* write your code here */
    std::vector<MappedT> ans;
    my_recur(mRoot,a,b,ans);
    return ans;
}

#endif
