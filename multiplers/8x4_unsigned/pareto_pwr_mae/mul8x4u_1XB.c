/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 1.10 %
// MAE = 45 
// WCE% = 4.00 %
// WCE = 164 
// WCRE% = 150.00 %
// EP% = 92.21 %
// MRE% = 15.94 %
// MSE = 3227 
// PDK45_PWR = 0.047 mW
// PDK45_AREA = 122.0 um2
// PDK45_DELAY = 0.60 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t mul8x4u_1XB(const uint64_t A /* 8-bit unsigned operand */, const uint64_t B /* 4-bit unsigned operand */)
{
   uint64_t dout_19, dout_25, dout_26, dout_40, dout_54, dout_55, dout_56, dout_61, dout_66, dout_67, dout_68, dout_69, dout_75, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_104, dout_105, dout_106, dout_110, dout_111, dout_112, dout_113, dout_114, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151;
   uint64_t O;

   dout_19=((A >> 7)&1)&((B >> 0)&1);
   dout_25=((A >> 5)&1)&((B >> 0)&1);
   dout_26=((A >> 6)&1)&((B >> 1)&1);
   dout_40=((B >> 1)&1)&((A >> 7)&1);
   dout_54=dout_26|dout_19;
   dout_55=dout_19&((A >> 6)&1);
   dout_56=dout_55&((B >> 1)&1);
   dout_61=dout_56^dout_40;
   dout_66=((A >> 4)&1)&((B >> 2)&1);
   dout_67=((A >> 5)&1)&((B >> 2)&1);
   dout_68=((A >> 6)&1)&((B >> 2)&1);
   dout_69=((A >> 7)&1)&((B >> 2)&1);
   dout_75=((B >> 2)&1)&dout_56;
   dout_92=dout_54^dout_67;
   dout_93=dout_54&dout_67;
   dout_94=dout_92&dout_66;
   dout_95=dout_92^dout_66;
   dout_96=dout_93|dout_94;
   dout_97=dout_61^dout_68;
   dout_98=dout_61&dout_68;
   dout_99=dout_97&dout_96;
   dout_100=dout_97^dout_96;
   dout_101=dout_98|dout_99;
   dout_102=dout_56^dout_69;
   dout_104=((A >> 7)&1)&dout_101;
   dout_105=dout_102^dout_101;
   dout_106=dout_75|dout_104;
   dout_110=((A >> 3)&1)&((B >> 3)&1);
   dout_111=((A >> 4)&1)&((B >> 3)&1);
   dout_112=((A >> 5)&1)&((B >> 3)&1);
   dout_113=((A >> 6)&1)&((B >> 3)&1);
   dout_114=((A >> 7)&1)&((B >> 3)&1);
   dout_132=dout_95^dout_111;
   dout_133=dout_95&dout_111;
   dout_134=dout_132&dout_110;
   dout_135=dout_132^dout_110;
   dout_136=dout_133|dout_134;
   dout_137=dout_100^dout_112;
   dout_138=dout_100&dout_112;
   dout_139=dout_137&dout_136;
   dout_140=dout_137^dout_136;
   dout_141=dout_138|dout_139;
   dout_142=dout_105^dout_113;
   dout_143=dout_105&dout_113;
   dout_144=dout_142&dout_141;
   dout_145=dout_142^dout_141;
   dout_146=dout_143|dout_144;
   dout_147=dout_106^dout_114;
   dout_148=dout_106&((B >> 3)&1);
   dout_149=((A >> 7)&1)&dout_146;
   dout_150=dout_147^dout_146;
   dout_151=dout_148|dout_149;

   O = 0;
   O |= (dout_26&1) << 0;
   O |= (0&1) << 1;
   O |= (0&1) << 2;
   O |= (dout_112&1) << 3;
   O |= (dout_25&1) << 4;
   O |= (dout_26&1) << 5;
   O |= (dout_25&1) << 6;
   O |= (dout_135&1) << 7;
   O |= (dout_140&1) << 8;
   O |= (dout_145&1) << 9;
   O |= (dout_150&1) << 10;
   O |= (dout_151&1) << 11;
   return O;
}
