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


// INBUILT FUNCTIONS IN STRING


// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     char source[3]; char destination[3];
//     cin>>source;
//     char s1[100];
//     char s2[100];
//     cin.getline(s1,100,'P');  // using cin.getline to get i/p of whole line, s is name of char array, 100 is size of it and P is costum deligator which means if the given word will come it won't take i/p ahead of this
//     cin.getline(s2,100,'P');

//     // length ->
//     cout<<"Length "<<strlen(s1)<<endl;
//     cout<<"Length "<<strlen(s2)<<endl;
//     // comparision ->
//     cout<<"Compare "<<strcmp(s1,s2)<<endl;
//     // copy ->
//     strcpy(destination,source);
//     cout<<destination<<endl;
// }


// REMOVE SPACE AND ADD @40

// #include<bits/stdc++.h>
// using namespace std;

// // void remove(char ch[],int n){
// //     string temp = "";
// //     for(int i = 0; i<n; i++){
// //         if(ch[i]!=' '){
// //             temp.push_back(ch[i]);
// //         }
// //         else{
// //             temp.push_back('@');
// //             temp.push_back('4');
// //             temp.push_back('0');
// //         }
// //     }
// //     cout<<temp<<endl;
// // }


// void removewithoutnew(char ch[], int n){

//         int count = 0;
//         for(int i = 0 ;i<n ; i++ ){
//         if(ch[i]==' '){
//           count+=2;
//         }
//      }
//     for(int i = 0 ;i<count+n ;i++ ){
//         if(ch[i]==' '){
            
//             ch[i]='@';
//             ch[i+1]='4';
//             ch[i+2]='0';

//         }
//     }
//     cout<<ch<<endl;
// }


// int main (){
//     char ch[100];
//     cin.getline(ch,100);
//     int n = strlen(ch);
//     cout<<n<<endl;
//     // remove(ch,n);
//     removewithoutnew(ch,n);

// }


// REMOVING SUBSTRING IN A STRING (WORST METHOD)

// #include<iostream>
// using namespace std;

// string  removespace(string s,int start,int n){

    
//     while(start + n != s.length()){
//         swap(s[start], s[start+n]);
//         start++;
//     }
//     return s;
// }

// string removesub (string s, string sub){

//     for(int i = 0; i<s.length(); i++){

//         string temp1="";
//         int j = i;

//         for(; j<sub.length()+i; j++){
//             temp1.push_back(s[j]);
//         }

//         if(temp1 == sub){
//             s[j-3]=' ';
//             s[j-2]=' ';
//             s[j-1]=' ';
//             int  start = j-3;
//             int n = sub.length();
//             while(start + n != s.length()){
//                  swap(s[start], s[start+n]);
//                  start++;
//              }
//             i=0;
//         }
//     }

//     for(int i =0; i<s.length(); i++){
//         if(s[i]==' '){
//             s[i]='\0';
//         }
//     }
//      cout<<s<<endl;
//     return s;
// }

// int main (){

//     string s = "daabcbaabcbc";
//     string subs = "abc";
//     removesub(s,subs);
//     cout<<s<<endl;
    
// }

// WILL LEARN FROM WEBSITE*********************


// PERMUTATION IN STRING
// WILL GOOGLE IT


// #include<bits/stdc++.h>
// using namespace std;

// bool check (int a[], int b[]){
//     for(int i = 0; i<26; i++){
//         if(a[i]!= b[i]){
//             return 0;
//         }
//     }
//     return 1;
// }

// bool checkpermutation (string s1, string s2){

//     // storing count of s1
//     int count1[26] = {0};
//     for(int i = 0; i<s1.length(); i++){
//         int number = s1[i]-'a';
//         count1[number]++;  
//     }

//     // storing count of s2
//     int count2[26]={0};
//     for(int i = 0; i<s2.length(); i++){
//         int index = s2[i]-'a';
//         count2[index]++;
//     }
//     // checking if initally both are same

//     if(check(count1,count2)){
//         return 1;
//     }
//     // checking further

//    for(int i = s2.length(); i<s1.length(); i++){

//         int newindex = s1[i]-'a';
//         count2[newindex]++;

//         int oldindex = s1[i-s2.length()] - 'a';
//         count2[oldindex]--;

//         if(check(count1,count2)){
//             return 1;
//         }
//    }

//    return 0;
    
// }

// int main (){ 
//     string s = "eidbaooo";
//     string s1 = "ab";
//     cout<<"Permutation : "<<checkpermutation(s,s1);

// }   


// REMOVE DUPLICATES

#include<bits/stdc++.h>
using namespace std;

string removeDuplicate (string s){
    string temp = "";

    for(int i = 0;i<s.length(); i++){
        int v = i;
        for(int j = v; j<2+v; j++){
            temp.push_back(s[j]);
        }
        if(temp[0]==temp[1]){
            s.erase( s.begin () + i);
            s.erase(s.begin () + i);
            i = -1;
        }
        temp ="";
    }
    return s;
}

int main (){

    string s = "abbaca";
    cout<<removeDuplicate(s);
}