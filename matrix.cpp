#include<iostream>
using namespace std;
int main(){
    
    int a[3][3] = {{2,4,5},{3,5,90},{6,1,98}};
    int n = sizeof(a)/sizeof(a[0][0]);
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<a[i][j]<<" ";
           
        }
        cout<<endl;
        
    }
}
