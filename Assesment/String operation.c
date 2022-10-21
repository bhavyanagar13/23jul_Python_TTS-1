
#include<string.h>
#include<stdlib.h>

main()
{
	char str1[200],str2[200],c;
	int ch,i=0,m,j,count=0,rem,rev,b,num,dup,sum,l,len,spaces=0;
            do{
        printf("Main Menu \n");
        printf("1.reverse a string \n");
        printf("2.Concatenation \n");
        printf("3.Palindrome \n");
        printf("4.Copy a string \n");
        printf("5.Length of the string \n");
        printf("6.Frequency of character in string \n");
        printf("7.Find number of vowels and consonants \n");
        printf("8.Find number of blank spaces and digits \n");
        printf("9.Exit \n\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
	
        switch (ch)
        {
            case 1:
                printf("Enter String:\n");
                scanf("%s",str1);
                strrev(str1);
                printf("Reverse string : %s\n\n",str1);
            break;
            case 2:
                printf("Enter First String:\n");
                scanf("%s",str1);
                printf("Enter Second string:\n");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("String After Concatenation : %s\n\n",str1);
            break;

            case 3:
                 printf("enter a number:\n");
                 scanf("%d",&num);
                 rev=0;rem=0;
                 dup=num;
                 while(num>0)
                 {
                 rem=num%10;
                 rev=(rev*10)+rem;
                 num=num/10;
                 }
                if(rev==dup)
                printf("number is palindrome\n");
                else
                printf("number is not palindrome\n");
                break;

            case 4:
                printf("Enter a String1:\n");
                scanf("%s",str1);
                printf("Enter a String2:\n");
                scanf("%s",str2);
                printf("\nString Before Copied:\nString1=\"%s\",String2=\"%s\"\n",str1,str2);
                strcpy(str2,str1);
                printf("-----------------------------------------------\n");
                printf("\"We are copying string String1 to String2\" \n");
                printf("-----------------------------------------------\n");
                printf("String After Copied:\nString1=\"%s\", String2=\"%s\"\n\n",str1,str2);
            break;

            case 5:
                printf("Enter String:\n");
                scanf("%s",str1);
                i=strlen(str1);
                printf("Length of String : %d\n\n",i);
            break;
            
//            case 6:
//            	printf("Enter the string:\n");
//            	gets(str1);

			  case 7:
                printf("Enter an alphabet:\n");
                scanf("%c", &c);
                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                {
                	printf("Character is vowel");
				}
				else
				{
					printf("Character is constant");
				}
				
			  case 8:
			  	printf("Enter the String\n"); 
//            	gets(str1);
				scanf("%s",&str1); 
	            len=strlen(str1); 
	            for(i=0;i<len;i++){ 
	        	if(str1[i]==' ') 
			    spaces++; 
        	    } 
	            printf("Total spaces are : %d\n",spaces); 
            default:
            	printf("\nEnter valid choice.........\n");
            }
            
    }while(ch!=9);
    return 0;
}

