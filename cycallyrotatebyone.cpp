// cycally rotate array by k
#include<Iostream>
using namespace std;

void rotatearray(int *arr, int n, int k,int *arr2){

    for(int i = n-1; i>=0; i--){
        arr2[i] = arr[(((i-k)+n)%n)];

    }
    for(int i = 0; i< n; i++){
    cout << arr2[i] << " ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[5];
    int k = 5;
    rotatearray(arr,5,k,arr2);

}