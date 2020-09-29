#include <stdio.h>

int main(){


	int 	hora = 0;
	int 	contador = 0;
	char 	bomdia;
	char 	boatarde;
	char 	boanoite;
	char 	boamadrugada;

	
		printf ("Digite a hora (entre 00 e 23)\n");
		scanf ("%d", &hora);
		
			switch (hora)
	    	{
	    		case 5:
	    		case 6:
	    		case 7:
	    		case 8:
	    		case 9:
	    		case 10:
	    		case 11:
	    			printf("Bom dia %s\n", bomdia);
	        			break;
	        	
	    		case 12:
	    		case 13:
				case 14:
				case 15:
				case 16:
				case 17:
	        		printf("Boa tarde %s\n", boatarde);
	        			break;
	        
	        	case 18:
	        	case 19:
	        	case 20:
	        	case 21:
	        	case 22:
	        	case 23:
	        	case 00:
	        		printf("Boa noite %s\n", boatarde);
	        			break;
	        	
	        	case 1:
	        	case 2:
	        	case 3:
	        	case 4:
	        		printf("Boa madrugada %s\n", boamadrugada);
	        			break;
}
}
