module quadra
(
    input  ck_t clk, 
    input  rs_t rst, 
    input  x2_t x2,  
    input  a_t  a,   
    input  b_t  b,   
    input  c_t  c,   
    output y_t  y    
);
    // x2 = u0.17 => x2_sq = u0.34
    wire [33:0] x2_sq = x2 * x2; 
    
    // s3.16 * u0.17 = s3.33
    wire signed [35:0] b_x2 = $signed(b) * $signed({1'b0, x2});
    
    // s2.11 * u0.34 = s2.45
    wire signed [46:0] c_x2sq = $signed(c) * $signed({1'b0, x2_sq});
    
    logic signed [24:0] term_a;
    logic signed [24:0] term_b;
    logic signed [24:0] term_c;

    assign term_a = 25'($signed(a));
    assign term_b = 25' (b_x2 >>> 16 ); 
    assign term_c = 25' (c_x2sq >>> 34 );
    
    assign y = term_a + term_b + term_c;
    
endmodule