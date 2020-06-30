/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 7.97 %
// MAE = 10 
// WCE% = 19.53 %
// WCE = 25 
// WCRE% = 2500.00 %
// EP% = 96.88 %
// MRE% = 61.40 %
// MSE = 158 
// PDK45_PWR = 0.016 mW
// PDK45_AREA = 39.4 um2
// PDK45_DELAY = 0.37 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t add8s_6X9(const uint64_t A /* 8-bit signed operand */, const uint64_t B /* 8-bit signed operand */)
{
   uint64_t dout_30, dout_31, dout_33, dout_34, dout_35, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_45, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 6)&1)&((B >> 6)&1);
   dout_33=((A >> 4)&1)|((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_30;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_31|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (((A >> 0)&1)&1) << 0;
   O |= (0&1) << 1;
   O |= (((A >> 2)&1)&1) << 2;
   O |= (((B >> 3)&1)&1) << 3;
   O |= (((A >> 3)&1)&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
