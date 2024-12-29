module mux4to1(
    input logic [3:0] d,
    input logic [1:0] s,
    output logic y
);

always_comb
begin
    case(s)
        2'b00: y = d[0];
        2'b01: y = d[1];
        2'b10: y = d[2];
        2'b11: y = d[3];
        default: y = 1'b0;
    endcase
end

endmodule

module testbench;
    logic [3:0] d;
    logic [1:0] s;
    logic y;

    mux4to1 mux4to1_instance(
        .d(d),
        .s(s),
        .y(y)
    );

    initial
    begin
        d = 4'b1010;
        s = 2'b00;
        #10;
        s = 2'b01;
        #10;
        s = 2'b10;
        #10;
        s = 2'b11;
        #10;
    end

    initial
    begin
        $monitor("d = %b, s = %b, y = %b", d, s, y);
    end

endmodule