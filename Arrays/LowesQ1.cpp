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
int main() {
    
   int A[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}

   };

  int bit ,n;
  cin>>bit;cin>>n;
  
      if(bit==0){
          int x=A[n-1][2];
          for(int i=2;i>=1;i--){
              A[n-1][i]=A[n-1][i-1];
          }
          A[n-1][0]=x;
      }
      if(bit==1){
          int x=A[2][n-1];
          for(int i=2;i>=1;i--){
              A[i][n-1]=A[i-1][n-1];
          }
          A[0][n-1]=x;
      }

 for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
     cout<<A[i][j]<<" ";
 }
 
 cout<<endl;
 }


    cout<<endl;
    
    return 0;
}
