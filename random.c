const char op[] = { 0, '+', '-', '*', '/' };

f(i)
	int i;
{
	int x, y, o, ans, inp;
	if(i > 10) return 0;
	x = rand() % 20 + 1;
	y = rand() % 20 + 1;
	o = rand() % 4 + 1;
	if(o == 1) ans = x + y;
	else if(o == 2) ans = x - y;
	else if(o == 3) ans = x * y;
	else if(o == 4) ans = x / y;
	
	printf("[%i/10] %i %c %i = ", i, x, op[o], y);
	scanf("%i", &inp);
	if(ans == inp) {
		puts("Correct!");
	} else {
		printf("Wrong! Answer is %i.\n", ans);
	}
	return f(i + 1);
}

main()
{
	srand(time(0));
	f(1);
}
