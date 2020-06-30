/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, L. Sekanina and Z. Vasicek, "Libraries of Approximate Circuits: Design and Application in CNN Accelerators" 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.054 %
// MAE = 18 
// WCE% = 0.19 %
// WCE = 63 
// WCRE% = 100.00 %
// EP% = 92.69 %
// MRE% = 1.57 %
// MSE = 498 
// PDK45_PWR = 0.255 mW
// PDK45_AREA = 467.9 um2
// PDK45_DELAY = 1.52 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t mul8x7u_3MA(const uint64_t A,const uint64_t B)
{
   uint64_t dout_17, dout_21, dout_22, dout_28, dout_29, dout_30, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_67, dout_69, dout_70, dout_71, dout_72, dout_81, dout_87, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_125, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_165, dout_166, dout_168, dout_170, dout_171, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289;
   uint64_t O;

   dout_17=((A >> 4)&1)&((B >> 1)&1);
   dout_21=((A >> 6)&1)&((B >> 0)&1);
   dout_22=((A >> 7)&1)&((B >> 0)&1);
   dout_28=((A >> 5)&1)&((B >> 1)&1);
   dout_29=((A >> 6)&1)&((B >> 1)&1);
   dout_30=((A >> 7)&1)&((B >> 1)&1);
   dout_53=dout_21^dout_28;
   dout_54=dout_21&dout_28;
   dout_55=dout_53&dout_17;
   dout_56=dout_53^dout_17;
   dout_57=dout_54|dout_55;
   dout_58=dout_22^dout_29;
   dout_59=dout_22&dout_29;
   dout_60=dout_58&dout_57;
   dout_61=dout_58^dout_57;
   dout_62=dout_59|dout_60;
   dout_63=dout_62&((A >> 7)&1);
   dout_64=dout_62^dout_30;
   dout_67=((A >> 3)&1)&((B >> 2)&1);
   dout_69=((A >> 4)&1)&((B >> 2)&1);
   dout_70=((A >> 5)&1)&((B >> 2)&1);
   dout_71=((A >> 6)&1)&((B >> 2)&1);
   dout_72=((A >> 7)&1)&((B >> 2)&1);
   dout_81=((B >> 0)&1)&((A >> 5)&1);
   dout_87=dout_67&dout_81;
   dout_90=dout_56^dout_69;
   dout_91=dout_56&dout_69;
   dout_92=dout_90&dout_87;
   dout_93=dout_90^dout_87;
   dout_94=dout_91|dout_92;
   dout_95=dout_61^dout_70;
   dout_96=dout_61&dout_70;
   dout_97=dout_95&dout_94;
   dout_98=dout_95^dout_94;
   dout_99=dout_96|dout_97;
   dout_100=dout_64^dout_71;
   dout_101=dout_64&dout_71;
   dout_102=dout_100&dout_99;
   dout_103=dout_100^dout_99;
   dout_104=dout_101|dout_102;
   dout_105=dout_63^dout_72;
   dout_106=dout_63&((B >> 2)&1);
   dout_107=((A >> 7)&1)&dout_104;
   dout_108=dout_105^dout_104;
   dout_109=dout_106|dout_107;
   dout_112=((A >> 2)&1)&((B >> 3)&1);
   dout_113=((A >> 3)&1)&((B >> 3)&1);
   dout_114=((A >> 4)&1)&((B >> 3)&1);
   dout_115=((A >> 5)&1)&((B >> 3)&1);
   dout_116=((A >> 6)&1)&((B >> 3)&1);
   dout_117=((A >> 7)&1)&((B >> 3)&1);
   dout_125=((B >> 5)&1)^dout_112;
   dout_128=dout_125^((B >> 5)&1);
   dout_129=dout_81|dout_67;
   dout_130=dout_93^dout_113;
   dout_131=dout_93&dout_113;
   dout_132=dout_130&dout_129;
   dout_133=dout_130^dout_129;
   dout_134=dout_131|dout_132;
   dout_135=dout_98^dout_114;
   dout_136=dout_98&dout_114;
   dout_137=dout_135&dout_134;
   dout_138=dout_135^dout_134;
   dout_139=dout_136|dout_137;
   dout_140=dout_103^dout_115;
   dout_141=dout_103&dout_115;
   dout_142=dout_140&dout_139;
   dout_143=dout_140^dout_139;
   dout_144=dout_141|dout_142;
   dout_145=dout_108^dout_116;
   dout_146=dout_108&dout_116;
   dout_147=dout_145&dout_144;
   dout_148=dout_145^dout_144;
   dout_149=dout_146|dout_147;
   dout_150=dout_109^dout_117;
   dout_151=dout_109&((B >> 3)&1);
   dout_152=dout_117&dout_149;
   dout_153=dout_150^dout_149;
   dout_154=dout_151|dout_152;
   dout_156=((A >> 1)&1)&((B >> 4)&1);
   dout_157=((A >> 2)&1)&((B >> 4)&1);
   dout_158=((A >> 3)&1)&((B >> 4)&1);
   dout_159=((A >> 4)&1)&((B >> 4)&1);
   dout_160=((A >> 5)&1)&((B >> 4)&1);
   dout_161=((A >> 6)&1)&((B >> 4)&1);
   dout_162=((A >> 7)&1)&((B >> 4)&1);
   dout_165=dout_128^dout_156;
   dout_166=dout_156&dout_128;
   dout_168=dout_165|dout_166;
   dout_170=dout_133^dout_157;
   dout_171=dout_133&dout_157;
   dout_173=dout_170^dout_166;
   dout_174=dout_171|dout_166;
   dout_175=dout_138^dout_158;
   dout_176=dout_138&dout_158;
   dout_177=dout_175&dout_174;
   dout_178=dout_175^dout_174;
   dout_179=dout_176|dout_177;
   dout_180=dout_143^dout_159;
   dout_181=dout_143&dout_159;
   dout_182=dout_180&dout_179;
   dout_183=dout_180^dout_179;
   dout_184=dout_181|dout_182;
   dout_185=dout_148^dout_160;
   dout_186=dout_148&dout_160;
   dout_187=dout_185&dout_184;
   dout_188=dout_185^dout_184;
   dout_189=dout_186|dout_187;
   dout_190=dout_153^dout_161;
   dout_191=dout_153&dout_161;
   dout_192=dout_190&dout_189;
   dout_193=dout_190^dout_189;
   dout_194=dout_191|dout_192;
   dout_195=dout_154^dout_162;
   dout_196=dout_154&dout_162;
   dout_197=dout_195&dout_194;
   dout_198=dout_195^dout_194;
   dout_199=dout_196|dout_197;
   dout_200=((A >> 0)&1)&((B >> 5)&1);
   dout_201=((A >> 1)&1)&((B >> 5)&1);
   dout_202=((A >> 2)&1)&((B >> 5)&1);
   dout_203=((A >> 3)&1)&((B >> 5)&1);
   dout_204=((A >> 4)&1)&((B >> 5)&1);
   dout_205=((A >> 5)&1)&((B >> 5)&1);
   dout_206=((A >> 6)&1)&((B >> 5)&1);
   dout_207=((A >> 7)&1)&((B >> 5)&1);
   dout_208=dout_168&dout_200;
   dout_209=dout_168^dout_200;
   dout_210=dout_173^dout_201;
   dout_211=dout_173&dout_201;
   dout_212=dout_210&dout_208;
   dout_213=dout_210^dout_208;
   dout_214=dout_211|dout_212;
   dout_215=dout_178^dout_202;
   dout_216=dout_178&dout_202;
   dout_217=dout_215&dout_214;
   dout_218=dout_215^dout_214;
   dout_219=dout_216|dout_217;
   dout_220=dout_183^dout_203;
   dout_221=dout_183&dout_203;
   dout_222=dout_220&dout_219;
   dout_223=dout_220^dout_219;
   dout_224=dout_221|dout_222;
   dout_225=dout_188^dout_204;
   dout_226=dout_188&dout_204;
   dout_227=dout_225&dout_224;
   dout_228=dout_225^dout_224;
   dout_229=dout_226|dout_227;
   dout_230=dout_193^dout_205;
   dout_231=dout_193&dout_205;
   dout_232=dout_230&dout_229;
   dout_233=dout_230^dout_229;
   dout_234=dout_231|dout_232;
   dout_235=dout_198^dout_206;
   dout_236=dout_198&dout_206;
   dout_237=dout_235&dout_234;
   dout_238=dout_235^dout_234;
   dout_239=dout_236|dout_237;
   dout_240=dout_199^dout_207;
   dout_241=dout_199&((B >> 5)&1);
   dout_242=((A >> 7)&1)&dout_239;
   dout_243=dout_240^dout_239;
   dout_244=dout_241|dout_242;
   dout_245=((A >> 0)&1)&((B >> 6)&1);
   dout_246=((A >> 1)&1)&((B >> 6)&1);
   dout_247=((A >> 2)&1)&((B >> 6)&1);
   dout_248=((A >> 3)&1)&((B >> 6)&1);
   dout_249=((A >> 4)&1)&((B >> 6)&1);
   dout_250=((A >> 5)&1)&((B >> 6)&1);
   dout_251=((A >> 6)&1)&((B >> 6)&1);
   dout_252=((A >> 7)&1)&((B >> 6)&1);
   dout_253=dout_213&dout_245;
   dout_254=dout_213^dout_245;
   dout_255=dout_218^dout_246;
   dout_256=dout_218&dout_246;
   dout_257=dout_255&dout_253;
   dout_258=dout_255^dout_253;
   dout_259=dout_256|dout_257;
   dout_260=dout_223^dout_247;
   dout_261=dout_223&dout_247;
   dout_262=dout_260&dout_259;
   dout_263=dout_260^dout_259;
   dout_264=dout_261|dout_262;
   dout_265=dout_228^dout_248;
   dout_266=dout_228&dout_248;
   dout_267=dout_265&dout_264;
   dout_268=dout_265^dout_264;
   dout_269=dout_266|dout_267;
   dout_270=dout_233^dout_249;
   dout_271=dout_233&dout_249;
   dout_272=dout_270&dout_269;
   dout_273=dout_270^dout_269;
   dout_274=dout_271|dout_272;
   dout_275=dout_238^dout_250;
   dout_276=dout_238&dout_250;
   dout_277=dout_275&dout_274;
   dout_278=dout_275^dout_274;
   dout_279=dout_276|dout_277;
   dout_280=dout_243^dout_251;
   dout_281=dout_243&dout_251;
   dout_282=dout_280&dout_279;
   dout_283=dout_280^dout_279;
   dout_284=dout_281|dout_282;
   dout_285=dout_244^dout_252;
   dout_286=dout_244&((B >> 6)&1);
   dout_287=dout_252&dout_284;
   dout_288=dout_285^dout_284;
   dout_289=dout_286|dout_287;

   O = 0;
   O |= (dout_128&1) << 0;
   O |= (dout_200&1) << 1;
   O |= (dout_151&1) << 2;
   O |= (dout_208&1) << 3;
   O |= (dout_168&1) << 4;
   O |= (dout_209&1) << 5;
   O |= (dout_254&1) << 6;
   O |= (dout_258&1) << 7;
   O |= (dout_263&1) << 8;
   O |= (dout_268&1) << 9;
   O |= (dout_273&1) << 10;
   O |= (dout_278&1) << 11;
   O |= (dout_283&1) << 12;
   O |= (dout_288&1) << 13;
   O |= (dout_289&1) << 14;
   return O;
}
