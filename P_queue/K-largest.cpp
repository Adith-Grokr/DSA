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

void solve2(int A[],int n){
    int k=5;
priority_queue<int,vector<int>,greater<int>>q(A,A+k);

for(int i=k;i<n;i++){
if(q.top()<A[i]){
q.pop();
q.push(A[i]);
}

}
while(!q.empty()&&k--){

    cout<<q.top()<<" ";
    q.pop();
}


}


void solve1(int A[],int n){
priority_queue<int>q(A,A+n);
int k=5;

while(!q.empty()&&k--){

    cout<<q.top()<<" ";
    q.pop();
}


}

int main() {
    int A[]={1,4,5,78,8,88,90};
    int n=7;
    solve2(A,n);
    cout<<endl;
     solve1(A,n);
    
   

    cout<<endl;
    
    return 0;
}
