#include <iostream>
using namespace std;
int main()
{
 int num,remain;

 cout<<"Please enter the number:";
 cin>> num;
 
 begin:
 	
 if(num==1){
        return 0;
 }
 else{
 
 	remain=num%2;
 	
 	if(remain==1){
 		num=3*num+1;
 	}
	  else{
	 	num=num/2;
	 }

}
 cout<<num<< " ";
 goto begin;
 return 0;
}

