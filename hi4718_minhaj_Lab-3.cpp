#include<iostream>
using namespace std;
int main(){
	int R[16]={0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
	int A[16]={0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1};
	int HT[16]={0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
	int E[16]={0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
	int i;
	cout<<"---------------------------------------"<<endl;
	cout<<"R  A  HT  E    p1   p2   p3   c "<<endl;
	cout<<"---------------------------------------"<<endl;
	int invalid;
	
	invalid= 0;


	
	for (i=0;i<=15;i++)
	{

		cout<<R[i]<<"  ";
		cout<<A[i]<<"  ";
		cout<<HT[i]<<"   ";
		cout<<E[i]<<"    ";
		cout<<!(R[i] && !A[i])<<"    ";
		cout<<!(A[i] && !HT[i])<<"    ";
		cout<<!(HT[i] && !E[i])<<"    ";
		
		cout<<!(E[i] && !R[i])<<"    ";
		
		if(!(R[i] && !A[i]) == 1 && !(A[i] && !HT[i]) ==1 && !(HT[i] && !E[i])==1 && !(E[i] && !R[i])==0){
			cout<<"Invalid";
			
			invalid=invalid+1;
		}
		
		
		
		
		
		cout<<endl;
		
		
	
	}
	
	cout<<endl;
	
	if (invalid>0){
		cout<<"This statement is invalid cause "<< invalid<< "  outputs"<<endl;
		cout<<"have false conclusion while all the propositions are true";
		
	}
}
