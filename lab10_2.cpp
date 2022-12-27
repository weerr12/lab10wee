#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

void printO(int N,int M){
    if(N<=0 or M<=0){
        cout << "Invalid input";
    }else{
        while(N>0){
            int i=M;
                while(i>0){
                    cout << "O";
                    i--;
                }
                    cout <<"\n";
                    N--;
            }
        }
}
int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
