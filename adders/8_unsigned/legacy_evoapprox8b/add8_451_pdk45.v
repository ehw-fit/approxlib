/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from evoapprox8b dataset
***/

// Library = EvoApprox8b
// Circuit = add8_451
// Area   (180) = 1216
// Delay  (180) = 0.790
// Power  (180) = 342.90
// Area   (45) = 84
// Delay  (45) = 0.340
// Power  (45) = 27.47
// Nodes = 29
// HD = 188032
// MAE = 5.01562
// MSE = 40.25000
// MRE = 2.64 %
// WCE = 16
// WCRE = 600 %
// EP = 93.0 %

module add8_451(A, B, O);
  input [7:0] A;
  input [7:0] B;
  output [8:0] O;
  wire [2031:0] N;

  assign N[0] = A[0];
  assign N[1] = A[0];
  assign N[2] = A[1];
  assign N[3] = A[1];
  assign N[4] = A[2];
  assign N[5] = A[2];
  assign N[6] = A[3];
  assign N[7] = A[3];
  assign N[8] = A[4];
  assign N[9] = A[4];
  assign N[10] = A[5];
  assign N[11] = A[5];
  assign N[12] = A[6];
  assign N[13] = A[6];
  assign N[14] = A[7];
  assign N[15] = A[7];
  assign N[16] = B[0];
  assign N[17] = B[0];
  assign N[18] = B[1];
  assign N[19] = B[1];
  assign N[20] = B[2];
  assign N[21] = B[2];
  assign N[22] = B[3];
  assign N[23] = B[3];
  assign N[24] = B[4];
  assign N[25] = B[4];
  assign N[26] = B[5];
  assign N[27] = B[5];
  assign N[28] = B[6];
  assign N[29] = B[6];
  assign N[30] = B[7];
  assign N[31] = B[7];

  OR2X1 n42(.A(N[28]), .B(N[12]), .Y(N[42]));
  OR2X1 n44(.A(N[28]), .B(N[12]), .Y(N[44]));
  NOR3X1 n48(.A(N[24]), .B(N[8]), .C(N[6]), .Y(N[48]));
  assign N[49] = N[48];
  AND2X1 n68(.A(N[8]), .B(N[24]), .Y(N[68]));
  assign N[69] = N[68];
  HAX1 n72(.A(N[24]), .B(N[8]), .YS(N[72]), .YC(N[73]));
  HAX1 n78(.A(N[10]), .B(N[26]), .YS(N[78]), .YC(N[79]));
  BUFX2 n80(.A(N[79]), .Y(N[80]));
  assign N[81] = N[80];
  HAX1 n86(.A(N[12]), .B(N[28]), .YS(N[86]), .YC(N[87]));
  HAX1 n96(.A(N[14]), .B(N[30]), .YS(N[96]), .YC(N[97]));
  BUFX2 n128(.A(N[44]), .Y(N[128]));
  OR2X1 n134(.A(N[26]), .B(N[10]), .Y(N[134]));
  BUFX2 n142(.A(N[87]), .Y(N[142]));
  BUFX2 n152(.A(N[69]), .Y(N[152]));
  assign N[153] = N[152];
  AND2X1 n162(.A(N[42]), .B(N[81]), .Y(N[162]));
  BUFX2 n164(.A(N[96]), .Y(N[164]));
  assign N[165] = N[164];
  BUFX2 n170(.A(N[128]), .Y(N[170]));
  INVX1 n176(.A(N[49]), .Y(N[176]));
  assign N[177] = N[176];
  OR2X1 n180(.A(N[142]), .B(N[162]), .Y(N[180]));
  BUFX2 n206(.A(N[134]), .Y(N[206]));
  assign N[207] = N[206];
  AND2X1 n226(.A(N[207]), .B(N[153]), .Y(N[226]));
  assign N[227] = N[226];
  OR2X1 n244(.A(N[80]), .B(N[227]), .Y(N[244]));
  assign N[245] = N[244];
  AND2X1 n254(.A(N[170]), .B(N[226]), .Y(N[254]));
  OR2X1 n272(.A(N[180]), .B(N[254]), .Y(N[272]));
  assign N[273] = N[272];
  OR2X1 n344(.A(N[48]), .B(N[72]), .Y(N[344]));
  assign N[345] = N[344];
  BUFX2 n376(.A(N[165]), .Y(N[376]));
  assign N[377] = N[376];
  HAX1 n394(.A(N[78]), .B(N[73]), .YS(N[394]), .YC(N[395]));
  HAX1 n404(.A(N[86]), .B(N[245]), .YS(N[404]), .YC(N[405]));
  HAX1 n412(.A(N[377]), .B(N[273]), .YS(N[412]), .YC(N[413]));
  OR2X1 n422(.A(N[97]), .B(N[413]), .Y(N[422]));

  assign O[0] = N[16];
  assign O[1] = N[345];
  assign O[2] = N[344];
  assign O[3] = N[22];
  assign O[4] = N[177];
  assign O[5] = N[394];
  assign O[6] = N[404];
  assign O[7] = N[412];
  assign O[8] = N[422];

endmodule

