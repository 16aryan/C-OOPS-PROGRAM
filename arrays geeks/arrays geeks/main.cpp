#include <iostream>
using namespace std;
int main(){
    int arr[5];
    arr[0]=5;
    arr[2]=10;
    arr[3]=arr[0];
    arr[3/2] = 2;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " ;
}