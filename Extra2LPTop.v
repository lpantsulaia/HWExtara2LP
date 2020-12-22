`timescale 1ns / 1ps
//this is exactly same code as in extra homework 1.
//This warning is okay to ignore: WARNING:Xst:1336 -  (*) More than 100% of Device resources are used

//keep port description below, intact.
module Extra2LPTop(
     input clk,
    input [31:0] A_in,
    input [31:0] B_in,
    input [31:0] C_in,
    output [35:0] Q
    );
     
/* VERSION 1-Tsotne
=========================================================================
Advanced HDL Synthesis Report

Macro Statistics
# Adders/Subtractors                                   : 2
 32-bit adder carry out                                : 1
 36-bit adder                                          : 1
# Registers                                            : 132
 Flip-Flops                                            : 132
 
 

Timing Summary:
---------------
Speed Grade: -4

   Minimum period: 7.803ns (Maximum Frequency: 128.156MHz) <<< that is 128 milion operations per second
   Minimum input arrival time before clock: 2.059ns
   Maximum output required time after clock: 4.283ns
   Maximum combinational path delay: No path found
*/   
     reg [35:0] result, res1;
     reg [31:0] A, B, C, Cdelay;
	  reg [0:0] count=0;
	  //reg [1:0] delay=0;
     always @(posedge clk)
     begin
         //keep following 3 lines intact, and do the operations on A,B,C
         A<= A_in; 
         B<= B_in;
         C<= C_in;
         
         // while implementing the execution of ecuation, don't open brackets, 
            //meaning, don't do ... A*4 + B*4 
            
         // while keeping the brackets, you can still do:
            //A+B->res1, 
            //res1*4->res2, 
            //res2+C, 
        
        //after doing so, prepare synthesis and simulation data for reports
            //and then do anything to improve, includin opening brackets
        
         //result <= ((A+B)*4)+C;
//			delay<=delay+1;
//			if(delay==2)
//				delay=0;
//			if(delay==1) begin
			Cdelay<=C;
			case(count) 
			0:begin
				res1 <= {4'b0000,A}+{4'b0000,B};
				count<=1;
				result<=res1;
				
			end
			1: begin
				res1<=(res1<<2) + Cdelay;
				count<=0;
			end
			endcase
			
			//end
				

     end
     
     //keep that intact also
     assign Q = result; 
     
endmodule