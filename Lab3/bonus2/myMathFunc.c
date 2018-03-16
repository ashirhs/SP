

int isEqual(int a, int b)
{
	if(a == b)
	return 1;
	else
	return -1;
}

void swap(int* a, int* b)
{	
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}


