// quadra.vh

`ifndef QUADRA_VH
`define QUADRA_VH

typedef logic ck_t; // clock
typedef logic rs_t; // reset
typedef logic dv_t; // data valid

// --------------------------------------------------------------------------------
// I/O precision
// --------------------------------------------------------------------------------

// x in [0,2) -> u1.23
localparam int  X_I =  1;          //         =  1
localparam int  X_F = 23;          //         = 23
localparam int  X_W = X_I + X_F;   //  1 + 23 = 24 (u1.23)

typedef logic [X_W-1:0] x_t;

// y [-2,2) -> s2.23
localparam int  Y_I =  2;          //         =  2
localparam int  Y_F = 23;          //         = 23
localparam int  Y_W = Y_I + Y_F;   //  2 + 23 = 25 (s2.23)

typedef logic signed [Y_W-1:0] y_t;

// --------------------------------------------------------------------------------
// Internal precision:
// --------------------------------------------------------------------------------

// x1: x[23:17] (LUT index)
localparam int X1_I = 1;
localparam int X1_F = 6;
localparam int X1_W = X1_I + X1_F;

typedef logic [X1_W-1:0] x1_t;

// x2: x[16:0] (Delta)
localparam int X2_I = 0;
localparam int X2_F = 17;
localparam int X2_W = X2_I + X2_F;

typedef logic [X2_W-1:0] x2_t;

// Coefficient a 
localparam int A_I = 2;
localparam int A_F = 22;
localparam int A_W = A_I + A_F;

typedef logic signed [A_W-1:0] a_t;

// Coefficient b 
localparam int B_I = 3;
localparam int B_F = 16;
localparam int B_W = B_I + B_F;

typedef logic signed [B_W-1:0] b_t;

// Coefficient c 
localparam int C_I = 2;
localparam int C_F = 11;
localparam int C_W = C_I + C_F;

typedef logic signed [C_W-1:0] c_t;

`endif
