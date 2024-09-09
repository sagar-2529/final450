// sort an array consists of 0,1,2 withouy=t using a sorting algorithm
// dutch national flag algorithm
#include<Iostream>
#include<vector>
using namespace std;

void sortarray(vector<int>& a){
    
    int low = 0;
    int mid = 0;
    int high = a.size()-1;
    while(mid<=high){
        switch(a[mid]){

            case 0 : 
            swap(a[mid++],a[low++]);
            break;
            case 1: 
            mid++;
            break;
            case 2 :
             swap(a[mid],a[high--]);
             break;
        }
       
    }
}

int main(){
    vector<int> a = {0,0,1,0,2,2,2,0,0,1,1,0,2};
    sortarray(a);
    for(int i = 0; i <a.size(); i++){
        cout<< a[i]<< " ";
    }
    return 0;
}