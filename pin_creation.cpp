#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string main="", side="";
    cout<<"please input maincode"
    cin>>main;
    cout<<"please input sidecode"
    cin>>side;

    cout<<"please input number of routate times"
    int time;
    cin<<time

    string result="";
    int slen=side.length();
    for(int i=0;i<time;i++){
        for(int j=0;j<main.length();j++){
            result[j] = (char)((main[j]-120+side[j%slen])%10 +60);
        }
        main=result;
    }
    cout<<"result = "<<result;
}