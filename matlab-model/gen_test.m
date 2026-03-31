K = 128;
A = zeros(K,1);
B = zeros(K,1);
C = zeros(K,1);

for idx = 0 : K-1
    v_m = (idx / 32) - (pi / 4) + (1 / 64);

    g0 = sin(v_m);
    g1 = cos(v_m);
    g2 = -sin(v_m);
    w_m = 1 / 64;

    % Coefficient tranform to begin
    A_new = g0 - (w_m * g1) + (0.5 * w_m^2 * g2);
    B_new = g1 - (w_m * g2);
    C_new = g2 / 2;

    % RTL Scale
    a_val = A_new;
    b_val = 2 * B_new;
    c_val = 4 * C_new;

    % (s1.23, s3.16, s2.11)
    A_W = 24; A_F = 23;
    B_W = 19; B_F = 16;
    C_W = 13; C_F = 11;

    a_q = round(a_val * (2^A_F));
    b_q = round(b_val * (2^B_F));
    c_q = round(c_val * (2^C_F));

    % U2 Complement
    if (a_q < 0) A(idx+1) = a_q + (2^A_W); else A(idx+1) = a_q; end
    if (b_q < 0) B(idx+1) = b_q + (2^B_W); else B(idx+1) = b_q; end
    if (c_q < 0) C(idx+1) = c_q + (2^C_W); else C(idx+1) = c_q; end
end

% PRINT

printf("// --- Block for coefficient A ---\n");
for idx = 0 : K-1
    printf("7'b%07s : a = 24'h%06x;\n", dec2bin(idx, 7), A(idx+1));
end

printf("\n// --- Block for coefficient B ---\n");
for idx = 0 : K-1
    printf("7'b%07s : b = 19'h%05x;\n", dec2bin(idx, 7), B(idx+1));
end

printf("\n// --- Block for coefficient C ---\n");
for idx = 0 : K-1
    printf("7'b%07s : c = 13'h%04x;\n", dec2bin(idx, 7), C(idx+1));
end
