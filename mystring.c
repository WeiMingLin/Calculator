void getexpressoion(char[] inputbuffer,char[] claculatorbuffer)
{
	gets(inputbuffer);
	for(int i = 0; inputbuffer[i] != '\n' && inputbuffer[i] != EOF; i++) {
		calculatorbuffer[i] = inputbuffer[i];
		inputbuffer[i] = 0;
	}
}
