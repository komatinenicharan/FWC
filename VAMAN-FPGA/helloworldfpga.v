module helloworldfpga(input wire x_1, input wire x_0, input wire y_1,input wire y_0, output wire s );

assign s=((x_1&(!(y_1)))|(x_0&(!(y_0))&(!(y_1)))|(x_0&(!(y_0))&x_1));

endmodule
