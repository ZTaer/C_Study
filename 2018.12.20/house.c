#include <stdio.h>
#include <math.h>

/*
 
 思路：
 接受:
 	price = 每平方米价格，
	area = 面积大小，
	ratio = 按揭成数7 ～70%, 
	int time = 分期年数，
	yir = 年利率5.4 ～ 5.4% ～0.054
 计算:
	按竭 - 转换7～70%
	分期年数 - 转换月
	年利率 - 转浮点数

	total_price = 房款总额 = 面积*价格
	down_payment = 首付 = 房款总额*（1-按竭）
	loan = 货款本金 = 房款总额*按竭
	
	mir = 月利率 = 年利率/12
	ave_repay = 月均还款 = 贷款本金 * (月利率 * (1 + 月利率)^还款月数) / ((1 + 月利率)^还款月数 - 1)
	interest = 总利息 = 还款月数 * 月均还款 - 贷款本金
	total_repay = 还款总额 = 货款本金+总利息
 输出:
 	房款总额( total_price )
	首付( down_payment )
	货款本金( loan )
	还款总额( total_repay )
	总利息( interest )
	月均还款( ave_repay )
 
*/

int main(){
	int time;
	float ratio, price, area, yir,mir; // 按竭,每平方米价格，面积大小，年利率
	float total_price, down_payment, loan, total_repay, interest, ave_repay; //房款总额，首付，货款本金，还款总额，总利息，月均还款
	
	// 接受区
 	printf("单价( 每平方米 ): ");
  	scanf("%f",&price);
  	printf("面积大小: ");
  	scanf("%f",&area);
	printf("按揭成数: ");
	scanf("%f",&ratio);
  	printf("分期年数: ");
  	scanf("%d",&time);
  	printf("年利率: ");
  	scanf("%f",&yir);
	
	// 转换区
	ratio = ratio*0.1;
	time = time*12;
	yir = yir * 0.01;
	
	//计算区
	total_price = area*price;
	down_payment = total_price * (1 - ratio);
	loan = total_price * ratio;
	
	mir = yir/12;
	ave_repay = loan * (mir * pow((1+mir),time)) / (pow((1+mir),time)-1);
	interest = time * ave_repay - loan;
	total_repay = interest + loan;

	//显示区
	printf("\
房款总额: %.2f\n\
首期付款: %.2f\n\
货款本金: %.2f\n\
还款总额: %.2f\n\
支付利息: %.2f\n\
月均还款: %.2f",total_price,down_payment,loan,total_repay,interest,ave_repay);

	return 0;
}
