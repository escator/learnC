

int main(int argc, char const *argv[])
{
	
	// FOR
	for(int i=0; i<5; i++) {
		printf("%s\n", "Cycle FOR");
	}

	// WHILE
	int i=5;
	while(i>0){
		i--;
		printf("%s\n", "Cycle WHILE");
	}

	
	//DO-WHILE
	i=5;

	do {
		i--;
		printf("%s\n", "Cycle DO-WHILE");
	} while(i>0);

	return 0;
}

