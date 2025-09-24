#include <iostream>
#include<vector>
using namespace std;
int main() {
    int arr[10]={45,34,12,2,5,3,689,34};
    int max=-1000000;
   for(int i=0;i<10;i++){
       if (max<arr[i]){
           max=arr[i];
       }
   }
cout<<"max"<<max;

    return 0;
}
