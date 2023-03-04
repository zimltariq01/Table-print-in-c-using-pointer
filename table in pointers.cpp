<<<<<<< HEAD
#include<iostream>
using namespace std;
int func(int *ptr)
{
	for(int i=1;i<10;i++)
	{
		cout<<*ptr<<"x"<<i<<"="<<(*ptr)*i<<endl;
	}
}
int main()
{
	int num;
	cout<<"enter the number: "<<endl;
	cin>>num;
	func(&num);
	return 0;
}
=======
#include<iostream>
using namespace std;
int func(int *ptr)
{
	for(int i=1;i<10;i++)
	{
		cout<<*ptr<<"x"<<i<<"="<<(*ptr)*i<<endl;
	}
}
int main()
{
	int num;
	cout<<"enter the number: "<<endl;
	cin>>num;
	func(&num);
	return 0;
}
>>>>>>> c781cc979bb4a4abd0c656729ae0ebd26a871a41
