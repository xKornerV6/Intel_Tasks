`include "quadra.vh"

module quadra_top
(
    input  ck_t clk,
    input  rs_t rst_b,
    input  x_t  x,
    input  dv_t x_dv,
    output y_t  y,
    output dv_t y_dv
);

    // Pipeline for Valid
    dv_t dv_p0, dv_p1, dv_p2;

    always_ff @(posedge clk) begin
        if (!rst_b) begin
            dv_p0 <= '0;
            dv_p1 <= '0;
            dv_p2 <= '0;
        end else begin
            dv_p0 <= x_dv;
            dv_p1 <= dv_p0;
            dv_p2 <= dv_p1;
        end
    end

    // Input Divide
    x1_t x1;
    x2_t x2;
    assign x1 = x[23:17]; 
    assign x2 = x[16:0];  

    // Delta x2 register
    x2_t x2_q;
    always_ff @(posedge clk) x2_q <= x2;

    // LUT
    a_t a_lut;
    b_t b_lut;
    c_t c_lut;

    lut i_lut (
        .x1 (x1),
        .a  (a_lut),
        .b  (b_lut),
        .c  (c_lut)
    );

    // COMB
    y_t y_raw;

    quadra i_quadra (
        .clk (clk), 
        .rst (rst_b),
        .x2   (x2),  
        .a    (a_lut), 
        .b    (b_lut),
        .c    (c_lut),
        .y    (y_raw)
    );

    // Output register
    always_ff @(posedge clk) begin
        if (!rst_b) y <= '0;
        else        y <= y_raw;
    end
    
    assign y_dv = dv_p0;

endmodule