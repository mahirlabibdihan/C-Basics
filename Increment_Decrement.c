
int main()
{
	int a=5,b=10;


	printf("%d %d %d\n",a---b,a,b);  //a-- - b
	printf("%d %d %d\n",a+++b,a,b);   //a++ + b

	printf("%d %d %d\n",--a-b--,a,b);   //--a - b--
	printf("%d %d %d\n",++a+b++,a,b);   //++a + b++
	printf("%d %d %d\n",-a---b--,a,b);   //- a-- - b--
	printf("%d %d %d\n",a++-b--,a,b);	//a 
	printf("%d %d %d\n",a++-b++,a,b);
	printf("%d %d %d\n",a+++b++,a,b);
	printf("%d %d %d\n",+a+++b++,a,b);

	printf("%d %d %d\n",(a--)-(--b),a,b);
	printf("%d %d %d\n",(a++)+(++b),a,b);
	printf("%d %d %d\n",--a-(--b),a,b);
	printf("%d %d %d\n",++a+(++b),a,b);

	printf("%d %d %d\n",a-+-+-+-b,a,b);

}