class solution{
	private:
	bool valid(char ch){
		if((ch>='a'&&ch<='z')||(ch>='A' && ch<='Z')||(ch>='0'&&ch<='9')){
			return 1;
		}
		return 0;
	}
bool isPalindrome(string a){
	int st=0;
	int e= a.length()-1;
	while(st<=e){
		if(a[st]!= a[e]){
			return 0;
		}
		
		else{
			st++;
			e--;
		}
// 			return 1;
	}
	return 1;
}
	public:
	bool checkPalindrome(string s){
		string temp= "";
		for(int i=0;i<s.length();i++){
			if(valid (s[i])) {
				temp.push_back(s[i]);
			}
		}
		return isPalindrome(temp);
	}
};