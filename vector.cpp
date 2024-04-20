#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n= 10;
  vector<int> vec_a(n, 1);
  vector<double> vec_b(n, 3.14);
  for (int i=0; i<10; ++i){
    cout<< vec_a[i]<<" "<< vec_b[i]<<endl;
  }
  for (int i=0; i<10; ++i){
    vec_a[i]= 2*i;
    vec_b[i]= 3*i;
    cout<< vec_a[i]<<" "<< vec_b[i]<<endl;
  }
  return 0;
}
