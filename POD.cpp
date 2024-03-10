// GFG Problem of the Day : 10 March , 2024

string removeDuplicates(string str) {
	    string ans;
	    set<char>s;
	    for(int i=0;i<str.size();i++){
	        if(s.find(str[i])==s.end()){
	            s.insert(str[i]);
	            ans.push_back(str[i]);
	        }
	        
	    }

	    return ans;
	}
