#include <iostream >
using namespace std;
int binarysearch (const int [],int ,int);
const int size =10;
int main ()
{
	int idnums[size]={10,11,12,13,14,15,16,17,18,19};
	int results ;
	int empid;
	cout<<"enter the employee you wish to search";
	cin>>empid;
	results=binarysearch(idnums,size,empid);
	if (results==-1)
	cout<<"that number does not exsist in the array";
	else
	{
		cout<< "the id is found  at element "<<results;
		cout<<"in the array";
		
	}
}
int binarysearch (const int array [],int  size ,int value)
{

int first =0; 
 int last=size-1;
 int middle;
 int position =-1;
 bool found =false;
 while (!found && first <=last  )
 {
 	middle =(first +last )/2;
 	if (array[middle ]==value )
 	{
 		found =true;
 		position =middle;
	 }
	 else if (array[middle]>value)
	 last =middle -1;
	 else 
	 first =middle +1;
}
return position ;
 }