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
void usingsort(int *A,int n){
    sort(A,A+n);
    for(int i=0;i<n;i++){
        cout<<A[i];
    }
    cout<<endl;

}
// void swap(int &a,int &b){

//  int temp=a;
//  a=b;
//  b=temp;


// }
void usingduchalgo(int *A,int n){
    int low=0,mid=0,high=n-1;

while(mid<=high){

 switch(A[mid]){
     case 0:
     swap(A[low],A[mid]);
     low++;
     mid++;
     break;
    case 1:
    mid++;
    break;

    case 2:
    swap(A[mid],A[high]);
    high--;
    break;
     

 }
  
}
for(int i=0;i<n;i++){
        cout<<A[i];
    }
    cout<<endl;


}
int main() {
    
    
    int tests;
    // cin >> tests;
    tests=1;
    for (int test=1; test<=tests; test++)
    {
        int A[10]={1,0,0,1,1,2,2,2,1,0};

        // usingsort(A,10);
         usingduchalgo(A,10);

    }
    
    return 0;
}
