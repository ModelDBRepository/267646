#include <stdio.h>
#include "hocdec.h"
#define IMPORT extern __declspec(dllimport)
IMPORT int nrnmpi_myid, nrn_nobanner_;

modl_reg(){
	//nrn_mswindll_stdio(stdin, stdout, stderr);
    if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
	fprintf(stderr, "Additional mechanisms from files\n");

fprintf(stderr," A2_Ca.mod");
fprintf(stderr," A2_ih.mod");
fprintf(stderr," A2_ika_IS.mod");
fprintf(stderr," A2_ika_arm.mod");
fprintf(stderr," A2_ika_soma.mod");
fprintf(stderr," A2_ikm_IS.mod");
fprintf(stderr," A2_ikm_arm.mod");
fprintf(stderr," A2_ikm_soma.mod");
fprintf(stderr," A2_ina_IS.mod");
fprintf(stderr," A2_ina_arm.mod");
fprintf(stderr," A2_ina_soma.mod");
fprintf(stderr," Amacrine_hhk.mod");
fprintf(stderr," Amacrine_hhna.mod");
fprintf(stderr," Bip_Ca.mod");
fprintf(stderr," Bip_Cad.mod");
fprintf(stderr," Bip_Ka.mod");
fprintf(stderr," Bip_Kv.mod");
fprintf(stderr," Bip_ih.mod");
fprintf(stderr," Cone_CPR.mod");
fprintf(stderr," Cone_Kv.mod");
fprintf(stderr," Cone_ih.mod");
fprintf(stderr," Ganglion_hh.mod");
fprintf(stderr," Gfluct.mod");
fprintf(stderr," Horizontal_IA.mod");
fprintf(stderr," Horizontal_ICa.mod");
fprintf(stderr," Horizontal_IKa.mod");
fprintf(stderr," Horizontal_IKv.mod");
fprintf(stderr," Horizontal_IL.mod");
fprintf(stderr," Horizontal_INa.mod");
fprintf(stderr," IinjLT.mod");
fprintf(stderr," IinjLTDim.mod");
fprintf(stderr," IinjLT_cone.mod");
fprintf(stderr," Rod_CPR.mod");
fprintf(stderr," Rod_Ca.mod");
fprintf(stderr," Rod_Cad.mod");
fprintf(stderr," Rod_Kv.mod");
fprintf(stderr," Rod_Kx.mod");
fprintf(stderr," Rod_Leak.mod");
fprintf(stderr," Rod_hyper.mod");
fprintf(stderr," Xtra.mod");
fprintf(stderr," gap.mod");
fprintf(stderr," syn_ama_bip_inhib.mod");
fprintf(stderr," syn_ama_gan_inhib.mod");
fprintf(stderr," syn_bip_ama_excite.mod");
fprintf(stderr," syn_bip_gan_excite.mod");
fprintf(stderr," syn_bip_gan_inhib.mod");
fprintf(stderr," syn_horizon_PR.mod");
fprintf(stderr," syn_rod_bip_excite.mod");
fprintf(stderr," syn_rod_bip_excite_RD.mod");
fprintf(stderr," syn_rod_bip_inhib.mod");
fprintf(stderr, "\n");
    }
_A2_Ca_reg();
_A2_ih_reg();
_A2_ika_IS_reg();
_A2_ika_arm_reg();
_A2_ika_soma_reg();
_A2_ikm_IS_reg();
_A2_ikm_arm_reg();
_A2_ikm_soma_reg();
_A2_ina_IS_reg();
_A2_ina_arm_reg();
_A2_ina_soma_reg();
_Amacrine_hhk_reg();
_Amacrine_hhna_reg();
_Bip_Ca_reg();
_Bip_Cad_reg();
_Bip_Ka_reg();
_Bip_Kv_reg();
_Bip_ih_reg();
_Cone_CPR_reg();
_Cone_Kv_reg();
_Cone_ih_reg();
_Ganglion_hh_reg();
_Gfluct_reg();
_Horizontal_IA_reg();
_Horizontal_ICa_reg();
_Horizontal_IKa_reg();
_Horizontal_IKv_reg();
_Horizontal_IL_reg();
_Horizontal_INa_reg();
_IinjLT_reg();
_IinjLTDim_reg();
_IinjLT_cone_reg();
_Rod_CPR_reg();
_Rod_Ca_reg();
_Rod_Cad_reg();
_Rod_Kv_reg();
_Rod_Kx_reg();
_Rod_Leak_reg();
_Rod_hyper_reg();
_Xtra_reg();
_gap_reg();
_syn_ama_bip_inhib_reg();
_syn_ama_gan_inhib_reg();
_syn_bip_ama_excite_reg();
_syn_bip_gan_excite_reg();
_syn_bip_gan_inhib_reg();
_syn_horizon_PR_reg();
_syn_rod_bip_excite_reg();
_syn_rod_bip_excite_RD_reg();
_syn_rod_bip_inhib_reg();
}
