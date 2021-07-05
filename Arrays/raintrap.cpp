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



#define pb    		    push_back 
#define ForA(n)  	    for (ll i=0; i<n; i++) 
#define ForA2(n)  	    for (ll j=0; j<n; j++) 
#define ForA3(n)  	    for (ll k=0; k<n; k++) 
#define ForN(n)  	    for (ll i=1; i<=n; i++) 
#define ForN2(n)  	    for (ll j=1; j<=n; j++) 
#define ForN3(n)  	    for (ll k=1; k<=n; k++) 
#define SortA(n,x) 	    sort(n,n+x); 
#define SortS(s)  	    sort(s.begin(), s.end()); 
#define SortRS(s)  	    sort(s.rbegin(), s.rend()); 
#define Search(s)       s.begin(), s.end() 
#define SortSG(n)	    sort(n.begin(), n.end(), greater<int>()); 
#define Cin(a) 	        cin>>a; 
#define GCin(a)	    	getline(cin,a); 
#define Sz(a)		    a.size() 
#define Cin2(a,b)	    cin>>a>>b; 
#define Cin3(a,b,c)	    cin>>a>>b>>c; 
#define Cin4(a,b,c,d)   cin>>a>>b>>c>>d; 
#define Unique(n)       sort(Search(n)),n.erase(unique(Search(n)),n.end()) 
#define PI 	            3.1415926535897932384626433832795l 
#define Ignore	        cin.ignore(); 
#define Cout(n)		    cout<<n<<endl; 
#define mem(n,i)        memset(n,i,sizeof n); 
#define deci(n)         cout<<fixed<<setprecision(n); 
#define square(n)       n*n 
#define cube(n)         n*n*n 
#define F               first 
#define S               second 
#define bug()		    cerr<<"*****<>*****\n"; 



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
int raintrap(int  *a,int n){
  int maxl[n],maxr[n]={0},leftmax=0,rightmax=0;
  for(int i=0;i<n;i++){
    maxl[i]=leftmax;
    if(leftmax<a[i]){
        leftmax=a[i];
    }

  }

   for(int i=n-1;i>=0;i--){
    maxr[i]=rightmax;
    if(rightmax<a[i]){
        rightmax=a[i];
    }

  }
  int rapped=0;
  for(int i=1;i<n-1;i++){
     rapped=rapped+min(maxl[i],maxr[i])-a[i];
  }
   
  
  
  

return rapped;
}
int main() {
    
    
    int A[]={4,2,0,3,2,5};

    cout<<raintrap(A,6);

    
    return 0;
}
