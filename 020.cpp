#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;
	
}phone[2]; 
int main(void){
	int i=0;
	struct Phone phone[5]={"htc","u12+","2015/4/23",15000,"bob","0908545445",
	                     "apple","i7","2019/6/12",18999,"tim","0901234567",
						 "apple","i8","2017/4/29",10210,"jack","0907654312",
						 "apple","i9","2019/6/12",18999,"bruse","0903987654",
						 "apple","ix","2019/6/12",18999,"johnny","0909999999"};
	for(i=0;i<5;i++){
		printf("%s�����----------\n",phone[i].use_name);
		printf("������~�P:");
		puts(phone[i].phone_brand);
		printf("���������:");
		puts(phone[i].phone_model);
		printf("������X�t���:");
		puts(phone[i].phone_yearofmanufacture);
		printf("���������:");
		printf("%d\n",phone[i].phone_price);
		printf("�ϥΪ�:");
		puts(phone[i].use_name);
		printf("������X:");
		puts(phone[i].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
