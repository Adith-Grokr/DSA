#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
//#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;
int res=0;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
 
    // val is the key or the value that
    // has to be added to the data part
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void invert(Node* root){

queue< Node* >q;

 q.push(root);
 while(!q.empty()){
  Node *x=q.front();
  q.pop();
   cout<<x->data;
   if(x->left!=NULL)
    q.push(x->left);
   
    if(x->right!=NULL)
    q.push(x->right);
   
    

 }




}
void dfs(Node* root){

stack<Node*>q;
q.push(root);
 while(!q.empty()){
  Node *x=q.top();
  q.pop();
   cout<<x->data;
   if(x->left!=NULL)
    q.push(x->left);
    if(x->right!=NULL)
    q.push(x->right);
    
  

 }



}
void recdfs(Node* root,int v){
    
if(!root) return;
v*=10;
v+=root->data;

 if(!root->left||!root->right){
     res+=v;
     return;
 }

 recdfs(root->left,v);
 recdfs(root->right,v);



}

void bfs(Node* root){
 queue< Node* >q;
 int y=0,z=0;
 q.push(root);
 while(!q.empty()){
  Node *x=q.front();
  q.pop();
   cout<<x->data<<y<<z<<" ";
   if(x->left!=NULL){
    q.push(x->left);y++;}
    if(x->right!=NULL){
    q.push(x->right);z++;}
    

 }

}


int main() {
    struct Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(7);
    
    root->left->left= new Node(1);
    root->left->right= new Node(3);
    root->right->right= new Node(9);
     root->right->left= new Node(6);
    //  invert(root);
    // recdfs(root,0);
    // cout<<res;
    bfs(root);
    return 0;
}
