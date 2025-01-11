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
//     cout<<"Your name is : "<<name<<endl; //Cin stopes execution if you give enter, space or tab 
//     palindrome(name);

//     cout<<"Length : "<<GetLength(name)<<endl;
//     reverse(name);
//     cout<<name<<endl;
    
//     cout<<name;
// }   

// STRINGS

#include<iostream>
using namespace std;

int main (){
    string s = "Prateek Sahu";
    cout<<s.length()<<endl;
    s.pop_back();
    s.push_back('a');
    cout<<s;
}