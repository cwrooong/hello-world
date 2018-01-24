#include "stdio.h"
#include "math.h"

float model_cost_func(float k,float b,int m,float x[],float y[])
{
	float h,j;
	for (int i=0;i<=m-1;i++)
	{
		h=b+k*x[i];
		j=j+pow((h-y[i]),2);//pow: ^2
	}
	j=(1/(2*m))*j;
	return h,j;
}

//update paras b,k until convergence
float gradient_des(float k,float b,float a)
{
	float tmp1=0;
	for (int i=0;i<=m-1;i++)
        {
                h=b+k*x[i];
                tmp1=tmp1+(h-y[i]);
		tmp2=tmp2+(h-y[i])*x[i];
        }
        b=b-a*(1/m)*tmp1;
	k=k-a*1/m*tmp2;
	return b,k;
}

int main()
{
	float k=0.5,b=100;//para
	int m=100;        //the number of training set
	float x[100];     //training set's feature
	float y[100];     //training set's real value
	float h;          //model output
	float j;          //the value of cost function
	float a=0.001;    //learning rate

	//h=b+k*x;          //model
	
	
	return 0;	
}

