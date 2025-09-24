#include <iostream>
#include<vector>
using namespace std;
int main() {
    int arr[10]={1,2,3,45,67,89,90,123,345};
    bool flag=true;
    for(int i=0;i<9;i++){
        if(arr[i]>arr[i+1]){
            bool flag=false;
        }
    }cout<<flag;
    
}
