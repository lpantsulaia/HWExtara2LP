
`timescale 1ns / 1ps
//you can modify the testbench stimulus timings as you wish.
module Extra2LPTest;

    // Inputs
    reg clk=0;
    reg [31:0] A_in;
    reg [31:0] B_in;
    reg [31:0] C_in;

    // Outputs
    wire [35:0] Q;

    // Instantiate the Unit Under Test (UUT)
    Extra2LPTop uut (
        .clk(clk), 
        .A_in(A_in), 
        .B_in(B_in), 
        .C_in(C_in), 
        .Q(Q)
    );

always #5 clk <= !clk;

    initial begin
            A_in = 0;
            B_in = 0;
            C_in = 0;
        #100;
        
        //Stimulus 1
            A_in = 2;
            B_in = 3;
            C_in = 4;
        # 10;
        
        //Stimulus 2
            A_in = 1;
            B_in = 1;
            C_in = 1;
        # 10;
        
        //Stimulus 3
            A_in = 2;
            B_in = 2;
            C_in = 3;
        # 10;

    end
      
endmodule



