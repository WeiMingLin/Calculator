void getexpressoion(char[] inputbuffer,char[] claculatorbuffer)
{
	gets(inputbuffer);
	for(int i = 0; inputbuffer[i] != '\n'; i++) {
		calculatorbuffer[i] = inputbuffer[i];
		inputbuffer[i] = 0;
		if(inputbuffer[i] == EOF) {
			inputbuffer[0] = EOF;
			break;
		}
	}
}
