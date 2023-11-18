#include<iostream>
#include<string>
using namespace std;
int main(){
 //TASK 1
 int z;
 cout<<"enter the number"<<endl ;
 cin>>z;
 for(int i=1;i<=z;++i)#
 {
     if(z%i==0){
        cout<<i<<endl;
     }
 }






 //TASK 2


 int x = 5;
 int y = 10;
 if (x == 5)
 if (y == 10)
 cout << "x is 5 and y is 10" << endl;
 else
 cout << "x is not 5" << endl;





 //TASK 3

 int a;
 cout<<"enter the number"<<endl;
 cin>>a;
 if(a>10){
        if (a<=20){
    cout<<"1"<<endl;
        }

        else{
            cout<<0<<endl;
        }
 }






 //TASK 4



    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int m = n - 1;
    while (m > 1) {
        bool is_prime = true;
        for (int j = 2; j < m; j++) {
            if (m % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            cout << "The largest prime number less than or equal to " << n << " is " << m << endl;
            break;
        }
        m--;
    }
    if (m == 1) {
        cout << "There is no prime number less than or equal to " << n << endl;
    }






    //TASK 5

    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (str1 == str2) {
        cout << "The two strings are equal." << endl;
        cout << "Rotating the first string by one position to make them unequal..." << endl;
        char temp = str1[0];
        for (int i = 0; i < str1.length() - 1; i++) {
            str1[i] = str1[i + 1];
        }
        str1[str1.length() - 1] = temp;
        cout << "The first string after rotation: " << str1 << endl;
    }
    else {
        cout << "The two strings are not equal." << endl;
    }





//TASK 6

int divisor,dividend;
cout<<"enter the divisor";
cin>>divisor;
cout<<"enter the dividend";
cin>>dividend;

if(dividend<divisor){
    cout<<"division not possible";
    else{
       cout<<"answer is"<<dividend/divisor;


    }
}


//TASK 7

const int CHAR_COUNT = 1000;
string removeDuplicates(const string& str) {
    bool seen[CHAR_COUNT] = {false};
    string result;
    for (char ch : str) {
        if (!seen[ch]) {
            result.push_back(ch);
            seen[ch] = true;
        }
    }

    return result;
}
int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input);


    string result = removeDuplicates(input);
    cout << "the answer is: " << result << endl;

    return 0;
}







//TASK 8:

 int arr[5]={1,2,3,4,5};
    int newsize=10;
    int newarr[8];
    for(int i=0;i<5;++i){
        newarr[i]=arr[i];
    }
newarr[5]=6;
newarr[6]=7;
newarr[7]=8;

cout<<"element in array:"<<endl;
for(int i=0;i<newsize; ++i){
    cout<<newarr[i];
}

//TASK 9
int arr[10]={1,2,3,4,5,6,7,8,9};
  for(int i=0;i<=10;i++){
    for(int j=0;j<=10;j++){
        for(int k=0;k<=10;k++)
        if(arr[i]+arr[j]+arr[k]==10)
            cout<<arr[i]<<arr[j]<<arr[k]<<endl;
    }
  }


  //TASK 10:
  int n;
cin>>n;
int arr[n];
for(int i=0;i<n; i++){
    cin>>arr[i];
}
int counter=1;
while(counter<n-1){
for(int i=0;i<n-counter;i++){
    if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
counter++;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
