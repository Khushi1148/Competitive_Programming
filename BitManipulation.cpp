#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int turnOffKthBit(int n, int k){
	
	return n&(~(1<<k));  

}

int turnOnKthBit(int n, int k){
	return n|(1<<k);
}

void checkKthBit(int n, int k){
	if(n & (1<<k)){
		cout << "The kth bit is set" << endl;
	}
	else{
		cout << "The kth bit is not set" << endl;
	}
}

int toggleKthBit(int n, int k){
	return n^(1<<k);
}

int rightMostSetBit(int n){
	return n&(n-1);
}

void isPowerOfTwo(int n){
	if(!(n&(n-1))){
		cout << "Is a power of 2";
	}
	else{
		cout << "Is not a power of 2";
	}
}

int noOfSetBits(int n){
	int count = 0;
	while(n>0){
		n = n&(n-1);
		count++;
	}
	return count;
}

int CalculatePower(int a, int b){
	int res = 1;
	while(b){
		if(b&1){
			res = res*a;
		}
		a = a*a;
		b >>=1;
	}
	return res;

}

int CalculateProductOfAandB(int a, int b){
	int res = 0;
	while(b){
		if(b&1){
			res = res + a;
		}
		a = 2*a;
		b >>= 1;
	}
	return res;
}


int main(){
    // TO CHECK FOR EVEN AND ODD NUMBERS
 // 0001
 // 110
    001
	000
	// int n;
	// cin >> n;
	// if (n&1){
	// 	cout << "The number is odd"<< endl;
	// }
	// else{
	// 	cout << "The number entered is even"<< endl;
	// }


    // TWO DETECT IF TWO INTEGERS HAVE OPPOSITE SIGNS
	-5 6  1100110       xor 0 1 = 1
							1 0 = 1
							1 1 = 0
							0 0 = 0
	      0101111
		  111000 
		  -------
		  10100 

    // int a;
    // int b;
    // cin >> a;
    // cin >> b;
	// if((a^b)<0){
	// 	cout << "The numbers have opposite signs" << endl;
	// }
	// else{
	// 	cout << "Not opposite signs" << endl;
	// }

	// TO ADD 1 TO x

	// int x;
	// cin >> x;
	// cout << x+1 << endl;
	// cout << -(~x) << endl;

   // TO SUBTACT 1 FROM X
	// cout << ~(-x) << endl;

	// SWAPPING TWO VARIABLES USING BIT OPERATIONS
	// int x;
	// int y;
	// cin >> x;
	// cin >> y;
	// x = x^y;
	// y = x^y;
	// x = x^y;

	// SWAPPING TWO VARIABLES USING ARITHMETIC OPERATORS
	// int a, b;
	// cin >> a >> b;
	// a = a+b;
	// b = a-b;
	// a = a-b;
	// cout << a << ' ' << b;

	// ONE ODD OCCURING NUMBER
	// int num[9] = {2,2,5,3,6,5,3,3,3}; a^a = 0
	// int res = 0;
	// for(int e: num){
	// 	res = res^e;
	// }
	// cout << "The odd occuring number is : " << res;

	// TO TURN OFF A BIT
	// int n, k;   1011100
	// cin >> n >> k;
	// cout << turnOffKthBit(n,k);

	// TO TURN ON A BIT
	// cout << turnOnKthBit(n,k);

	// TO CHECK THE Kth BIT IS SET OR NOT
	// checkKthBit(n,k);

	// TO TOGGLE THE KTH BIT
	// cout << toggleKthBit(n,k);

	// TO UNSET THE RIGHTMOST SET BIT
	// cout << rightMostSetBit(n);

	// TO CHECK IF AN INTEGER IS POWER OF 2
	// isPowerOfTwo(n);

	// COUNT THE NUMBER OF SET BITS
	// cout << noOfSetBits(n);

	// PROGRAM TO PRINT THE BINARY REPRESENTATION OF CAPITAL LETTERS
	// for(char ch = 'A'; ch<= 'Z'; ch++){
    // 	bitset<10> bt(ch);
    // 	cout << bt << '\n';
    // }
	// cout << "---------------" << '\n';

	// // PROGRAM TO COnVERT THE UPPERCASE TO LOWERCASE
	// // just add 32 to convert uppercase(65) to lowercase(97)
	// for(char ch = 'A'; ch<= 'Z'; ch++){
    // 	bitset<10> bt(ch+32);
    // 	cout << bt << '\n';
    // }

	// BINARY EXPONENTIATION
	// int a, b;
	// cin >> a >> b;
	// cout<< CalculatePower(a,b);

	//BINARY MULTIPLICATION
	// cout << CalculateProductOfAandB(a,b);

	// GIVEN AN ARRAY [1,2,....,N] , FIND THE MISSING INTEGER
	// int arr[] = {1,2,4,5};
	// // finding XOR of all elements from 1 to 5
	// int res1 = 0;
	// for(int i =1; i<=5; i++){
	// 	res1 = res1^i;
	// }

	// // finding the XOR of elements of the array
	// int res2 = 0;
	// for(int e: arr){
	// 	res2 = res2^e;
	// }

	// // finding the missing number
	// cout << (res1^res2);


	// IN AN ARRAY TWO NUMBERS ARE ODD NUMBER OF TIMES AND THE REST ARE EVEN NUMBER OF TIMES
	// int arr[] = {2,2,3,2,2,4,5,5,5,4};
	// int xor_ans = 0;
	// for(int e: arr){
	// 	xor_ans = xor_ans^e;
	// }
	// int res1 = 0, res2 = 0;
	// int k = xor_ans & (~(xor_ans-1));
	// for(int e: arr){
	// 	if(e&k){
	// 		res1 = res1^e;
	// 	}
	// 	else{
	// 		res2 = res2^e;
	// 	}
	// }
	// cout << res1 << " " << res2;







}



