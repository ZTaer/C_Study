#include <stdio.h>
#define KG(j) j*0.5
#define FQ(j) 3.7*KG(j)
#define QL(j) 7*KG(j)
#define XQ(j) 1.3*KG(j)
#define KXC(j) 8*KG(j)
#define YC(j) 2.4*KG(j)
#define YCC(j) 9*KG(j)
#define HG(j) 6.3*KG(j)
#define BLB(j) 0.5*KG(j)


int main(){
	float xm,xh,xjy;
	xm = FQ(2)+KXC(1)+YCC(1);
	xh = XQ(3)+YC(0.5)+HG(5);
	xjy = HG(10)+BLB(20);
	printf("小明需要支付%.2f元\n",xm);
	printf("小红需要支付%.2f元\n",xh);
	printf("小甲鱼需要支付%.2f元\n",xjy);
	return 0;
}
