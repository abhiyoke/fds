#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    stack<int>st;
    string s1;
    map<char,int>m;
    m['-']=1;
    m['+']=2;
    m['*']=3;
    m['/']=4;
    for(int i=0;i<s.length();i++){
    	if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z')) s1+=s[i];
    	else if(s[i]=='(') st.push(s[i]);
    	else if(s[i]==')'){
    		while( st.top()!='('){
    			s1+=st.top();
    			st.pop();
    		}
    		st.pop();
    	}
    	else{
    		while(!st.empty() and m[s[i]]<=m[st.top()]){
    			s1+=st.top();
    			st.pop();
    		}
    		st.push(s[i]);
    	}
    }
while(!st.empty()) {
	s1+=st.top();
	st.pop();
}
   cout<<s1;
    cout<<endl;

return 0;    
}
