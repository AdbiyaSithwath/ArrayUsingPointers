#include <iostream> 
using namespace std; 
int main() { 
  int a[5]; 
  cout << "Enter the elements: "; 
  for(int i = 0; i < 5; ++i) 
    cin >> a[i]; 
  cout << "You have entered: "; 
  for(int i = 0; i < 5; ++i) 
    cout << endl << *(a + i); 
  return 0; 
}
