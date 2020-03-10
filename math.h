#ifndef MATH_H
#define MATH_H
//power start
int pow(int num){
	int pw=2;
    int sum=1;
	for (int i =0;i<pw;i++){
		sum*=num;
	}
	return sum;
}

int pow(int num,int pw){
    int sum=1;
	for (int i =0;i<pw;i++){
		sum*=num;
	}
	return sum;
}

double pow(double num,int pw){
    double sum=1;
	for (int i =0;i<pw;i++){
		sum*=num;
	}
	return sum;
}
//power end
double sqrt(double number){

double temp, sqrt;

sqrt = number / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }
	return sqrt;
}

double abs(long double number){
	return (number>=0)?number:-1*number;
}

long long fact(long num){
    long sum=1;
	for (int i =1;i<=num;i++){
		sum*=i;
	}
	return sum;
}

int sell(double number){
int x = number;
	if(number==x)return x;
    return(x>0)?x+1:x;
}

int flor(double number){
int x = number;
if(number==x)return x;
    return(x>=0)?x:x-1;
}

bool andGate(bool a,bool b){
	return (a&&b);

}

bool orGate(bool a,bool b){
	return (a||b);

}

bool notGate(bool a){
	return (a)?false:true;

}

bool xorGate(bool a,bool b){
	return (a==b)?false:true;

}

void swap (double &a,double &b){
	double temp=a;
	a=b;
	b=temp;
}


#endif
