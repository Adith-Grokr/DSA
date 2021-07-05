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

#define foi(n,i) for(int i=0;i<n;i++) 
#define foj(n,j) for(int j=0;j<n;j++) 
#define fok(n,k) for(int k=0;k<n;k++) 

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
class LRUcache{
list<int>cache;
unordered_map<int,list<int>::iterator>m;
int cap;

public:

LRUcache(int n){

cap=n;

}
 void display();
 void refer(int);

}

void  LRUcache:: refer(int x){

//if cache is full;
if(m.find(x)==cache.end()){
if(cache.size()==cap)
{
    int last=cache.back();
    cache.pop_back();
    m.erase(last);


}


}
else{

  
	cache.erase(m[x]); 

	// update reference 
	cache.push_front(x); 
	m[x] = cache.begin(); 


}

void LRUcache::display() 
{ 

	// Iterate in the deque and print 
	// all the elements in it 
	for (auto it = cache.begin(); it != cache.end(); 
		it++) 
		cout << (*it) << " "; 

	cout << endl; 
} 


}
using namespace std;
int main() {
    
	LRUcache ca(4); 

	ca.refer(1); 
	ca.refer(2); 
	ca.refer(3); 
	ca.refer(1); 
	ca.refer(4); 
	ca.refer(5); 
	ca.display(); 

	return 0; 
    
    
    return 0;
}
