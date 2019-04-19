#include <iostream>
using namespace std;
class Number {
	private:
		int no;
		int a[100];
	public:
		void show() {
			return;
		} Number(int x,int y) {
			no=x;
		}
		Number converto(int n) {
				int i;
				for(i=0;; i++) {
					a[i]=no%n;
					no=no/n;
					if(no==0)
						break;
				}
				for(int j=i; j>=0; j--)
				cout<<a[j];
				cout<<endl;
				return *this;
		}
};   

int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1, 10);     //n1是10进制正整数
        Number no3 = no1.converto(n2);  //no3是n2进制的正整数
        no3.show();     //输出结果
    }
}
