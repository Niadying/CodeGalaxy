// #include<iostream>
// #include<vector>
// using namespace std;

// char GetLowerCase (char ch){
    
//     if(ch>='a' && ch<='z'){
//         return ch;
//     }
//     else{
//         return ch-'A'+'a';
//     }
// }

// int GetLength(char name[]){
//      int length = 0;
//     for(int i = 0; name[i]!='\0'; i++){
//         length++;
//     }
//     return length;
// }

//  void reverse(char name[]){
//     int s = 0;
//     int e = GetLength(name) - 1;
//     while(s<=e){
//         swap(name[s],name[e]);
//         s+=1; 
//         e-=1;
//     }
// }

// void palindrome (char ch[]){
//     int s = 0; 
//     int e = GetLength(ch)-1;
//     bool pal = true;
//     while(s<=e){
//         if(GetLowerCase(ch[s++]) != GetLowerCase(ch[e--])){
//             pal = false;
//         }
//     }
//     cout<<"Palindrome : ";
//     if(pal == false){
//         cout<<"NO";
//     }
//     else{
//         cout<<"YES";
//     }
//     cout<<endl;
// }


// int main(){
//     // cout<< GetLowerCase('B')<<endl;
//     char name[20];
//     cout<<"Enter your name : ";
//     cin>>name;  // AFTER TAKING I/P IF STRING REMAINS EMPTY SO A NULL CHARACTER WILL BE STORED AND IT WILL TELL THAT STRING IS OVER AND WHILE PRINTING IT WILL NOT PRINT FURTHER..
//     // name[3]='\0';
//      // enterting null character in 3 index.
//     cout<<"Your name is : "<<name<<endl; //cin stopes execution if you give enter, space or tab 
//     palindrome(name);

//     cout<<"Length : "<<GetLength(name)<<endl;
//     reverse(name);
//     cout<<name<<endl;
    
//     cout<<name;
// }   

// STRINGS

// #include<iostream>
// using namespace std;

// int main (){
//     string s = "Prateek Sahu";
//     cout<<s.length()<<endl;
//     s.pop_back();
//     s.push_back('a');
//     cout<<s;
// }

// VALID PALINDROME ***************

// #include<iostream>
// using namespace std;

// bool valid(char ch){
//     if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
//         return 1;
//     }
//     else{
//         return 0;
//     }

// }

// char lowercase (char ch){
//     if((ch>='a' && ch<='z')||(ch>='0'&&ch<='9')){
//         return ch;
//     }
//     else{
//         return ch-'A'+'a';
//     }
// }

// bool palindrome (string s){
//     int st = 0; 
//     int e = s.length()-1;

//     while(st<=e){
//         if(s[st++]!=s[e--]){
//             return false;
//         }
//     }
//     return true;
// }

// int main (){

//     string s = "as#$SA";

//       // faltu character hatao
//      string temp = "";
//      for(int i = 0; i<s.length();i++){
//         if(valid(s[i])){
//             temp.push_back(s[i]);
//         }
//      }

//     // lower case kro
//     for(int i = 0 ;i<temp.length(); i++){
//         temp[i]=lowercase(temp[i]);
//     }
       
//     // check for palindrome
//     cout<<"Palindrome : "<<palindrome(temp);
  
// }


// converting MY SPACE to YM ECAPS

// #include<iostream>
// using namespace std;


// int main(){

//       string s;
//       s="Prateek Sahu Studies in IIIT Bhopal";
//       string temp="";
//       int count = 0;
//       int v = 0;


//      for(int i = 0; i<=s.length(); i++){

//         if(s[i]!=' ' &&  s[i]!='\0'){
//             temp.push_back(s[i]);
//             v++;
//         }

//         else{
//         int sta = count;
//         int e = temp.length()-1;

//         while(count<=e){
//             swap(temp[count++], temp[e--]);
//         }

//         temp.push_back(' ');
//         count = v+1;
//         v++;
//         }
//     }

//     cout<<temp;

// }


// FINDING MAXIMUM OCCURENCE CHARACTER


// #include<iostream>
// using namespace std;

// char findMaxOccu(string s){
//     int arr[26]={0};
//     for(int i = 0; i<s.length(); i++){
//         char ch = s[i];
//         int number = 0;
//         if(ch>='a'&&ch<='z'){
//             number = ch - 'a';
//         }
//         else{
//             number = ch-'A';
//         }
//         arr[number]+=1;
//     }
//     int index = arr[0];
//     int val = 0;
//     for(int i = 0; i<26; i++){
        
//         if(index<arr[i]){
//             index= arr[i];
//             val = i;
//         }
//     }
//     return 'a'+val;
    
// }

// int main (){
//     string s;
//     cin>>s;
//     cout<<findMaxOccu(s);

// }

