#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter the size of even number character ";
    cin>>n;
    string s;
    cout<<"enter the text : ";
    cin>>s;
    
    if(s.length()%2!=0){
        cout<<"input is invalid ";
    }
    else{
        reverse(s.begin()+n/2,s.end());
        cout<<s;
    }
    
    


}

