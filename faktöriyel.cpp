#include<iostream>

int main(){
	std::cout<<"Faktoriyelini alacaginiz sayiyi giriniz"<<std::endl;
	int a;
	std::cin>>a;
	int sonuc=1;
	for(int i=1;i<a;i++)
	{
		sonuc=sonuc*i;
			
	}
	std::cout<<a<<"faktoriyeli"<<sonuc;
	return 0;
}
