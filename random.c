f(i)
	int i;
{
	int x, y, o, ans;
	if(i > 10) return 0;
	x = rand() % 20 + 1;
	y = rand() % 20 + 1;
	o = rand() % 4 + 1;
	if(o == 1) ans = x + y;
	else if(o == 2) ans = x - y;
	else if(o == 3) ans = x * y;
	else if(o == 4) ans = x / y;
}

main()
{
	srand(time(0));
	f(1);
}
