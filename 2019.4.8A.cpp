#include<iostream>
class Number
{
	private:
		int no;
	public:
	Number (int x)
	{
		no=x;
	}
	void show()
	{
		std::cout<<no<<std::endl;
	}
	int maxDivisor(Number no2)
	{
		int temp=no2.no;
		if(no%no2.no!=0)
		{
			temp=no%no2.no;
			no=no2.no;
			no2.no=temp;
		}
		return  temp;
	}
};
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1), no2(n2);
        Number no3 = no1.maxDivisor(no2);  //最大公约数
        no3.show();
    }
}
 
