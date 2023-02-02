
#include <iostream>

int add(int  t_a, int t_b);
int squared(int t_a);
float squareRoot(int t_a);
float hypethineuse(int t_opposite, int t_ajacent);


int main()
{

	int x = add(2, 2);
	x = squared(5);
	x = add(squared(3), squared(4));
	x = squareRoot(x);
	x = hypethineuse(5, 5);

	x = 9;
	return 1;
}



int add(int t_a, int t_b)
{
	int ans = t_a + t_b;
	return ans;
}

int squared(int t_a)
{
	int ans = t_a * t_a;
	return ans;
}

float squareRoot(int t_a)
{
	float ans = std::sqrtf(t_a);
	return ans;
}

float hypethineuse(int t_opposite, int t_ajacent)
{
	float ans = 0.0f;
	ans = squareRoot(add(squared(t_opposite), squared(t_ajacent)));
	return ans;
}

/*
home work
write a new program with methods

convert radians to degree and visa versa 2 metods

get difference to 180 degrees of angle given in rad input in rad output in deg

reflex(pi/3) = 120 deg;
*/