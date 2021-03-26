#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string status;
  int n;

  cin >> n;

  if(n==1){
    status = "ya";
  }else if(n==0){
    status = "bukan";
  }

  while(n>1){
    if(n%2==0){
      status = "ya";
    }else{
      status = "bukan";
      break;
    }
    n /= 2;
  }

  cout << status << endl;
  return 0;
}
