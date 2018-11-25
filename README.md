# HammingCode
output:
Enter the message size :5                                                                                                        
--------------------------------------                                                                                           
Enter message bits :                                                                                                             
1                                                                                                                                
0                                                                                                                                
1                                                                                                                                
1                                                                                                                                
1   
..................hamming code check generation.......................                                                           
xx1x011x1   
.........................................                                                                                        
x1011                                                                                                                            
since no. of 1's is odd pos[1] will assigned as : 1                                                                              
.........................................                                                                                        
x111                                                                                                                             
since no. of 1's is odd pos[2] will assigned as : 1                                                                              
.........................................                                                                                        
x011                                                                                                                             
since no. of 1's is even pos[4] will assigned as : 0                                                                             
.........................................                                                                                        
x1                                                                                                                               
since no. of 1's is odd pos[8] will assigned as : 1                                                                              
..................after hamming code check.......................                                                                
                111001111                                                                                                        
Do you want to introduce an error (1-0):1                                                                                        
                                                                                                                                 
Enter the position of an error :0                                                                                                
                                                                                                                                 
..................error detection check.......................                                                                   
                                                                                      
11011                                                                                                                            
no error detected at pos[1]                                                                                                      
.........................................                                                                                        
1111                                                                                                                             
no error detected at pos[2]                                                                                                      
.........................................                                                                                        
0011                                                                                                                             
no error detected at pos[4]                                                                                                      
.........................................                                                                                        
11                                                                                                                               
no error detected at pos[8]                                                                                                      
..................receivers message.......................                                                                       
                        [111001111]                                                                                              
..................receivers message error check.......................                                                           
                        111001111                                                                                                
NO ERROR IN THE MESSAGE                                                                                                          
                                                                                                                                 
                                                                                                                                 
-----------------------------end----------------------------------  
