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
// int rtbit(int m){
//     int c=1;
// while((m&1)==false){

//   m>>=1;
//   c++;
// }

// easy way to count right most set bit is xor & ~(xor-1)

// return c;
// }
void usingxor(int *a,int n){
    int mr=0;
for(int i=0;i<n;i++){
   mr^=a[i];



}
for(int i=1;i<=n;i++){
   mr^=i;



}

int miss=0,rep=0;
int set_bit_no = mr & ~(mr - 1);
for(int i=0;i<n;i++){
   if(a[i]&(1<<set_bit_no)){

    miss^=a[i];

   }
   else{
       rep^=a[i];
   }
}
for(int i=1;i<=n;i++){
   if(i&(1<<set_bit_no)){

    miss^=i;

   }
   else{
       rep^=i;
   }
 

}


cout<<miss<<" "<<rep;

}
int main() {
    
    
    int tests;
    // cin >> tests;
    tests=1;
    for (int test=1; test<=tests; test++)
    {
        int A[6]={1,2,3,3,4,5};
        usingxor(A,6);
    }
    
    return 0;
}
