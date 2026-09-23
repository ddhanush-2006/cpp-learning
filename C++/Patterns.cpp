/*
output 1:
* * * *
* * * *
* * * *
* * * *

output 2:
*
* *
* * *
* * * *
* * * * *

output 3:
1
1 2
1 2 3
1 2 3 4

output 4:
1
2 2
3 3 3
4 4 4 4

output 5:
*  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *

output 6:
1 2 3 4
1 2 3
1 2
1

output 7:
    *
   * *
  * * *
 * * * *
* * * * *

output 8:
* * * * *
 * * * *
  * * *
   * *
    *

output 9:
    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *

output 10:
*
* *
* * *
* * * *
* * *
* *
*
output 11:
1
0 1
1 0 1
0 1 0 1

output 12:
1      1
12    21
123  321
12344321

output 13:
1
2 3
4 5 6
7 8 9 10

output 14:
A
A B
A B C
A B C D
A B C D E

output 15:
A B C D E
A B C D
A B C
A B
A

output 16:
A
B B
C C C
D D D D

output 17:
    A
  A B A
 A B C B A
A B C D C B A

output 18:
E
D E
C D E
B C D E
A B C D E

output 19:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

output 20:
*      *
**    **
***  ***
********
***  ***
**    **
*      *

output 21:
*****
*   *
*   *
*   *
*****

output 22:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include<iostream>
using namespace std;

void print1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<" * ";
        }
        cout<<"\n";
    }

}

void print2(int n){
    cout<<"\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<" * ";
        }
        cout<<"\n";
    }

}

void print3(int n){
    cout<<"\n";
    for(int i = 0; i <=n; i++){
        for(int j = 1; j <= i; j++){
            cout<< j<<" ";
        }
        cout<<"\n";
    }

}

void print4(int n){
    cout<<"\n";
    for(int i = 0; i <=n; i++){
        for(int j = 1; j <= i; j++){
            cout<< i<<" ";
        }
        cout<<"\n";
    }

}

void print5(int n){
    cout<<"\n";
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i+1; j++){
            cout<<" * ";
        }
        cout<<"\n";
    }

}

void print6(int n){
    cout<<"\n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

}

void print7(int n){
    cout<<"\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j <n-i+1; j++){
            cout<<" ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout<<"* ";

        }
        for(int j = 0; j <n-i+1; j++){
            cout<<" ";
        }
        cout<<endl;
    }

}

void print8(int n){
    cout<<"\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j <2*n -(2*i+1); j++){
            cout<<"* ";

        }
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print9(int n) {
    cout << "\n";
    
    // 1. Top Half (including the middle row duplicate)
    for (int i = 0; i < n; i++) {
    
    // Print spaces: decreases as row index increases
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars with a trailing space
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // 2. Bottom Half
    for (int i = 0; i < n; i++) {
        // Print spaces: increases as row index increases
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars with a trailing space: decreases per row
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void print10(int n) {
    cout << "\n";
    for(int i = 1; i <= 2*n-1; i++){
        int star = i;
        if(i > n) star = 2*n-i;
        for(int j = 1; j <= star; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print11(int n){
    int start = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++){
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}

void print12(int n){
    int space = 2*(n-1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<j;
        }
        for(int j = 1; j <= space; j++){
            cout<<" ";
        }
        for(int j = i; j>=1; j--){
            cout<< j;
        }
        cout<<endl;
        space -= 2;
    }

}

void print13(int n){
    int num = 1;
    for(int i = 0; i <= n; i++){
        for(int j =1; j<= i; j++){
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    }
}

void print14(int n){
    for(int i = 0; i <= n; i++){
        for(char ch = 'A'; ch <= 'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print15(int n){
    for(int i = n; i >= 0; i--){
        for(char ch = 'A'; ch <= 'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print16(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print17(int n){
    cout<<"\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j <n-i-1; j++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j <= 2*i+1; j++){
            cout<<ch;//<<" ";
            if(j <= breakpoint) ch++;
            else ch--;

        }
        for(int j = 0; j <n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print18(int n){
    for(int i = 0; i <= n; i++){
        for(char ch = 'E'-i; ch <= 'E'; ch++ ){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print19(int n){
    //upper half
    int initSpace = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n-i; j++){
            cout<< "*";
        }
        for(int j = 0; j < initSpace; j++){
            cout<<" ";
        }
        for(int j = 1; j <= n-i; j++){
            cout<< "*";
        }
        initSpace += 2;
        cout<<endl;
    }
    //bottom half
    initSpace = 2*n-2;
    for(int i = 1; i <= n ;i++){
        for(int j = 1; j <=i; j++){
            cout<< "*";
        }
        for(int j = 0; j < initSpace; j++){
            cout<<" ";
        }
        for(int j = 1; j <=i; j++){
            cout<< "*";
        }
        initSpace -= 2;
        cout<<endl;
    }

}

void print20(int n){
    cout << "\n";
    int spaces = 2*n-2;
    for(int i = 1; i <= 2*n-1; i++){
        int star = i;
        if(i > n) star = 2*n-i;
        for(int j = 1; j <= star; j++){
            cout<<"*";
        }
        for(int j = 1; j <= spaces; j++){
            cout<<" ";
        }
        for(int j = 1; j <= star; j++){
            cout<<"*";
        }
        cout<<endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
}

void print21(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ;j++){
            if( i == 0 || j == 0 || i == n-1 || j == n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void print22(int n){
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j <2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top, down), min(left, right)))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of * (n):"<<endl;
    cin>>n;

    print22(n);
    return 0;
}