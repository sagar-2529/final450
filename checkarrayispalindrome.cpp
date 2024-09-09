// check array consists of all numbers is in palindrome or not
#include<iostream>
using namespace std;

bool checkpalindrome(int x){
    int original = x;
    int reversed  = 0;
    while ( x != 0){
   int rev = x % 10;
   reversed  = reversed * 10 + rev;
   x = x/10;


}

if( reversed == original){
return true;
}
else{
    return false;
}
}

bool allcheck(int arr[], int n){
   
   for ( int i = 0; i<n; i++){
      if ( checkpalindrome(arr[i]) == 0){
        return false;
      }
   }
   return true;

}
int main(){;

    int n;
    cout << " enter the size of array : ";
    cin >> n;
    cout << endl;
    int *arr  = new int[n];

    for ( int i =0 ; i< n; i++){
        cin >> arr[i];
    }
    int ans = allcheck(arr,n);
    if (ans ){
    cout << " array is in palindrome " << endl;
}
else{
    cout << " array is not in palindrome ";
}
}