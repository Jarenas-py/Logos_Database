CPET7-L Hands-On Activity No.2

Class Participation Code:
module samplegate (a, b, c, d, x);
input a, b, c, d;
output x;
assign x= (~c & ~d) | (~a & c & d) | (~b & c & d) | (a & b & ~d);
endmodule

module test_bench;
reg a, b, c, d;
wire x;
initial
begin
$display ("t  a  b  c  d |  x");
	a= 0; b= 0; c= 0; d= 0;
	#16 $finish;
end 

always #8 a= ~a;
always #4 b= ~b;
always #2 c= ~c;
always #1 d= ~d;

samplegate U1(a, b, c, d, x);

initial
$monitor ("%g  %b  %b  %b  %b  %b", $time, a, b, c, d, x);
endmodule

Task Assessment Part 1:
a. module samplegate (a, b, x);
input a, b;
output x;
assign x= a | b;
endmodule

module test_bench;
reg a, b;
wire x;
initial
begin
$display ("t a b | c");
	a= 0; b= 0;
	#4 $finish;
	
end

always #2 a= ~a;
always #1 b= ~b;

samplegate U1(a, b, c);

initial
$monitor ("%g %b %b   %b", $time, a, b, c);
endmodule

b. module samplegate (a, b, x);
input a, b;
output x;
assign x= ~(a & b);
endmodule

module test_bench;
reg a, b;
wire x;
initial
begin
$display ("t a b | c");
	a= 0; b= 0;
	#4 $finish;
	
end

always #2 a= ~a;
always #1 b= ~b;

samplegate U1(a, b, c);

initial
$monitor ("%g %b %b   %b", $time, a, b, c);
endmodule

c. module samplegate (a, b, c, x);
input a, b, c;
output x;
assign x= ~(a | b | c);
endmodule

module test_bench;
reg a, b, c;
wire x;
initial
begin

$display ("t a b c | x");
	a= 0; b= 0; c= 0;
	#8 $finish;
end

always #4 a= ~a;
always #2 b= ~b;
always #1 c= ~c;

samplegate U1 (a, b, c, x);

initial 
$monitor ("%g %b %b %b   %b", $time, a, b, c, x);
endmodule

d. module samplegate (a, b, c, x);
input a, b, c;
output x;
assign x= (~a & ~b & c) | (~a & b & ~c) | (a & ~b & ~c);
endmodule

module test_bench;
reg a, b, c;
wire x;
initial
begin

$display ("t a b c | x");
	a= 0; b= 0; c= 0;
	#8 $finish;
end

always #4 a= ~a;
always #2 b= ~b;
always #1 c= ~c;

samplegate U1 (a, b, c, x);

initial 
$monitor ("%g %b %b %b   %b", $time, a, b, c, x);
endmodule

e. module samplegate (a, b, c, x);
input a, b, c;
output x;
assign x= (~a & ~b & ~c) | (b & c) | (a & c) | (a & b);
endmodule

module test_bench;
reg a, b, c;
wire x;
initial
begin

$display ("t a b c | x");
	a= 0; b= 0; c= 0;
	#8 $finish;
end

always #4 a= ~a;
always #2 b= ~b;
always #1 c= ~c;

samplegate U1 (a, b, c, x);

initial 
$monitor ("%g %b %b %b   %b", $time, a, b, c, x);
endmodule

Task Assesment Part 2:
module samplegate (CarryIn, a, b, Sum, CarryOut);
input CarryIn, a, b;
output Sum, CarryOut;
assign Sum= a ^ b;
assign CarryOut= (a & b) | (a ^ b);
endmodule

module test_bench;
reg CarryIn, a, b;
wire Sum, CarryOut;
initial
begin
$display ("CarryIn a b | Sum CarryOut");
	CarryIn= 0; a= 0; b= 0;
	#8 $finish;
	
end

always #4 CarryIn= ~CarryIn;
always #2 a= ~a;
always #1 b= ~b;

samplegate U1 (CarryIn, a, b, Sum, CarryOut);

initial
$monitor ("%b       %b %b   %b   %b", CarryIn, a, b, Sum, CarryOut);
endmodule	