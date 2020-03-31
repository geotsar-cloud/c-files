int getInteger(void)
{
    int i;
 
    scanf("%d",&i);
 
    return i;
}

int ascii_to_int(int c) {
	return c-'0' ;
}

int colour_binary_to_grey(int width ,int height,int megisto) {                 /* Συναρτηση μετατροπης εγχρωμης εικονας σε δυαδικη κωδικοποιηση σε γκριζα */
	int i, plhthos_pixel;
	int red, green, blue;
	int grey_tone;
	printf ("P5\n");
	printf ("%d %d\n", width, height);
	printf("%d\n", megisto);
	plhthos_pixel=width*height;
	for (i = 1; i <=plhthos_pixel; i++){                            
		red=getchar();
		green=getchar();
		blue=getchar();
		if (red >megisto || green >megisto || blue >megisto ){      
			printf("Input error !\n");
			return -1;
		}
		grey_tone=(0.299*red)+(0.587*green)+(0.114*blue) ;
		putchar(grey_tone);
	}
	return 0;
		
}

int colour_text_to_grey (int width,int height,int megisto) {                  /* Συναρτηση μετατροπης εγχρωμης εικονα σε μορφη κειμενου σε γκριζα */
	int i, plhthos_pixel, xarakthras, red, green, blue, grey_tone;
	int first_output, second_output, third_output;
	printf("P2\n");
	printf("%d %d\n", width, height );
	printf("%d\n", megisto);
	plhthos_pixel=width*height;
	for (i=1; i<=plhthos_pixel; i++) {
		red=0;
		green=0;
		blue=0;
		xarakthras=getchar();
		if (xarakthras !='\n'&& xarakthras != '\t'&& xarakthras != ' ' ) {
			red= (xarakthras- '0')*100;
		}
		xarakthras=getchar();
			red=red + (xarakthras- '0')*10;
		if (xarakthras !='\n'&& xarakthras != '\t'&& xarakthras != ' ' ) {
		}
		xarakthras=getchar();
		red=red + (xarakthras- '0');
		xarakthras=getchar();
		xarakthras=getchar();
		if (xarakthras !='\n'&& xarakthras != '\t'&& xarakthras != ' ' ) {
			green= (xarakthras- '0')*100;
		}
		xarakthras=getchar();
		if (xarakthras !='\n'&& xarakthras != '\t'&& xarakthras != ' ' ) {
			green=green + (xarakthras- '0')*10;
		}
		xarakthras=getchar();
		green=green + (xarakthras- '0');
		xarakthras=getchar();
		xarakthras=getchar();
		if (xarakthras !='\n'&& xarakthras != '\t'&& xarakthras != ' ' ) {
			blue= (xarakthras- '0')*100;
		}
		xarakthras=getchar();
		if (xarakthras !='\n'&& xarakthras != '\t'&& xarakthras != ' ' ) {
			blue=blue + (xarakthras- '0')*10;
		}
		xarakthras=getchar();
		blue=blue + (xarakthras- '0');
		xarakthras=getchar();
		grey_tone=(0.299*red)+(0.587*green)+(0.114*blue);	
		first_output= grey_tone/100;
		second_output=(grey_tone%100)/10;
		third_output=grey_tone%10;
		if(first_output==0)
			putchar(' ');
		else
			putchar('0'+first_output);
		
		if(second_output==0)
			putchar(' ');
		else
			putchar('0'+second_output);
		putchar('0'+third_output);
	}
	
}


typedef struct tnode {	
	int data ;          
	struct tnode *next ;	
	struct tnode *prev ; 
}node;

int IsEmpty(node *A){ 
	return ((A->next==NULL)&&(A->prev==NULL));
}
void AddAfter(node *Z,node *V){
	node *TempNext,*TempPrev ;
	TempPrev=V;
	TempNext=(V->next);
	(TempNext->prev)=Z;
	(V->next)=Z;
	(Z->prev)=TempPrev;
	(Z->next)=TempNext;
}


node *create(void){ 
		node *temp=(malloc(sizeof(node)));
		if (temp==NULL){
			printf("Problem with allocating space for the node!!\n");
		}else {
		temp->next=NULL;
		temp->prev=NULL;
		return temp;

}
}