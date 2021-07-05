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

void Ilan(int a[4][5],int i,int j){
 
         if(a[i][j]==0 || a[i][j]==-1)return ;
      if(a[i][j]==1){
          a[i][j]=-1;
          Ilan(a,i+1,j);
          Ilan(a,i,j+1);
      }



  


}
int main() {
    
    int A[4][5]={   {1,1,0,0,1},
                {1,1,0,0,0},
                {0,0,1,0,0},
                {0,0,0,1,1}

            };

int c=0;


    
    for(int i=0;i<4;i++){
     for(int j=0;j<5;j++){

        if(A[i][j]==1){
            c++;

         Ilan(A,i,j);
        }



     }}
    for(int i=0;i<4;i++){
     for(int j=0;j<5;j++){
         cout<<A[i][j]<<" ";
     }
     cout<<endl;
     }

     cout<<c;
    
    return 0;
}
