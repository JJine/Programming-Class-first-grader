//p108c_gugudan
main()
{
	int i, dan;
	char ch, yes;
	
	do 
	{
		system("cls"); //ȭ�� ����� �� 
		printf ("����� ��������? => ");
		ch=getche();
		putchar('\n');
		
		printf ("========%c��===========\n", ch);
		dan=ch-'0';
		for(i=1;i<=9;i++);
			printf ("%d * %d = %2d\n", dan, i, dan*i);
		printf ("-------------\n");
		printf ("�ٽ� �ϰڽ��ϴ�? (Y/N) => ");
		yes=getche();
		putchar('\n');
	} while (yes=='y');
}
