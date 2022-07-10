#include<iostream>
using namespace std;
class area{
	int length, breadth;
	public:
		area(int l, int b){
			length=l;
			breadth=b;
			
		}
		area(area &obj){
			length=obj.length;
			breadth=obj.breadth;
		}
		void print(){
			cout<<"the area of rectangle is:"<<length*breadth<<endl;
		}
};
int main(){
	int a,b;
		cout<<"enter the length and breadth of rectangle:"<<endl;
		cin>>a>>b;
		area rectangle1(a,b), rectangle2=rectangle1;
		rectangle2.print();
		return 0;
}
