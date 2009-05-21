
#define POLYNOMIAL (0x488781ED) /* This is the CRC Poly */
#define TOPBIT (1 << (WIDTH - 1)) /* MSB */
#define WIDTH 32

static int GetFileHash(const char* filename)
{
   HANDLE hFile = CreateFileA(filename, GENERIC_READ, FILE_SHARE_READ|FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
   if(hFile == INVALID_HANDLE_VALUE)
   {
	   cout<<"CreateFile Error:"<<GetLastError()<<endl;
	   return 0;
   }

	int remainder = 0;
	char data[1024];
	DWORD dwRead;
	do
	{
		// Read file chunk
		dwRead = 0;
		ReadFile(hFile, data, 1024, &dwRead, NULL);

		/* loop through each byte of data */
		for (int byte = 0; byte < (int) dwRead; ++byte) {
			/* store the next byte into the remainder */
			remainder ^= (data[byte] << (WIDTH - 8));
			/* calculate for all 8 bits in the byte */
			for (int bit = 8; bit > 0; --bit) {
				/* check if MSB of remainder is a one */
				if (remainder & TOPBIT)
					remainder = (remainder << 1) ^ POLYNOMIAL;
				else
					remainder = (remainder << 1);
			}
		}
		cout<<remainder<<' ';
	} while(dwRead == 1024);

	CloseHandle(hFile);

	return remainder;
}

#ifdef Demo

bool isprime (unsigned int number)
{
  /* no even number will be passed */
	if(number<2) return false;

	unsigned int div = 2;

	while (div * div < number && number % div != 0)
	div++;

	return number % div != 0;
}

char * RemoveAt(	const char str[], UINT index)
{
	UINT length=strlen(str);
	char *p=new char[length-1];
	for(UINT i=0, k=0; i<length; i++, k++)
	{
		if(i==index) i++;
		p[k]=str[i];
	}
	return p;
}

const char* MinStr(const char* str1, const char* str2, const char* str3)
{
	if(strcmp(str1,str2)<0)
	{
		if(strcmp(str1,str3)<0)
			return str1;
		else
			return str3;
	}
	else
	{
		if(strcmp(str2,str3)<0)
			return str2;
		else
			return str3;
	}
}

int _strlen(const char * p)
{
	return (*p? _strlen(p+1)+1 : 0);
}
#endif