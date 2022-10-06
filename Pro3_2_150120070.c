// ID = 150120070
// Name = Semih
// Surname = Bað
// Purpose = Find the super digit

#include<stdio.h>
#include<math.h>

int n, k, sum;
int number =0;
int digitNumber = 0;

int createNumber(int k, int n);
int superDigit(int x);
int findDigitNumber(int n);
int sumOfDigits(int num);

int main()
{
	printf("Please enter a number (n=) :");
	scanf("%d", &n);
	printf("Please enter repetition factor (k=) :");
	scanf("%d", &k);
	findDigitNumber(n);
	createNumber(n, k);
	printf("%d\n", number);
	superDigit(number);
	return 0;
}

int findDigitNumber(int n)
{
	int newN;
	if (n >= 10){
		newN = n /10;
		digitNumber++;
		return findDigitNumber(newN);
	}	
}


int createNumber(int n, int k)
{
	if (k > 0){
		number += (n) * pow(pow(10,(digitNumber+1)),(k-1));
		k--;
		return createNumber(n, k);
	}
}

int sumOfDigits(int num)
{
	if (num > 0){
		sum += num%10;
		num = num/10;
		return sumOfDigits(num);
	}
}

int superDigit(int x)
{
	sum=0;
	if (x < 10){
		printf("Super digit of number %d is %d", number, x);
	}
	else {
		sumOfDigits(x);
		return superDigit(sum);
	}
	return 0;
}
