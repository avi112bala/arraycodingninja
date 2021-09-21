#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int sum=0;
    int n;
    cin>> n;
    int input [500000];
    
    
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    for(int i=0;i<n;i++){
        //cout<<input[i];
        sum=sum+input[i];
}
    
    cout<<sum<<endl;
}

