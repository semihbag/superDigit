# superDigit

In this experiment, I wrote a program to find super digit of a number X using the following rules:      

• If X has only 1 digit, then its super digit is X.       
• If X has more than 1 digit, then its super digit is equal to the super digit of the digit-sum of X.   

Example:      
superDigit(1245) = superDigit(1+2+4+5)    
= superDigit(12)      
= superDigit(1+2)   
= superDigit(3)   
= 3.    

• The number X will be given to your program with two numbers (n and k) and you will construct the number X as the number n concatenated k times.     

Example:    
Please enter a number (n=) : 123    
Please enter repetition factor (k=) : 3   
Super digit of number 123123123 is 9.   
