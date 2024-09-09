#include<Iostream>
using namespace std;

int maxsubarray(int* arr, int n){
    int sum = 0;
    int maxi = arr[0];
    for(int i = 0; i< n; i++){
        sum = sum + arr[i];

        maxi = max(sum,maxi);

        if (sum < 0){
            sum = 0;
        }

    }
    return maxi;
}

int main(){
    int arr[6] = {-5,7,8,-9,-27,8};
    cout << maxsubarray(arr,6);

}