#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    int i,j,count=0,fre[100]={0};
	    for(i=0;i<a.length();i++){
	        fre[a[i]-'A']=1;
	    }
	    for(j=0;j<b.length();j++){
	        if(fre[b[j]-'A']==1)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
