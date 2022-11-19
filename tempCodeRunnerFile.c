 #include<stdio.h> 
int main(){    
     struct company{         
        char name[20];        
         char address[50];         
         char phoneno[11];         
         char dob[11]; 
    };     struct cmp{       
          char cmpname[20];       
            char cmpaddress[50];       
             char cmpphoneno[11]; 
    }p;    
     printf("Enter the Company name : ");     
     gets(p.cmpname); 
    printf("Enter the Address of the Company : ");   
      gets(p.cmpaddress);  
         printf("Enter the Contact number of the company : ");  
            gets(p.cmpphoneno);    
             int n;   
               printf("Enter the total number of employee's :");   
                 scanf("%d",&n);     
                 struct company b[n];    
                  int i;    
                   for(i=0;i<n;i++){ 
        fflush(stdin);       
          printf("\nEnter the name of the no. %d Employee : ",i+1);    
               gets(b[i].name);        
                printf("\nEnter the Address of the Employee : ");    
                     gets(b[i].address);       
                       printf("\nEnter the Phone number of the Employee : ");      
                          gets(b[i].phoneno);      
                          printf("\nEnter the dob of the Employee : ");     
                              gets(b[i].dob); 
    } printf("\n Name of the Company :%s \n Address of the company :%s \n Contact number :%s \n Total number of employees in company :%d",p.cmpname,p.cmpaddress,p.cmpphoneno,n); 
     for(i=0;i<n;i++){      
           printf("\n");     
               printf("\n The data of Employee no. %d are following : ",i+1);        
                printf(" \n Name of the Employee is :%s \n Address :%s \n Phone number :%s \n D.o.b is %s",b[i].name,b[i].address,b[i].phoneno,b[i].dob);} 
                return 0; } 
