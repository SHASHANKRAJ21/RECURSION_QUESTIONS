#include<iostream>
using namespace std;
void lastoccu(string &str,int index,char target,int &ans){
    if(index>=str.size()){
        return;
    }
    if(str[index]==target){
        ans=index;
    }
    lastoccu(str,index+1,target,ans);
}
int main(){
    string str;
    int index=0;
    char target='a';
    int ans=-1;
    cout<<"enetr the string name";
    cin>>str;
    lastoccu(str,index,target,ans);
    cout<<"answer is"<<ans;
}