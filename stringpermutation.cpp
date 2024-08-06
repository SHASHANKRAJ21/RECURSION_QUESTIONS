#include<iostream>
#include<string>
using namespace std;
void stringpermutaion(string &str,int index){
    if(index>=str.length()){
        cout<<str<<" ";
        return;
    }
    for(int j=index;j<str.length();j++){
        swap(str[index],str[j]);
        stringpermutaion(str,index+1);
        swap(str[index],str[j]);
    }
}
int main(){
    string str="abc";
    int index=0;
    stringpermutaion(str,index);
    return 0;
}