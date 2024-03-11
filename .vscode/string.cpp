
//#include <algorithm>
//#include <iostream>
//#include <iterator>
//#include <string>
//#include <cstddef>    
//#include<stack>
//using namespace std;




//void reverseSentence(string s){
//	stack<string>st;
//	for(int i =0; i<s.length(); i++){
//		string word ="";
//		while(s[i] !=' ' &&i<s.length()){
//			word +=s[i];
//			i++;
//		}
//		st.push(word);
//	}
//	while(!st.empty()){
//		cout<<st.top()<<" ";
//		st.pop();
//	}
//	cout<<endl;
//}
//int main(){
//	string s ="  I am Rahul Raj, Kushwaha ";
////	getline(cin,s);
//    reverseSentence(s);
//}

    // std::size_t
// string::find_first_of
//int main ()
//{
//  std::string str ("Please, replace the vowels in this sentence by asterisks.");
//  std::size_t found = str.find_first_of("aeiou");
//  while (found!=std::string::npos)
//  {
//    str[found]='*';
//    found=str.find_first_of("aeiou",found+1);
//  }
//
//  std::cout << str << '\n';
//
//  return 0;
//}
//// string::substr
//
//int main ()
//{
//  std::string str="We think in generalities, but we live in details.";
//                                           // (quoting Alfred N. Whitehead)
//
//  std::string str2 = str.substr (3,5);     // "think"
//
//  std::size_t pos = str.find("we");      // position of "live" in str
//
//  std::string str3 = str.substr (pos,5);     // get from "live" to the end
//
//  std::cout << str2 << ' ' << str3 << '\n';
//
//  return 0;
//}
// // string::erase
//int main ()
//{
//  std::string str ("This is an example sentence.");
//  std::cout << str << '\n';
//                                           // "This is an example sentence."
//  str.erase (10,8);                        //            ^^^^^^^^
//  std::cout << str << '\n';
//                                           // "This is an sentence."
//  str.erase (str.begin()+9);               //           ^
//  std::cout << str << '\n';
//                                           // "This is a sentence."
//  str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
//  std::cout << str << '\n';
//                                           // "This sentence."
//  return 0;
//}
 // C++ program to demonstrate functioning of substr()

// using namespace std;

// int main()
// {
// 	// Take any string
// 	string s1 = "aaabcabcdacd";

// 	// Copy two characters of s1 (starting
// 	// from position 3)
// 	string r = s1.substr(2, 6);

// 	// prints the result
// 	cout << "String is: " << r;

// 	return 0;
// }

// int main()
// {
//     std::string s = "abc";
 
//     do std::cout << s << '\n';
//     while (std::next_permutation(s.begin(), s.end()));
 
//     std::cout << s << '\n';
// }

 
// int main()
// {
//     std::string s("Exemparl");
//     std::next_permutation(s.begin(), s.end());
 
//     std::string c;
//     std::copy(s.cbegin(), s.cend(), std::back_inserter(c));
//     std::cout << c << '\n'; // "Exemplar"
// }


// #include <iostream>
// #include <string>
 
// int main()
// {
//     std::string s("1xemplar");
//     // *s.begin() = '2';
//     // std::cout << s << '\n';
 
//     auto i = s.cbegin();
//     std::cout << *i << '\n';
// //  *i = 'E'; // error: i is a constant iterator
// }

// #include <algorithm>
// #include <cassert>
// #include <cstring>
// #include <string>
 
// int main()
// {
//     std::string const s("Emplary");
//     assert(s.size() == std::strlen(s.data()));
//     assert(std::equal(s.begin(), s.end(), s.data()));
//     assert(std::equal(s.data(), s.data() + s.size(), s.begin()));
//     assert('\0' == *(s.data() + s.size()));
// }
// int main()
// {
//     std::string s("Exemplary");
//     char& f1 = s.front();
//     f1 = 'e';
//     std::cout << s << '\n'; // "exemplary"
 
//     std::string const c("rahul Raj");
//     char const& f2 = c.front();
//     std::cout << &f2 << '\n'; // "Exemplary"
// }

//maximum occurance of the character
//int arr[26] ={0};
//
//for(int i =0; i<s.length(); i++){
//	int number =0;
//	char ch = s[i];
//	if(ch>='a'&&ch<='z'){
//		number = ch-'a';
//	}
//	else{
//		number = ch='A';
//	}
//		arr[number]++;
//	}
//	//max character
//	int maxi =-1; int ans =-1;
//	for(int i=0; i<=26; i++){
//		if(max <arr[i]){
//			ans =i;
//			maxi = arr[i]
//		}
//	}
//	char finalValue = 'a'+ans;
//	return finalValue;
//}
//int main(){
//	
//	
//	return 0;
//}

//void reverseString(string s){
//	int rev =0;
//	for(int i =0; i<s.length(); i++){
//		if(s[i] == ' '){
//			reverse(s.begin()),s.begin()+i);
//			rev +=i;
//		}
//		if(i =s.length()-1){
//			reverse(s.begin()+rev,s.length()-1);
//		}
//	}
//	return s;
//}
//case1
//char tolowerCase(char ch){
//	if(ch >= 'a' && ch <='z'){
//		return ch;
//	}
//	else{
//		char temp = ch -'A'+'a'; 
//	}
//}

//case2
//bool isPalindrome(char a[],int n){
//	int st= 0;
//	int e= n-1;
//	while(st<=e){
//		if(tolowerCase(a[st]) != tolowerCase(a[e])){
//			return 0;
//		}else
//		st++;
//		e--;
//	}
//	return 1;
//}
//case3
//	void reverse(char name[],int n){
//		int s =0;
//		int e =n-1;
//		while(s<=e){
//			swap(name[s],name[e]);
//			s++; e--;
//		}
//	}
//    int getLength(char name[]){
//	int cnt =0;
//	for(int i=0; name[i]!= '\0';i++){
//		cnt++;
//	}
//	return cnt; 
//   } 
//	int main(){
//		char name[1000];
//		cout<<"Enter the name of the student"<<endl;
//		cin>>name;
//		
//		cout<<"Your name is ";
//		cout<<name<<endl;
//		int len = getLength(name);
//		cout<<"Length:"<<len<<endl;
////		
////		cout<<"Length: "<<len<<endl;
////		reverse(name,len);
////		cout<<"your Reverse of name "<<name<<endl;
//		cout<<"palindrome or not"<<isPalindrome(name,len)<<endl;
//		return 0;
//	}