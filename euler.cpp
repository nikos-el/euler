#include <iostream>  
  
using namespace std;  
  
int main(){  
  int N,M;  
  cin>>N>>M;  
  int *degree = new int[N];  
  for (int n=1; n<=M; ++n){  
    int i,j;  
    cin>>i>>j;  
    degree[i]++; degree[j]++;  
  }  
  int even=0, path[2], k=0;  
  for (int i=0; i<N; ++i)  
    if (degree[i]%2==0) even++;  
    else if (k<2) path[k++]=i;  
  
  if (even==N) cout<<"CYCLE"<<endl;  
  else if (even==N-2) cout<<"PATH "<<path[0]<<" "<<path[1]<<endl;  
  else cout<<"IMPOSSIBLE"<<endl;  
  delete [] degree;  
  return 0;  
}  
