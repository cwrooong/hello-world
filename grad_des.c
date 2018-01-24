#include "stdio.h"
#include "math.h"

//predict one by one
float predict_model(float k,float b,float x)
{
	float h;
	h=b+k*x;
	return h;
}

float cost_func(float k,float b,int m,float x[],float y[])
{
	float h,j;
	for (int i=0;i<=m-1;i++)
	{
		h=b+k*x[i];
		j=j+pow((h-y[i]),2);//pow: ^2
	}
	j=(1/(2*m))*j;
	return j;
}

//update paras b,k
float gradient_des(float k,float b,float a,float x[],float y[])
{
	float h;
	float tmp1=0;
	float tmp2=0;

	float arr[2];
	
	for (int i=0;i<=m-1;i++)
        {
                h=b+k*x[i];
                tmp1=tmp1+(h-y[i]);
		tmp2=tmp2+(h-y[i])*x[i];
        }
        arr[0]=b=b-a*(1/m)*tmp1;
	arr[1]=k=k-a*1/m*tmp2;

	return arr;
}

int main()
{
	float k=0.5,b=100;  //init para
	int m=10;           //the number of training set
	float x[10];        //training set's feature
	float y[10];        //training set's real value
	float h;            //model output
	float j;
	float j_new,j_old;  //the value of cost function
	float a=0.001;      //learning rate

	float arr[2];
	int i;              //counter
	float test_data;    //a test point
	float output;       //model output

	j=j_new=cost_func(k,b,m,x,y);

	//repeat update b,k until convergence	
	while (true) 
	{
		//update b,k
		arr=gradient_des(k,b,a);
		b=arr[0];
		k=arr[1];
		j_new=cost_func(k,b,m,x,y);
		if (j_old>j_new)//convergence condition
		{
			j_old=j_new;
		}
		else
		{break;}
		i++;
	}
	
	//predict test_data
	output=predict_model(k,b,test_data);
	
	printf('counter = %d',i);
	printf('para k=%f,b=%f',k,b);
	printf('cost function: %f',j_old);
	printf('output = %f',output);
	
	return 0;	
}

