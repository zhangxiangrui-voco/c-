#include <iostream>
class HanXin
{
   private:
   	 int a,b,c;
   public:
   	
   		
		int line3(int n1)
		{
			 a=n1;
		}
		int line5(int n2)
		{
			 b=n2;
		}
		int line7(int n3)
		{
			 c=n3;
		}
	    void showMany()
   		{
   			
			   int num;
			   num=70*a+21*b+15*c;
			   while(num>105)
			   {
			   	num=num-105;
			   } 
			   if(10<=num&&num<=100)
			   std::cout<<num <<std::endl;
			   else
			   {
			   	std::cout<<"Impossible"<<std::endl;
			   }
		}
		
		
	
};

int main() 
{
    int n, n1, n2,n3;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2 >> n3;
        HanXin hx;  //韩信
        hx.line3(n1);  //3人一排
        hx.line5(n2);   //5人一排
        hx.line7(n3);   //7人一排
        hx.showMany();
    }
    } 
