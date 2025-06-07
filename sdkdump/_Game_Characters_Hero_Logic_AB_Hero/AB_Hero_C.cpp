#include "..\FUObjectArray.hpp"
#include "AB_Hero_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
#include "..\_Script_Engine\DecalComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsPlayerAnimInstance.hpp"
#include "..\_Script_RsTechRT\RsActorMotion.hpp"
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SaberArmWallrun() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e566 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_B26803C1485DDF6F1A4AC2980F8FA161() {
    return (void*)((uintptr_t)this + 0x428a0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_5A38D2C745E4C89719210BAD0C4CABA5() {
    return (void*)((uintptr_t)this + 0x451e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_FC037F784FD9CC2E99B959A12D149483() {
    return (void*)((uintptr_t)this + 0x6c6a8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_225B17874733719CA72FAABF5D8CC45F() {
    return (void*)((uintptr_t)this + 0x3dd0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x11c0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_2E419F9D41E7996BAF22C6B75F9B7F10() {
    return (void*)((uintptr_t)this + 0x1420);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateMachine_DB216ADC453A64E6C6FFCE88592778F5() {
    return (void*)((uintptr_t)this + 0x42990);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_B6F49B1A4A27485E94BA60B6347B5C55() {
    return (void*)((uintptr_t)this + 0x32f8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_3B81C96C4AD77D06A4F49485A9617A0B() {
    return (void*)((uintptr_t)this + 0x11c8);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_TimeRunning() {
    return *(float*)((uintptr_t)this + 0x6e4b4);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_519D90F44062E4131D96B997822F27BE() {
    return (void*)((uintptr_t)this + 0x12e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateMachine_4D1A7866436616A367CF63BB996945EC() {
    return (void*)((uintptr_t)this + 0x427c0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimMatcherGraphNode_3342C29342ACD632A89AAF9A918986AD() {
    return (void*)((uintptr_t)this + 0x2d598);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_TimeIdleGround() {
    return *(float*)((uintptr_t)this + 0x6e4b0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimMatcherGraphNode_86B3392B40AAF8A55CB849A4BFD41B0B() {
    return (void*)((uintptr_t)this + 0x23320);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_81378F444D393CD29FE1C89C2E1F2DB3() {
    return (void*)((uintptr_t)this + 0x1350);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_33504C634B2D8C6A6A5AEF9017C864AF() {
    return (void*)((uintptr_t)this + 0x14d8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_077472AD49E3493F32BB3DA2ADD4D141() {
    return (void*)((uintptr_t)this + 0x42c70);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::BlueprintInitializeAnimation() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsSaberSlotActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e51e + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_0C75942446F37DA5EE6C3BA8EDACB367() {
    return (void*)((uintptr_t)this + 0x3c80);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_57780CE24A8E6EE385AFFCBCEB6616F3() {
    return (void*)((uintptr_t)this + 0x1468);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_0F26BD164F9C329B8FDC59B98F314EC5() {
    return (void*)((uintptr_t)this + 0x41db8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_63406EF741B5757A24508D8D61884908() {
    return (void*)((uintptr_t)this + 0x6c6f0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_61407C5C42C82D12E37FCFBC5E0613BF() {
    return (void*)((uintptr_t)this + 0x15f0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_7D8014BC480F6FC534E9BC82D50A720C() {
    return (void*)((uintptr_t)this + 0x1660);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_AirOrBalanceBeam(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e389 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e389 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_0CE29FB243021271A103B1AE47EF5C3B() {
    return (void*)((uintptr_t)this + 0x4600);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::DoubleJump_EnableNav() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByInt_90A9CA9B4D98AFA4BDC88FB1C46861C7() {
    return (void*)((uintptr_t)this + 0x378b8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_5412AE934DCF46F8C5278282D1C506B7() {
    return (void*)((uintptr_t)this + 0x1740);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_ForceTelekinesis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e43d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e43d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_CA06DC19413CAB21CBD65FAF5B17904E() {
    return (void*)((uintptr_t)this + 0x42020);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_6785C3234D53857E7DF994AFE24CAF75() {
    return (void*)((uintptr_t)this + 0x1928);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_A21A743B4453A1F66CE4E88C539AC2A4() {
    return (void*)((uintptr_t)this + 0x421e8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_37FC930C4F1B7FFD10AFEE988518326C() {
    return (void*)((uintptr_t)this + 0x2698);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_CE47D11442DCBDDA7E2C90A9C167CD41() {
    return (void*)((uintptr_t)this + 0x6dcc0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_OLD_MOTION(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e350 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_7B808E98494F900AC090E387A202958D() {
    return (void*)((uintptr_t)this + 0x1a40);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SaberArmBaseNav(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e561 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e561 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_19BADD244F404492283EBDB285A02B82() {
    return (void*)((uintptr_t)this + 0x4648);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_isWallPress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e489 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e489 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_DE59F411408B45522BEE3FA6A9F7616B() {
    return (void*)((uintptr_t)this + 0x1a88);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_0373DDA746D1ACA6014F029B43136779() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_D64CE18940499D555A12EEB29576DA0F() {
    return (void*)((uintptr_t)this + 0x1ba0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TwoBoneIK_1B2404F24DC0843AA18FDAB1B0049B4F() {
    return (void*)((uintptr_t)this + 0x6cfd0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_HeroSnow() {
    return *(float*)((uintptr_t)this + 0x6e2b4);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_27BF6D2D4DF2E354BF2859ADC0FCB5F6() {
    return (void*)((uintptr_t)this + 0x1cb8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_6507966446DAC6DF49F4C78F7BA4918E() {
    return (void*)((uintptr_t)this + 0x47f8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_02885EE24F8CCC8A41606AB86E09EC1A() {
    return (void*)((uintptr_t)this + 0x69ca0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_4415BD0445275640F221FA9F1636EBE7() {
    return (void*)((uintptr_t)this + 0x1dd0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_8AD2ACDD40DD0A5F918395AF9AE803D9() {
    return (void*)((uintptr_t)this + 0x1e18);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_CE18427144279EFC244BD08238B4074B() {
    return (void*)((uintptr_t)this + 0x6cbc0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_A4874DEC457935725339FEA6AEB4C950() {
    return (void*)((uintptr_t)this + 0x45b8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_95D3B45445519B915F93D7A1FA0FA2A4() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_BE2F753C41B072DCDF69EE8DD2B410B5() {
    return (void*)((uintptr_t)this + 0x42140);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Ledge_PullUp() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AM_IsInPivot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e522 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e522 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_18DA3B5142F003FDF40D95A1D7748284() {
    return (void*)((uintptr_t)this + 0x1f30);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_isPreDiveEnter() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e578 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagFreeFall() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4a6 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_81042A1B4A0C67F3AC3238B0BDE2C63F() {
    return (void*)((uintptr_t)this + 0x44e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_BBDF95824D366E0A03CC7FB0B8F73307() {
    return (void*)((uintptr_t)this + 0x1f78);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_TopologyBumperLocatorZAxisVector() {
    return (void*)((uintptr_t)this + 0x6e418);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_E52D427D4245A50A3B5CDAAFFDF907E4() {
    return (void*)((uintptr_t)this + 0x3420);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_C4562ED748ACB1E86A8043B580B29252() {
    return (void*)((uintptr_t)this + 0x6c160);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_9FC7483F4E3604E622986E9C99556D6D() {
    return (void*)((uintptr_t)this + 0x44f78);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_isInSyncedOrCineAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4a7 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_2ABB3DC440022D0D9F2EFD9B4C63CBAA() {
    return (void*)((uintptr_t)this + 0x2058);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_ABFF9F6048AD79D256ED68B9F7391ED3() {
    return (void*)((uintptr_t)this + 0x5e388);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SaberArmAirOrBalanceBeam(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e562 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e562 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_F833932F46C6B0E145A7BAA71609AA79() {
    return (void*)((uintptr_t)this + 0x46ca8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_8857BEE24329B1E64C1313B5B38D35FC() {
    return (void*)((uintptr_t)this + 0x20a0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimMatcherGraphNode_44AF0B8443D540A2E189DABB39EFD1AF() {
    return (void*)((uintptr_t)this + 0x37bc8);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_disablePoseDriver() {
    return *(float*)((uintptr_t)this + 0x6e2e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_047C005143FF75ED876D85A7B5AE5E81() {
    return (void*)((uintptr_t)this + 0x2288);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsAnimMatcherGraphNode_587BDC7441318C9D26F996BA6DAF21AA() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimMatcherGraphNode_45D35EA346568AC15BE9A2994163A0F1() {
    return (void*)((uintptr_t)this + 0xef00);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_629F3811491E5CA512D1DE96EE34A25A() {
    return (void*)((uintptr_t)this + 0x23a0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_BalanceBeamBpState() {
    return (void*)((uintptr_t)this + 0x6e398);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_CC9FA8FA487E6B3505D5B59E8152669E() {
    return (void*)((uintptr_t)this + 0x23e8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SubInstance_33078E004E4873CB22EB1589DD72C4FE() {
    return (void*)((uintptr_t)this + 0x37ab8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SubInstance_AD2F1855475FCE60929CB783BDFE049F() {
    return (void*)((uintptr_t)this + 0x25d0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ForcePullArmMovement() {
    return *(float*)((uintptr_t)this + 0x6e550);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_D616DCD445ECEB0048D6FCACDDB9F1F9() {
    return (void*)((uintptr_t)this + 0x420b0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateMachine_BD382D6747A94EE1093376AC61C4D95B() {
    return (void*)((uintptr_t)this + 0x45850);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_9B1288E74C337569907397A268663536() {
    return (void*)((uintptr_t)this + 0x2768);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeSwingImpactFound() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e495 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_E910A97F45BAB296FBCCEF86ACAEE2CC() {
    return (void*)((uintptr_t)this + 0x27d8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_wasInSyncedOrCineAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e580 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e580 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_D1368B214CB384BCE5D08286C4DB30B6() {
    return (void*)((uintptr_t)this + 0x5bc08);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_B7C3824F4FBC639E911AACAE97E31D85() {
    return (void*)((uintptr_t)this + 0x2820);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsForcePowerSlotActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e51d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e51d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_0ACFE4224E6322D91A9171B40F440C45() {
    return (void*)((uintptr_t)this + 0x2900);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_734C939845F05C1173FF6D81E6116D73() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IGYoungBored(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e57a + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e57a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_ropeIsSwingingForward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e491 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e491 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_E264169D4850F01F0DFD2F9F041885EF() {
    return (void*)((uintptr_t)this + 0x2a18);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeGroundHoldPosition() {
    return *(float*)((uintptr_t)this + 0x6e518);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_20F1D02A41B7E13A27FF938B99A2E383() {
    return (void*)((uintptr_t)this + 0x3eb0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_3E200BD64E5FFC7581FF66ACE7B72771() {
    return (void*)((uintptr_t)this + 0x6c588);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_9E5E3A2A4E5DE2A1FD1B8E8627F3077B() {
    return (void*)((uintptr_t)this + 0x42ef8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_CEC443594679E5CAC32578841C7EE748() {
    return (void*)((uintptr_t)this + 0x2ac0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_16E5D51B42D30DBAAF80D097AA39DF88() {
    return (void*)((uintptr_t)this + 0x2b30);
}
_Script_CoreUObject::Object*& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsSkeletonMesh() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x6e250);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_B46C3EC54DD03ADBD28575862BD64390() {
    return (void*)((uintptr_t)this + 0x37788);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_inMVGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_2FACF09E445410115A6A7194C6F106A6() {
    return (void*)((uintptr_t)this + 0xee30);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_HeadWindOrFlashlight() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e38c + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_HeroInCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e46f + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_292749AC49F6BAE97F69318BB7E2E5B4() {
    return (void*)((uintptr_t)this + 0x2c48);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_D851FCBF4C613AF580E63EB076695CBA() {
    return (void*)((uintptr_t)this + 0x44d38);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_63D9778C4ED2137F18A15BB4AB18B444() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_4BCAB29E4247E0F03FB9F888E38E8944() {
    return (void*)((uintptr_t)this + 0x4a38);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_6A8AE2BF42D9E5737F6F44AA3C200915() {
    return (void*)((uintptr_t)this + 0x2d28);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_6FC2B2B7443316BBAD6C84866F5EDD0C() {
    return (void*)((uintptr_t)this + 0x45a58);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsEdgeGrab() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e36e + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_BasicAir() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e441 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_8AF2EA0644EA9AA9D5725E936E6DC70C() {
    return (void*)((uintptr_t)this + 0x3188);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_30C604EF40D529521EF1D4A67A9EC79D() {
    return (void*)((uintptr_t)this + 0x5e180);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_1A8647CC4E78B641ACF7148E927052FF() {
    return (void*)((uintptr_t)this + 0x44350);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_40209B514F9E4848787280AADD7E367E() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_F37121B7495B090043F6369AC0FB03E9() {
    return (void*)((uintptr_t)this + 0x2e40);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_D1AB633F493CFBA9F469F9BF15130D7D() {
    return (void*)((uintptr_t)this + 0x2e88);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_EADF465F47383E541DAC018AF2614139() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateMachine_775607CE4D868E0DCA5F8492BD72F1F6() {
    return (void*)((uintptr_t)this + 0x42450);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_3D6956F34B3C6470BD54FFBEDFE7EA2F() {
    return (void*)((uintptr_t)this + 0x6ba18);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_5B698DEA4AAA5B75B60394B8F52E3B67() {
    return (void*)((uintptr_t)this + 0x3510);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RopeSlideToAttachmentLengthState() {
    return (void*)((uintptr_t)this + 0x6e4ab);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_CE51C5124B18EEFAC171F285848F068E() {
    return (void*)((uintptr_t)this + 0x2fa0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_4E839AC24F4EB9DD2C8EEDA143088E81() {
    return (void*)((uintptr_t)this + 0x2fe8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_19BADD244F404492283EBDB285A02B82() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_E1817C8E479E11D423BABB87846F4ACC() {
    return (void*)((uintptr_t)this + 0x41f08);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_0F01EE38497F0EBE8C51AEB357E15AE1() {
    return (void*)((uintptr_t)this + 0x450f0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_F5E1EBAB4DFD62085692789F7736928D() {
    return (void*)((uintptr_t)this + 0x3058);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SaberArmSlopeOrLedge() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e565 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_4E14BC924E26304FCBFB738DE8718D21() {
    return (void*)((uintptr_t)this + 0x3268);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_6E99F07A4B1AA013B7D7B3AD48FB4AC7() {
    return (void*)((uintptr_t)this + 0x3788);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_24B988144B567400BA0298BDB914A7A0() {
    return (void*)((uintptr_t)this + 0x6b560);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_AD723B8740C5E89CB4F21196519D9991() {
    return (void*)((uintptr_t)this + 0x44e58);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsEvadeRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_Sheathing() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e38e + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsForcePowerSlotActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e51d + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_B216EF474F38804293588785DFFD6E1A() {
    return (void*)((uintptr_t)this + 0x32b0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_EF869F3547C8E6789AE762BB40CBB191() {
    return (void*)((uintptr_t)this + 0x3340);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_7ABC6DAE41751A9E3A603B98E7590E1E() {
    return (void*)((uintptr_t)this + 0x5c158);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IGHairMess() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e594 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_8EDF642F432F186B110B67AE39BE1C3C() {
    return (void*)((uintptr_t)this + 0x3468);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_3BD560334E375A035905919FE4889C08() {
    return (void*)((uintptr_t)this + 0x35b8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_5E864EB448863EA520A0ACB399F61808() {
    return (void*)((uintptr_t)this + 0x450a8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_D744CE9641B1F165F9993AAEF42590D1() {
    return (void*)((uintptr_t)this + 0x43c0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_FA8AC7184131CA285D74B3A5B194CEAF() {
    return (void*)((uintptr_t)this + 0x3600);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_81378F444D393CD29FE1C89C2E1F2DB3() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_3A7A483740F39CA148A929B620893F46() {
    return (void*)((uintptr_t)this + 0x4258);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_3AA4BCF0443C359ED13A259DA6952B7F() {
    return (void*)((uintptr_t)this + 0x3670);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_5DB0A600404B44C5CAA38DBC6787384D() {
    return (void*)((uintptr_t)this + 0x37d0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_EE77ADCE4800F1CD02A25F8F7269AB71() {
    return (void*)((uintptr_t)this + 0x3ae8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SwimHipAdjustment() {
    return (void*)((uintptr_t)this + 0x6e524);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_6663BB5C41898D9DB03B5A87629718A8() {
    return (void*)((uintptr_t)this + 0x443e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_B9ABB4C042B1F1A643A120989B49EE93() {
    return (void*)((uintptr_t)this + 0x46940);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_40209B514F9E4848787280AADD7E367E() {
    return (void*)((uintptr_t)this + 0x39b8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_FallAttack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e435 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e435 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_373EBBF84FB05DB96A007A9D5FE90B11() {
    return (void*)((uintptr_t)this + 0x3b30);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AM_IsInPivot() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e522 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_0C4CA5BA4F8D738C6E0E37AAB185B862() {
    return (void*)((uintptr_t)this + 0x5b950);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_isSlideLand() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4ac + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_223AB9744D93B8084AC70CAEE3FFF507() {
    return (void*)((uintptr_t)this + 0x3ba0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_1DE3BBB24C5A06A74308C082E9952F00() {
    return (void*)((uintptr_t)this + 0x4528);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Root_43250C9444421B5E4706FC9EDBAAAD0F() {
    return (void*)((uintptr_t)this + 0x6dae0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_4B2A5A7848A72B744FAF8CB98A709B69() {
    return (void*)((uintptr_t)this + 0x3c10);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_3DA5B3F245B2CC67F22142B9B56A8B61() {
    return (void*)((uintptr_t)this + 0x3cf0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_1982519945692DAD3FA33CA63134D71E() {
    return (void*)((uintptr_t)this + 0x3e40);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_DoubleJumpAscend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e440 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e440 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_6AC9989D4C90530FBAF95E8ADDBD77FC() {
    return (void*)((uintptr_t)this + 0x3f90);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_23AB55724457A2582D85679150980E49() {
    return (void*)((uintptr_t)this + 0x40a8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_98EB90A845C5969900C57D9AD48970D9() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_0373DDA746D1ACA6014F029B43136779() {
    return (void*)((uintptr_t)this + 0x42530);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsInHub() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e50e + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_C24C2AA543988FCB75C8DEBCD44A033F() {
    return (void*)((uintptr_t)this + 0x40f0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_A92763C9436B6446969E1AA0161BB9BA() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ForcePullLeftArmIKEffector() {
    return (void*)((uintptr_t)this + 0x6e554);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_98EB90A845C5969900C57D9AD48970D9() {
    return (void*)((uintptr_t)this + 0x4138);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_734C939845F05C1173FF6D81E6116D73() {
    return (void*)((uintptr_t)this + 0x42dc0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_BaseNav() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e38f + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_8D73A324403A61F04576B699412B5DB4() {
    return (void*)((uintptr_t)this + 0x4180);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_D761300A4BF240720A95C0BFEEEF82D8() {
    return (void*)((uintptr_t)this + 0x41c8);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_CombatPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e438 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_DD56344B454860E94396B89FCE1B35E6() {
    return (void*)((uintptr_t)this + 0x449e8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_2B61277040AD14E006F3F7AE8AC7A5FB() {
    return (void*)((uintptr_t)this + 0x4210);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_E507549C4EE03C12039204803CFC4586() {
    return (void*)((uintptr_t)this + 0x42a0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_291636E940E7D6AD05D3748991DD863A() {
    return (void*)((uintptr_t)this + 0x6cf08);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_GotHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e384 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_64874E0B406F238535570BA685F460C3() {
    return (void*)((uintptr_t)this + 0x5cbe0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_3B63DBD5450E7B1CCB5CFFB6652F07D2() {
    return (void*)((uintptr_t)this + 0x6a088);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_50A2E103454016FBC248B38B881D9593() {
    return (void*)((uintptr_t)this + 0x42e8);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Hero_Nav() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e393 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_988571D14731B331B68B61B3DB39787C() {
    return (void*)((uintptr_t)this + 0x4330);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RunStopMap() {
    return (void*)((uintptr_t)this + 0x6e2f8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_EE44FB17459901AEB639929BD458CA79() {
    return (void*)((uintptr_t)this + 0x44308);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_SheathingNAV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e391 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e391 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_HeroMeshHip_RotY() {
    return *(float*)((uintptr_t)this + 0x6e454);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_00E134C14D25FF24E1407DAE10A57584() {
    return (void*)((uintptr_t)this + 0x4378);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Alert() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e2a0 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_04533F72471EC4AE1DDB39A52174A875() {
    return (void*)((uintptr_t)this + 0x6b9d0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_windON() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e386 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_D0131E5346B96B6B83E24FA20AF21595() {
    return (void*)((uintptr_t)this + 0x4408);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_D79133644DB9B4F6321E2CB77ED2A772() {
    return (void*)((uintptr_t)this + 0x6cb08);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_C9AA72BC42F192F751C75689CB87CA55() {
    return (void*)((uintptr_t)this + 0x44918);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e50c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e50c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_20087833470BD58FE23769861BE619D0() {
    return (void*)((uintptr_t)this + 0x4450);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_AB77CFCB4FCF3941E70AEA96A3CE7284() {
    return (void*)((uintptr_t)this + 0x6ddf8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_85A3C4FC484725C63929AA98C4DE85D7() {
    return (void*)((uintptr_t)this + 0x4498);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_F733999143551183961DB7BBF62F65A5() {
    return (void*)((uintptr_t)this + 0x6b428);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_1B19DD1049D8BFD202BA8199F5C200B9() {
    return (void*)((uintptr_t)this + 0x42948);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_ABE8885741B4744E59DB2E8A47543AAD() {
    return (void*)((uintptr_t)this + 0x4570);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_E78775BB41E0F009E9772AA64B06CA0E() {
    return (void*)((uintptr_t)this + 0x4690);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_8EF69A4F4F4F6ED7A02111ACF1550541() {
    return (void*)((uintptr_t)this + 0x5c5e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_92E5CDA44A6A7392E96118B8B62D4B7E() {
    return (void*)((uintptr_t)this + 0x46d8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_988571D14731B331B68B61B3DB39787C() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_2D9041314A7BCD8DE378328BF9BAA673() {
    return (void*)((uintptr_t)this + 0x44398);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_42B2CC7040F4223B26EE5C936C7CB759() {
    return (void*)((uintptr_t)this + 0x4720);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsWindNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e3b2 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_CD5119DD459E3EBBB58837A94A455E85() {
    return (void*)((uintptr_t)this + 0x6b6e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_5802C301418A05D576D952AB5E3F4416() {
    return (void*)((uintptr_t)this + 0x4768);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_FA541A2B46C99441D23D8AA5ED022A9B() {
    return (void*)((uintptr_t)this + 0x47b0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_SaberInHand() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e387 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_E2C9AB594B2C5023360EEABD9A4912B9() {
    return (void*)((uintptr_t)this + 0x4840);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_5D93A2C84B4284BC0A9498942D50B6AC() {
    return (void*)((uintptr_t)this + 0x5d598);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_83B82348433AA49668DA5BAFDDB9488C() {
    return (void*)((uintptr_t)this + 0x4888);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateMachine_CCC43B2B4A6D0F73B57F5980CACF06D5() {
    return (void*)((uintptr_t)this + 0x5bf40);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_369A6EEE423305E6DF05D0A4D008834B() {
    return (void*)((uintptr_t)this + 0x48d0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_95D3B45445519B915F93D7A1FA0FA2A4() {
    return (void*)((uintptr_t)this + 0x4918);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_BD7670514D5906FA98D00DAE09739C8D() {
    return (void*)((uintptr_t)this + 0x42778);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_AnimDynamics_259FD6E240F750DE17918594031E3236() {
    return (void*)((uintptr_t)this + 0x5eb60);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_CF2B9AED42E0D411E48F5ABF2FF7174E() {
    return (void*)((uintptr_t)this + 0x4960);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_actorLocalTransform() {
    return (void*)((uintptr_t)this + 0x6e25c);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_3EDBAE794827DCEE82A769B375093B84() {
    return (void*)((uintptr_t)this + 0x49a8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_6507966446DAC6DF49F4C78F7BA4918E() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_0B1C79674DCB02BC8722018EBC8165FE() {
    return (void*)((uintptr_t)this + 0x49f0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ScrambleUpDistance() {
    return *(float*)((uintptr_t)this + 0x6e298);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_TopologyBumperLocatorZAxisVector_NoZ() {
    return (void*)((uintptr_t)this + 0x6e428);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_DCC557CA4699B7A63B7DDFA814E3922A() {
    return (void*)((uintptr_t)this + 0x4a80);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_EA0DE3C546AA06E824C612AC188FC236() {
    return (void*)((uintptr_t)this + 0x43140);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_E3C521FC4CADC1B0DCDF12B07F607DC7() {
    return (void*)((uintptr_t)this + 0x4ac8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_8DF516D64A8B01A357784FBDC21033E6() {
    return (void*)((uintptr_t)this + 0x4bf8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimMatcherGraphNode_28C5B8284D07BB594C17D29BAFA191C6() {
    return (void*)((uintptr_t)this + 0x4c40);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_9F5C604D467B0EF0C5EF1CAB9D8DE7D5() {
    return (void*)((uintptr_t)this + 0x5ef00);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Alert(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e2a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e2a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_66D808E7423187E2746058AD653683DF() {
    return (void*)((uintptr_t)this + 0x42360);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_7DEB178A4E655369955252943C4EB46C() {
    return (void*)((uintptr_t)this + 0x473a0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_B52D944444511BEC64867E8FD2FD8104() {
    return (void*)((uintptr_t)this + 0x430f8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_061C393344C86C945EC2D0BEBE03ADD6() {
    return (void*)((uintptr_t)this + 0xede8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Topology_WallDirection() {
    return (void*)((uintptr_t)this + 0x6e446);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_B1E5D7DE4FECC6BAF0E3519F2A96D2C0() {
    return (void*)((uintptr_t)this + 0x190a8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimMatcherGraphNode_A53427344BB6E6E27460289259BC6083() {
    return (void*)((uintptr_t)this + 0x19178);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_5179080D4AB4B706E7E177B6E38CEB74() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IGHairFix() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e53b + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_FCD947794C0166234493FCB56F5E30A4() {
    return (void*)((uintptr_t)this + 0x2d4c8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_880C11D84C48610DC067A8AEC83A016B() {
    return (void*)((uintptr_t)this + 0x37740);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_TopologySlopeRelativeSpeed() {
    return *(float*)((uintptr_t)this + 0x6e2c8);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RopeSwingPhase() {
    return *(float*)((uintptr_t)this + 0x6e358);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_GotHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e384 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_F8FF192F4B2D174727C10EA07C9F3844() {
    return (void*)((uintptr_t)this + 0x37988);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RunStartDistance() {
    return *(float*)((uintptr_t)this + 0x6e2e8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_FA47FD93450E7B10EC456C879258D7E1() {
    return (void*)((uintptr_t)this + 0x37b80);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_75FFEE5F4327B3CF441891A54E835974() {
    return (void*)((uintptr_t)this + 0x41d70);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_CheckingDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_059418674B9CA17F18E576BBAFBDC8B1() {
    return (void*)((uintptr_t)this + 0x41e60);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagButtSlide(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e538 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e538 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_92F0F30A47C06D4D88120CB53B1FEF89() {
    return (void*)((uintptr_t)this + 0x41fd8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_077472AD49E3493F32BB3DA2ADD4D141() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_UsePOIAimOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e579 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e579 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_isAnySlotActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e51c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e51c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_44FFAA2E44CBB01F2C718A8BFEC5D016() {
    return (void*)((uintptr_t)this + 0x42068);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ForcePullVictimMovementAlpha() {
    return *(float*)((uintptr_t)this + 0x6e54c);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_0B9532F541011C103299CEAD72D509A0() {
    return (void*)((uintptr_t)this + 0x42b40);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_WasInCombatPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e501 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_933E666D40089AE2BBF9FD9E04B80686() {
    return (void*)((uintptr_t)this + 0x420f8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_3D6956F34B3C6470BD54FFBEDFE7EA2F() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_CBBD7C8144E9C98BF521DB8DEA4BF226() {
    return (void*)((uintptr_t)this + 0x422b8);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagButtSlide() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e538 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_30B5F33E49C547500F80AAA7CEC4597E() {
    return (void*)((uintptr_t)this + 0x42408);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_8243CF854E8E44AE55E15FA152B57EA0() {
    return (void*)((uintptr_t)this + 0x42600);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_C2913FD04A9E38538411A286B9197FC4() {
    return (void*)((uintptr_t)this + 0x6c1a8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_B625B5044C0B0ACFAC52CA95295E49F5() {
    return (void*)((uintptr_t)this + 0x426d0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_9159FAD44AC0CE23ECAD97952A6D8515() {
    return (void*)((uintptr_t)this + 0x42a70);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_WallRunDistance() {
    return *(float*)((uintptr_t)this + 0x6e308);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ComponentToLocalSpace_4AAA01E942E8CA9B082DF39AE6C3A444() {
    return (void*)((uintptr_t)this + 0x42d40);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsWallRun(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e38d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e38d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsYoungCal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e53a + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e53a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_LocalToComponentSpace_943426C74D61D31AC43E06840B01034D() {
    return (void*)((uintptr_t)this + 0x42d80);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_EADF465F47383E541DAC018AF2614139() {
    return (void*)((uintptr_t)this + 0x43028);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimSynchronizerGraphNode_41AA2DE44061AA922A476FB0BE0531C5() {
    return (void*)((uintptr_t)this + 0x431e8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_03F3A031457DD7E32A6C9396207DD88D() {
    return (void*)((uintptr_t)this + 0x44138);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_HeadWindOrFlashlight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e38c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e38c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_7EF8EA01433F121247E09CA4C15F14D3() {
    return (void*)((uintptr_t)this + 0x6bf18);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_172C89B64D6B0660F39096924BB4316E() {
    return (void*)((uintptr_t)this + 0x441e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateMachine_518989034743794F02B084BA017723E5() {
    return (void*)((uintptr_t)this + 0x44228);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_WallRunTime() {
    return *(float*)((uintptr_t)this + 0x6e460);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_4150A9AC4170229B56E8E3BB7102CE81() {
    return (void*)((uintptr_t)this + 0x44428);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_FlashlightInZone() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e437 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_FB8746614AB6D2E5940745AA1F9AB5C6() {
    return (void*)((uintptr_t)this + 0x444d0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_BB07FBFB47389F5D31657DA3FC139684() {
    return (void*)((uintptr_t)this + 0x44578);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_307E22FD46F9A84C8D5933972AFD1419() {
    return (void*)((uintptr_t)this + 0x44648);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_82889FC241AA0B27506F77AC0A398DDA() {
    return (void*)((uintptr_t)this + 0x44778);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_SheathingStatic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_5731C640429A43EC1E861BA017C9684E() {
    return (void*)((uintptr_t)this + 0x44848);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_BDD22C8F400B59ECC2B911855AB0AB2C() {
    return (void*)((uintptr_t)this + 0x44a90);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_UseFlashlightAimOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e512 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_1B50C32D45D6D2EDFAFF329DD944ADC0() {
    return (void*)((uintptr_t)this + 0x44b60);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_RotationOffsetBlendSpace_A2FDC6A44E77A728B6CC2DB714E64972() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_63D9778C4ED2137F18A15BB4AB18B444() {
    return (void*)((uintptr_t)this + 0x44c08);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_EDE18D4D4FDF6F1DA5099F875EBA7114() {
    return (void*)((uintptr_t)this + 0x44d80);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_B96F73E54036101AEFDBC5A2DF67E012() {
    return (void*)((uintptr_t)this + 0x44dc8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_AEE2BD704ECAB16215B1E291847C7274() {
    return (void*)((uintptr_t)this + 0x44e10);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IGHandonHips() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4bc + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_B3E9D4014A440E06A71240BDEEF713B6() {
    return (void*)((uintptr_t)this + 0x44ea0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_getL_WristTransform() {
    return (void*)((uintptr_t)this + 0x6e540);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_A42B2E6E4391DC5BADE167B5FDC80E20() {
    return (void*)((uintptr_t)this + 0x44ee8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_79E638384E70D9D5C5AF13A0D67297AC() {
    return (void*)((uintptr_t)this + 0x44f30);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_E7DD7FC743A70C336C140C9D4F809598() {
    return (void*)((uintptr_t)this + 0x5daf0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_44112D784469EF76362641A26259D1C4() {
    return (void*)((uintptr_t)this + 0x45198);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_95C1D25C404FB2721BFC5D9BFA71C077() {
    return (void*)((uintptr_t)this + 0x45228);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_133AF12946EB0B67949CB290478E3DD4() {
    return (void*)((uintptr_t)this + 0x5c858);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_882D1371418CB6E1861574ACCA4CFABA() {
    return (void*)((uintptr_t)this + 0x45270);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_7799993D4095229B3E17AA81B37686A8() {
    return (void*)((uintptr_t)this + 0x5def0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_0CBE175945BC1720BAF32D994144F799() {
    return (void*)((uintptr_t)this + 0x45318);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_0B9532F541011C103299CEAD72D509A0() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsAttacking() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4aa + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_2E2113714F0AB5A1A624FB92D452CB66() {
    return (void*)((uintptr_t)this + 0x453e8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_floorContact(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e32c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e32c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_28B0C32E4A3750514D9C778333E79633() {
    return (void*)((uintptr_t)this + 0x45490);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_C4B4B783423B848A41B1C7A1A355DF87() {
    return (void*)((uintptr_t)this + 0x5c330);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_HeroInCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e46f + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e46f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_86ABF9564B701EC75260E7802192EB89() {
    return (void*)((uintptr_t)this + 0x454d8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_8CF7787C4B48947F632E8DAE6EAFD303() {
    return (void*)((uintptr_t)this + 0x455a8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_9DE200AC4CE3D25496B263BDB55704AD() {
    return (void*)((uintptr_t)this + 0x5c200);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_2923151646DCE8E4D4732D97BB1EEFE4() {
    return (void*)((uintptr_t)this + 0x456d8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_DCCD6B6B44AF6D78D616239F566296D5() {
    return (void*)((uintptr_t)this + 0x5d168);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_8162B0B14C05D3A29F5188B0DDFD7248() {
    return (void*)((uintptr_t)this + 0x45808);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_2334DDD946378892201B0196C0FD1960() {
    return (void*)((uintptr_t)this + 0x45930);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateMachine_DB1A6C124333E8B9814264904A98E716() {
    return (void*)((uintptr_t)this + 0x45978);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_F165F8D84E28CBB8CF36E68D55EEDBE0() {
    return (void*)((uintptr_t)this + 0x45aa0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_E96494B7466703296579C0BEF4D99C03() {
    return (void*)((uintptr_t)this + 0x6cd20);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_49AFFE584750824B1942B7AC3E570966() {
    return (void*)((uintptr_t)this + 0x45b48);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_157E24EC461959D0CE7ED2985428018A() {
    return (void*)((uintptr_t)this + 0x6a7d8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_B51038CD4F806FD6DA20D69C0E4BADC2() {
    return (void*)((uintptr_t)this + 0x45c18);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_zTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e388 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_F20354CC4C8180540699E78B0E97D821() {
    return (void*)((uintptr_t)this + 0x45ce8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TwoWayBlend_371BBBD24C634CB2FFD711A76F2D8043() {
    return (void*)((uintptr_t)this + 0x45e18);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_InclineFlat() {
    return (void*)((uintptr_t)this + 0x6e2b8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_D99DF62447BDDD3AB1A165B8B29B64BC() {
    return (void*)((uintptr_t)this + 0x5d348);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_7EAB53AD4286C88479A8419E29C939D6() {
    return (void*)((uintptr_t)this + 0x45f10);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_ED42389349BDB9E675F27C928D71EC2D() {
    return (void*)((uintptr_t)this + 0x45fb8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_8243CF854E8E44AE55E15FA152B57EA0() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_107E3EA64BA68A560A99858B5D9E4A09() {
    return (void*)((uintptr_t)this + 0x5d708);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_5802C301418A05D576D952AB5E3F4416() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsCombatSlotActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e51f + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByEnum_C8BEE86A45B40F51925DCF80F0A94FC6() {
    return (void*)((uintptr_t)this + 0x46088);
}
int32_t& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x6e2b0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_A4142EAA4CB39D48CD981186F16D46B5() {
    return (void*)((uintptr_t)this + 0x46168);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_3FC02FE448AA6BCA903DCBBBD5D9FF22() {
    return (void*)((uintptr_t)this + 0x698b0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_28C9D03D46F489DDC00414BE9DA64BAE() {
    return (void*)((uintptr_t)this + 0x46210);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_7547339344E3D5488202FF9DEC773EF8() {
    return (void*)((uintptr_t)this + 0x6bb48);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByEnum_FE3C7B2D44A17A9ED72542B4A1D7E563() {
    return (void*)((uintptr_t)this + 0x462b8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_63B731D44F9A4387E8DE9E9020225AA4() {
    return (void*)((uintptr_t)this + 0x5d120);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_1C7404EF4D19FBBC7A289DA4E4585EAE() {
    return (void*)((uintptr_t)this + 0x46398);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_AnimDynamics_60894DCD486C3A88440D1D83C28A13A9() {
    return (void*)((uintptr_t)this + 0x5e420);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_B241591D411C4D14A75A09827A09EE54() {
    return (void*)((uintptr_t)this + 0x46440);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_A4874DEC457935725339FEA6AEB4C950() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_D145924147E5221044CA928A4AD7AA8F() {
    return (void*)((uintptr_t)this + 0x5d870);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_notify_isRollingTransition() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_429277624BDF190A18DF62AC932FD8DE() {
    return (void*)((uintptr_t)this + 0x464e8);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_HeadWind() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e442 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_8A111BEB42177E5C8ABD51A71E2D08EB() {
    return (void*)((uintptr_t)this + 0x5d3b8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_B9B7AD9B44E3CCF62674B59703DB71C2() {
    return (void*)((uintptr_t)this + 0x465b8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeGetNextState() {
    return (void*)((uintptr_t)this + 0x6e494);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_901C36BC41B4B695B32BC588872F0E04() {
    return (void*)((uintptr_t)this + 0x46688);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_587AD582425E8348A00717A62E1F4BE9() {
    return (void*)((uintptr_t)this + 0x5c9d0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_C29C1CDA48771591C4EE98BEF32D94D0() {
    return (void*)((uintptr_t)this + 0x46730);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_62EE2CFF44215EF548A8B7B6734262D3() {
    return (void*)((uintptr_t)this + 0x5cb00);
}
_Script_Engine::CharacterMovementComponent*& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_playerMovement() {
    return *(_Script_Engine::CharacterMovementComponent**)((uintptr_t)this + 0x6e238);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByEnum_E72BEE7E4238AEC10BA3478EC7619CD4() {
    return (void*)((uintptr_t)this + 0x46860);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IGStanceAdjust(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4be + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4be + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_94188FE14054ABAC6DD3A781F20B6FA9() {
    return (void*)((uintptr_t)this + 0x5e2a8);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_storePitch() {
    return *(float*)((uintptr_t)this + 0x6e340);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Topology_WallState() {
    return (void*)((uintptr_t)this + 0x6e445);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_E3B385E54F427557F8492CA09BB14258() {
    return (void*)((uintptr_t)this + 0x469e8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_D46E674643F9A7849FBA7B839F8D57DD() {
    return (void*)((uintptr_t)this + 0x46a90);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ApplyAdditive_F46D27C54F0F20AD621C818C09F343EC() {
    return (void*)((uintptr_t)this + 0x6db28);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_ForceTelekinesis() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e43d + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_ACEFFE5B4DE752356A191BA244E1E5B1() {
    return (void*)((uintptr_t)this + 0x5d798);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_13F018B947F55E6C8C2AFE917720EC54() {
    return (void*)((uintptr_t)this + 0x46b70);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_398E4E9645EF5C211A1CB6ACA4B6AB04() {
    return (void*)((uintptr_t)this + 0x5d900);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Hero_CombatPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e3a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e3a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_1ED61D7D4EEFC7B1E9BD588E9E5E287D() {
    return (void*)((uintptr_t)this + 0x46c18);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_2848322A4A61762C468DA4A22866707D() {
    return (void*)((uintptr_t)this + 0x46c60);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_7A0764A54EC896C335A4DFAA31374BD8() {
    return (void*)((uintptr_t)this + 0x6c468);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_TopologySlopeInput() {
    return *(float*)((uintptr_t)this + 0x6e448);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_FAE2F30442A59D018ECFF7972D304F85() {
    return (void*)((uintptr_t)this + 0x5c708);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TransitionResult_25606BC94DE27A0E16BEC4B05E419DBF() {
    return (void*)((uintptr_t)this + 0x46cf0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AimOffsetON(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e36c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e36c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AnimDrivenAimOffsetOff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e473 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e473 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_85D8B68C4A82859C25195888FC904E36() {
    return (void*)((uintptr_t)this + 0x46d38);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RunStartMap() {
    return (void*)((uintptr_t)this + 0x6e2d0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_8BC21B80461F52FA16311297561E7513() {
    return (void*)((uintptr_t)this + 0x46d80);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_StaffInHand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e45c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e45c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_3AEB51FB44F4DA4063063FA0D51D22F6() {
    return (void*)((uintptr_t)this + 0x46e50);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_EC2BBEA548AD1A70D2BAE588DD10DA28() {
    return (void*)((uintptr_t)this + 0x6c920);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_SaberInHand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e387 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e387 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_8E891AE94A9FBAC5478D0098B0E3F2AF() {
    return (void*)((uintptr_t)this + 0x46f80);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_121C39C841285AA6D6B1DEA1C7F2005A() {
    return (void*)((uintptr_t)this + 0x6c4b0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_72442F39434DE8508F152B8FB7359160() {
    return (void*)((uintptr_t)this + 0x470b0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_A2FDC6A44E77A728B6CC2DB714E64972() {
    return (void*)((uintptr_t)this + 0x5dba8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_E06ADE2A48667EAD83A5F8A086E6B564() {
    return (void*)((uintptr_t)this + 0x470f8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_ED15859943A3E4B7021513BB592AEB08() {
    return (void*)((uintptr_t)this + 0x47228);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_UseIdleAimOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e50f + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e50f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_723B3A284481A7972D50E6A0D0E278F0() {
    return (void*)((uintptr_t)this + 0x472f8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ClimbBpState() {
    return (void*)((uintptr_t)this + 0x6e3b4);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_9A3148504AA621606C6AB184F232DFFB() {
    return (void*)((uintptr_t)this + 0x5d0b0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateMachine_6C62958A48B1D7F8A3E905A68CCC5B39() {
    return (void*)((uintptr_t)this + 0x473e8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_6CFB10CE4758D14D50CE6E9A9E9E2CCA() {
    return (void*)((uintptr_t)this + 0x474c8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimMatcherGraphNode_587BDC7441318C9D26F996BA6DAF21AA() {
    return (void*)((uintptr_t)this + 0x47510);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_FB68339B4EBAC9669581B287901E3D2C() {
    return (void*)((uintptr_t)this + 0x516b8);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagCineStumbleWalk() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e49d + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_zTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e388 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e388 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_TopologyBumperProximity() {
    return *(float*)((uintptr_t)this + 0x6e424);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimMatcherGraphNode_ACCDA2C74B354772E13FDE8DBE5FFAED() {
    return (void*)((uintptr_t)this + 0x51700);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_BF94281542A34B984C805EBFF30EF7DC() {
    return (void*)((uintptr_t)this + 0x5b8a8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_26573FE946CF5E5944153DA9CA5A5D39() {
    return (void*)((uintptr_t)this + 0x5b9f8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_7C6F13FC44A3E544BFED388C146F4593() {
    return (void*)((uintptr_t)this + 0x5bad8);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_combineCurveValue() {
    return *(float*)((uintptr_t)this + 0x6e354);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_Heal() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e444 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_1F2AA1694C233A6577AFF589D32BD12F() {
    return (void*)((uintptr_t)this + 0x5bcd8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_975862314B629FB3ED380799A1C436E8() {
    return (void*)((uintptr_t)this + 0x5bda8);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsWorldMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4cd + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_0533C33B4003A80B2E07628E1F0B5AC5() {
    return (void*)((uintptr_t)this + 0x5be50);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_YawWorld() {
    return *(float*)((uintptr_t)this + 0x6e370);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_StateResult_817E55FF447F7CC8AC4A0EB799031C62() {
    return (void*)((uintptr_t)this + 0x5bef8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_19F87A884868580AC2915A818734A759() {
    return (void*)((uintptr_t)this + 0x6c4f8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_3CB8C9B84BACA95901DE049421653DEB() {
    return (void*)((uintptr_t)this + 0x5c020);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_6EB752FB4EF947CEAADFACB0BB7395AF() {
    return (void*)((uintptr_t)this + 0x5c410);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_FullbodySaberAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e385 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e385 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_3F6D9F384E41BAEEA3E2538147A55022() {
    return (void*)((uintptr_t)this + 0x5c458);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_37F29A2041561E027E0AFCB890DD238E() {
    return (void*)((uintptr_t)this + 0x6dc18);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_D17DE7CC4F30C44729EC1BAD708D38A1() {
    return (void*)((uintptr_t)this + 0x5c500);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_isInSyncedOrCineAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4a7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4a7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_A66298204660FCD7F1DF98B8EC6D8A56() {
    return (void*)((uintptr_t)this + 0x5c650);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_BaseNav(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e38f + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e38f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_4B37435D47424465DCC34EB10645F4E1() {
    return (void*)((uintptr_t)this + 0x5c698);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_43A3812C4AE9DC9EF9CC2297D5184EF1() {
    return (void*)((uintptr_t)this + 0x5c778);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_B2B0C3EF45CFA5D0E3E65CB759655BAE() {
    return (void*)((uintptr_t)this + 0x5c8a0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_Slide() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e38a + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_B389975640F1DECD6D37EE8D55402301() {
    return (void*)((uintptr_t)this + 0x5cdc8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_033FBFEF459DC4D579E367A2A167F87B() {
    return (void*)((uintptr_t)this + 0x5cee0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_195B2D3B4858DEB231618BA8C065BB6B() {
    return (void*)((uintptr_t)this + 0x5cf28);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_C0DABC62421006A2F742F5B6F8DB7575() {
    return (void*)((uintptr_t)this + 0x5cf98);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_HalfWayProgression() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e570 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_000A8FDF469291A9566D78946623A187() {
    return (void*)((uintptr_t)this + 0x5d248);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_A9D430554D80F22B1EC3879AF39B073B() {
    return (void*)((uintptr_t)this + 0x5d290);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTag_ForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e48c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e48c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_LeftWallTime() {
    return *(float*)((uintptr_t)this + 0x6e368);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_FallAttack() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e435 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_55432B194C2371362E8AD5B4FFBFA6D6() {
    return (void*)((uintptr_t)this + 0x5d300);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_2FACF09E445410115A6A7194C6F106A6() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_8E891AE94A9FBAC5478D0098B0E3F2AF() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_FD34E2A54B06F5EC12595EACB5DD288E() {
    return (void*)((uintptr_t)this + 0x5d400);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_A39FAC0C4AB6ABC6AB018195132C15FC() {
    return (void*)((uintptr_t)this + 0x69e18);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_4BCDB3594D4128D69F6B2D8D4AB34D63() {
    return (void*)((uintptr_t)this + 0x5d470);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SaberArmWindOrFlashlight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e564 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e564 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_8178204D42D0F50F424DC480E41B3104() {
    return (void*)((uintptr_t)this + 0x5d4b8);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_UseClimbAimOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e471 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_7E579CBE49B766632D1952B42A702636() {
    return (void*)((uintptr_t)this + 0x5d5e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_6BA4E2784EF8B8F57D46068CDBBF5BFF() {
    return (void*)((uintptr_t)this + 0x5d6c0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_774E0C5346E347195363E6AEE192DC9C() {
    return (void*)((uintptr_t)this + 0x6a430);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_AB2BD55248D60B801E766BA0FC9EE4A9() {
    return (void*)((uintptr_t)this + 0x5d750);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_isSlideLand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_95540FA04552CC45CA4BD19972DD5958() {
    return (void*)((uintptr_t)this + 0x5d7e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_8D92A9154698915903F842A0BC4D1F6C() {
    return (void*)((uintptr_t)this + 0x5d828);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_HalfWayProgression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e570 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_FEF280AA4D8199B2E396379130073820() {
    return (void*)((uintptr_t)this + 0x5d8b8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_567F6B694CA71292A60E95818EF0BE4A() {
    return (void*)((uintptr_t)this + 0x5d948);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_UseClimbAimOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e471 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e471 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_EA5F41E142C63043017859AC7F03A89C() {
    return (void*)((uintptr_t)this + 0x5d990);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_1705FBA041DBA9059F8F40AE94371C15() {
    return (void*)((uintptr_t)this + 0x5daa8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_EED9CB0C40CAD851C3E410A1F1798CA7() {
    return (void*)((uintptr_t)this + 0x6c618);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_C7BFBE084FD64217175DF6865453EE1A() {
    return (void*)((uintptr_t)this + 0x5db38);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_0B77FC724A8942F3A167DEB2D8904A84() {
    return (void*)((uintptr_t)this + 0x5dd90);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_UseLedgeAimOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e46c + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_4191F5204F9F029A8EE1E1A86D693BDA() {
    return (void*)((uintptr_t)this + 0x5dea8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SaberArmSlopeOrLedge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e565 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e565 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_0A5D569E492B7F44FF16338799841BFD() {
    return (void*)((uintptr_t)this + 0x5df98);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_42B2CC7040F4223B26EE5C936C7CB759() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_CBDCF90F4E7604D85EC3CEBC5F7D86E7() {
    return (void*)((uintptr_t)this + 0x5e008);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::animNotify_holsterJiggleOn() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::SaberStance() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_AAA6E15841C3B6F0F9F76D8D38EDC93C() {
    return (void*)((uintptr_t)this + 0x5e050);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_ADBF98CD4AB516E545EAE090D26B10BC() {
    return (void*)((uintptr_t)this + 0x5e1c8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_55F944004C242AA4A11AE392D0E1D9DA() {
    return (void*)((uintptr_t)this + 0x5e318);
}
int32_t& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagContextualIndex() {
    return *(int32_t*)((uintptr_t)this + 0x6e534);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_6FED68484C4449F06AD8C18D9A44111F() {
    return (void*)((uintptr_t)this + 0x5e3d0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_AnimDynamics_A7FB4532404E15454BC163B8F88C6E57() {
    return (void*)((uintptr_t)this + 0x5e7c0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_92E5CDA44A6A7392E96118B8B62D4B7E() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsAnimMatcherGraphNode_93A0DCD54E4881DA5399D19825DC5324() {
    return (void*)((uintptr_t)this + 0x5ef48);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_5D129418489AE194DF3D37BEC974DF92() {
    return (void*)((uintptr_t)this + 0x690f0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_UsePOIAimOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e579 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_FDCC1FCD46F07DA986D14C9BB04AFFC4() {
    return (void*)((uintptr_t)this + 0x691d0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_NewVar_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e582 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_88A9A9094D9D76AB6F5F0889EDE7802B() {
    return (void*)((uintptr_t)this + 0x69278);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_ECC0BE8542F0C295233BAC8CC20C911D() {
    return (void*)((uintptr_t)this + 0x69320);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TwoWayBlend_615934D041FBA7953E69758B7EE6746E() {
    return (void*)((uintptr_t)this + 0x693f0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ComponentToLocalSpace_E8F14FE646D7090C273133931236006F() {
    return (void*)((uintptr_t)this + 0x694e8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_AC2B9B4B4C0C414EF03253B8DF607ED1() {
    return (void*)((uintptr_t)this + 0x6ca38);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_LocalToComponentSpace_A4D4F9A14D759314E7AC248465C5C918() {
    return (void*)((uintptr_t)this + 0x69528);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_E2A203584C5B0D00ED5070A8C94D5BD6() {
    return (void*)((uintptr_t)this + 0x69568);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_D89B9EBF4B805B0E1676C89840D527A2() {
    return (void*)((uintptr_t)this + 0x69750);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_31DE0D0E4A99A9141E2C8BB6EDB6A646() {
    return (void*)((uintptr_t)this + 0x69868);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_B9DD3BB641458040B2C0D3870FFE1120() {
    return (void*)((uintptr_t)this + 0x69958);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_Sheathing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e38e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e38e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_TwoBoneIK_3113140F4A63C2B9CDE3D4938F4E2105() {
    return (void*)((uintptr_t)this + 0x6df60);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_InputMagnitude() {
    return *(float*)((uintptr_t)this + 0x6e2ec);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_3D1D89EB4142D2C40D0D8993B14F6C8D() {
    return (void*)((uintptr_t)this + 0x699a0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_2A595B6044BBEEE4C76901935027B174() {
    return (void*)((uintptr_t)this + 0x69a80);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_F116A17F4CD563CCAD8984AD10D28313() {
    return (void*)((uintptr_t)this + 0x69b28);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByInt_C58A7A1745539004FAA7ECB8DF111872() {
    return (void*)((uintptr_t)this + 0x69bd0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_GroundInclinationRanges() {
    return (void*)((uintptr_t)this + 0x6e288);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_842DA14F425D989ED52A2E8FC6FEAB67() {
    return (void*)((uintptr_t)this + 0x69d70);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_C05779314914A7124979E5B6DDDE4D56() {
    return (void*)((uintptr_t)this + 0x69f50);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_837762414857C618EF3E32AC9703B6FA() {
    return (void*)((uintptr_t)this + 0x6a1c0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_4428E3544056B93FACB9EB9F2449ED2E() {
    return (void*)((uintptr_t)this + 0x6c738);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_nonHostileTargeted() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e439 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_A92763C9436B6446969E1AA0161BB9BA() {
    return (void*)((uintptr_t)this + 0x6a2f8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_5179080D4AB4B706E7E177B6E38CEB74() {
    return (void*)((uintptr_t)this + 0x6a568);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_SheathingNAV() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e391 + 0)) & 1 != 0;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_HeroCharBP() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x6e240);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_FD31F3DE4B6EC5911671958B1D08F5E3() {
    return (void*)((uintptr_t)this + 0x6a6a0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_AnimDynamics_2054634945F374E3E6EFFB96753A19D7() {
    return (void*)((uintptr_t)this + 0x6a910);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_AnimDynamics_620CE77448CA81B7B1235FA18B223648() {
    return (void*)((uintptr_t)this + 0x6acb0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_D5D917D54AAF4D0B2C21268A7C528494() {
    return (void*)((uintptr_t)this + 0x6b050);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_RotationOffsetBlendSpace_E96494B7466703296579C0BEF4D99C03() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ModifyBone_6218F7C54B4BFC1CF5843A9ADE99DDF6() {
    return (void*)((uintptr_t)this + 0x6b188);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BoneDrivenController_2F0773A34D1803C2E8EA45848DE6C625() {
    return (void*)((uintptr_t)this + 0x6b2c0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Foot_R() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e30c + 0)) & 1 != 0;
}
_Script_RsTechRT::RsActorMotion*& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsMotionModel() {
    return *(_Script_RsTechRT::RsActorMotion**)((uintptr_t)this + 0x6e248);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_WallOnLeft(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e37d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e37d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_3A2E06254B542FA1FC3019A68186297B() {
    return (void*)((uintptr_t)this + 0x6b698);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_8EA8F88C484CC9A7704067A55A685706() {
    return (void*)((uintptr_t)this + 0x6b7c0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RsLayeredBlendGraphNode_94737753485AF9988F936299DACDCBBE() {
    return (void*)((uintptr_t)this + 0x6b8f0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_LedgeShimmyDirection() {
    return (void*)((uintptr_t)this + 0x6e396);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_storeYaw() {
    return *(float*)((uintptr_t)this + 0x6e33c);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_RotationOffsetBlendSpace_FA197329460C22841AB2639995360342() {
    return (void*)((uintptr_t)this + 0x6bd30);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendSpacePlayer_1AACD5E44105F132237CEFBF5CB8B46D() {
    return (void*)((uintptr_t)this + 0x6bfe8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_27C96312408EFE8C4347BBA4F925D225() {
    return (void*)((uintptr_t)this + 0x6c118);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_FA4C5239439806FFD401C1B0CA015A68() {
    return (void*)((uintptr_t)this + 0x6c1f0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_F0FDD8BA45C1E51F03693AABF60403B4() {
    return (void*)((uintptr_t)this + 0x6c2c0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_9DE200AC4CE3D25496B263BDB55704AD() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_4617860F46C1870CE4636D918F66B3AF() {
    return (void*)((uintptr_t)this + 0x6c3d8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_1ED0A197449AE0B7FEAF9990829DA166() {
    return (void*)((uintptr_t)this + 0x6c420);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_822E08A548E95569CE773EB08F94A861() {
    return (void*)((uintptr_t)this + 0x6c540);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_NewVar_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e582 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e582 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_2656474A4C250E3E5445289503C2BA70() {
    return (void*)((uintptr_t)this + 0x6c5d0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ComponentToLocalSpace_66355F7C49D3B038059DE99C1F729E15() {
    return (void*)((uintptr_t)this + 0x6cf90);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_4C34EB2A4BC12EA645C3D3A4D300A506() {
    return (void*)((uintptr_t)this + 0x6c660);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_3CB21C3E4F82491216A3579713C77117() {
    return (void*)((uintptr_t)this + 0x6c808);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::ExecuteUbergraph_AB_Hero(int32_t EntryPoint) {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_A20F8FB44EC37106FBA10AB82FA9576B() {
    return (void*)((uintptr_t)this + 0x6c850);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_C7ECC9034EB93A9C39A7B59473F82DDA() {
    return (void*)((uintptr_t)this + 0x6c968);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_Slot_359A4A2E4FDC322ABB0BE2A3E0D594E9() {
    return (void*)((uintptr_t)this + 0x6cb50);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SaveCachedPose_766F3ACC4E3201F8BF803384D6C798A4() {
    return (void*)((uintptr_t)this + 0x6cc08);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_LocalToComponentSpace_7D54CD0C459C8D217E8003834072D475() {
    return (void*)((uintptr_t)this + 0x6cf50);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Hero_Static(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e392 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e392 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_SequencePlayer_783A8EE54F4AB6898E0E688F3384D0FF() {
    return (void*)((uintptr_t)this + 0x6d220);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_BlendListByBool_0F76C8B640A335FF7950FF85A1198E36() {
    return (void*)((uintptr_t)this + 0x6d2c8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_AnimDynamics_195E913D43BB8B1052A8BEA35D250AAF() {
    return (void*)((uintptr_t)this + 0x6d3a0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_SteepSlopeOrLedge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e38b + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e38b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_AnimDynamics_E7514F8C4A4840856AB07D89E6304871() {
    return (void*)((uintptr_t)this + 0x6d740);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Hero_Nav(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e393 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e393 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_SaberStance() {
    return *(int32_t*)((uintptr_t)this + 0x6e458);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_UseCachedPose_A714A4CD4CC903CC38BDFDB267A10764() {
    return (void*)((uintptr_t)this + 0x6df10);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_LocalToComponentSpace_EAB5AB894AFF70A5FB8295BD95394FBF() {
    return (void*)((uintptr_t)this + 0x6e1b0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_PreDiveEnter() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimGraphNode_ComponentToLocalSpace_7B5FEFB34AC7AC77EB2C81822B1CCD32() {
    return (void*)((uintptr_t)this + 0x6e1f0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsAir() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e50c + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_SheathingStatic() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e390 + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x6e230);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RunDistance() {
    return *(float*)((uintptr_t)this + 0x6e258);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_Slide(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e38a + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e38a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_WalkDistance() {
    return *(float*)((uintptr_t)this + 0x6e268);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_GroundSpeedMap() {
    return (void*)((uintptr_t)this + 0x6e270);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Hero_CombatPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e3a1 + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_WallRunElapsedTime() {
    return *(float*)((uintptr_t)this + 0x6e44c);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_JogDistance() {
    return *(float*)((uintptr_t)this + 0x6e280);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_WalkFastDistance() {
    return *(float*)((uintptr_t)this + 0x6e29c);
}
_Script_Engine::DecalComponent*& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_footprint() {
    return *(_Script_Engine::DecalComponent**)((uintptr_t)this + 0x6e2a8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsCrouching_Ledge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e395 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e395 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Stairs() {
    return (void*)((uintptr_t)this + 0x6e478);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_footOffset() {
    return *(float*)((uintptr_t)this + 0x6e2e4);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_InputMagnitudeDampened() {
    return *(float*)((uintptr_t)this + 0x6e2f0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Foot_R(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e30c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e30c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_LookatTarget() {
    return (void*)((uintptr_t)this + 0x6e310);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_lookAtAlpha() {
    return *(float*)((uintptr_t)this + 0x6e31c);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsBlockInputHeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e490 + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_footAlpha() {
    return *(float*)((uintptr_t)this + 0x6e320);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_minHip() {
    return *(float*)((uintptr_t)this + 0x6e324);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsInAMTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e474 + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_maxHip() {
    return *(float*)((uintptr_t)this + 0x6e328);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagUpsideDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4ca + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4ca + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_floorContact() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e32c + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_InputDirection() {
    return (void*)((uintptr_t)this + 0x6e330);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_vestJiggle() {
    return *(float*)((uintptr_t)this + 0x6e344);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_blendSwordPose() {
    return *(float*)((uintptr_t)this + 0x6e348);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_holsterJiggle() {
    return *(float*)((uintptr_t)this + 0x6e34c);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_OLD_MOTION() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e350 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_FullbodySaber(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e3b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e3b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeSwingTimeToImpactNormalized() {
    return *(float*)((uintptr_t)this + 0x6e498);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_DoubleJumpAnimTimeRemainingCut() {
    return *(float*)((uintptr_t)this + 0x6e35c);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_FallingFromWall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e472 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e472 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_CheckingDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e360 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeIsRopeSwingIdleForAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e49c + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_StoreYawUnclamped() {
    return *(float*)((uintptr_t)this + 0x6e364);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AimOffsetON() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e36c + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsHeadOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e36d + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsHeadOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e36d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e36d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Hero_Alert(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e394 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e394 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsEdgeGrab(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e36e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e36e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_LeanPast() {
    return *(float*)((uintptr_t)this + 0x6e374);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_LeanCurrent() {
    return *(float*)((uintptr_t)this + 0x6e378);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_WallOnRight() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e37c + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagScriptedAimOffsetSymmetrical(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4c9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4c9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_WallOnRight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e37c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e37c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_WallOnLeft() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e37d + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_HeroMeshHip_RotX() {
    return *(float*)((uintptr_t)this + 0x6e450);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_LedgePullupAngle() {
    return *(float*)((uintptr_t)this + 0x6e380);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_FullbodySaberAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e385 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_windON(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e386 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e386 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_AirOrBalanceBeam() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e389 + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RopeSwingIdleSwingPhaseThreshold() {
    return *(float*)((uintptr_t)this + 0x6e464);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_SteepSlopeOrLedge() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e38b + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsWallRun() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e38d + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Hero_Static() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e392 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Hero_Alert() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e394 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Ledge_ReturnToIdle() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsCrouching_Ledge() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e395 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsCrouching_Land() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e3a0 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsCrouching_Land(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_HeroStateQueries() {
    return (void*)((uintptr_t)this + 0x6e3a2);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_FullbodySaber() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e3b1 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsWindNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e3b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e3b2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_CombatToAlertTimer() {
    return *(float*)((uintptr_t)this + 0x6e3c0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_stealthPercent() {
    return *(float*)((uintptr_t)this + 0x6e3c4);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_EnteredSwim() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e3c8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_EnteredSwim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e3c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e3c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_InputDirectionDampened() {
    return (void*)((uintptr_t)this + 0x6e3cc);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_PositionDelta() {
    return (void*)((uintptr_t)this + 0x6e3d8);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_PositionDeltaDampened() {
    return (void*)((uintptr_t)this + 0x6e3e4);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_YInput() {
    return *(float*)((uintptr_t)this + 0x6e504);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_PrevLocation() {
    return (void*)((uintptr_t)this + 0x6e3f0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Location() {
    return (void*)((uintptr_t)this + 0x6e3fc);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_PlayerForwardVector() {
    return (void*)((uintptr_t)this + 0x6e408);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ForwardSpeed() {
    return *(float*)((uintptr_t)this + 0x6e414);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SlideJump() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e434 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SlideJump(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e434 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e434 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsReactionsSlotActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e520 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e520 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_FlashlightActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e436 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_FlashlightActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e436 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e436 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeGroundFaceForward() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e514 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_FlashlightInZone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e437 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e437 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_CombatPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e438 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e438 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_nonHostileTargeted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e439 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e439 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ledgeMode() {
    return (void*)((uintptr_t)this + 0x6e43a);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_ForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e43b + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_ForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e43b + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e43b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagForcePullHold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e560 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e560 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_ForcePush() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e43c + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_ForcePush(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e43c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e43c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_Wallrun() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e43e + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_Wallrun(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e43e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e43e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_LightsaberCharge() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e43f + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_LightsaberCharge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e43f + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e43f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_DoubleJumpAscend() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e440 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_BasicAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e441 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e441 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SaberArmWallrun(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e566 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e566 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_HeadWind(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e442 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e442 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Motion_TailWind() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e443 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_TailWind(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e443 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e443 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_Motion_Heal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e444 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e444 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_8D73A324403A61F04576B699412B5DB4() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_StaffInHand() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e45c + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_DEBUG_StartsandStops() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e45d + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_DEBUG_StartsandStops(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e45d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e45d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_RopeSwingIdleVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x6e468);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_UseLedgeAimOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e46c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e46c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_zTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e46d + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::IsRopeSwingIdleForAnim(bool& IsSwingIdle) {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_zTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e46d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e46d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_DEBUG_WallInteraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e46e + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_DEBUG_WallInteraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e46e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e46e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_isClimb() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e470 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_isClimb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e470 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e470 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_FallingFromWall() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e472 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AnimDrivenAimOffsetOff() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e473 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsInAMTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e474 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e474 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_00E134C14D25FF24E1407DAE10A57584() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SL_TwinInHand() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e475 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_79E638384E70D9D5C5AF13A0D67297AC() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SL_TwinInHand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e475 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e475 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_CamNotLookingBehind() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e476 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_isPreSlideEnter() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e571 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_CamNotLookingBehind(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e476 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e476 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_GPMFIX() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e488 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_GPMFIX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_isWallPress() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e489 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_WasInZtarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e48a + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_WasInZtarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e48a + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e48a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsWallRunFalling() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e48b + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsWallRunFalling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e48b + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e48b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTag_ForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e48c + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagForceTelekinesis() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e48d + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_wasInSyncedOrCineAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e580 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagForceTelekinesis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e48d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e48d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagForceSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e48e + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagForceSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e48e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e48e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagRopeStrafe() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e48f + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagRopeStrafe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e48f + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e48f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsBlockInputHeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e490 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e490 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeIsSwingingForward() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e491 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeGetHandPosition() {
    return (void*)((uintptr_t)this + 0x6e492);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeGetState() {
    return (void*)((uintptr_t)this + 0x6e493);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_ropeSwingImpactFound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e495 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e495 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_ropeIsRopeSwingIdleForAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e49c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e49c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagCineStumbleWalk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e49d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e49d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_GetSpineCRotationY() {
    return *(float*)((uintptr_t)this + 0x6e4a0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagContextual() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4a4 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Zipline_FinishEntry() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_ECC0BE8542F0C295233BAC8CC20C911D() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagContextual(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Climb_BeginPivot() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagGrabbedPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4a5 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagGrabbedPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4a5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4a5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagFreeFall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4a6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4a6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Contextual_BS_Y_Value() {
    return *(float*)((uintptr_t)this + 0x6e56c);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsEvading() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4a8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_C24C2AA543988FCB75C8DEBCD44A033F() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsEvading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagTelekinesis() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4a9 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagTelekinesis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsAttacking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4aa + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4aa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Hero_IdleTracker() {
    return *(int32_t*)((uintptr_t)this + 0x6e4b8);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IGHandonHips(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_7C6F13FC44A3E544BFED388C146F4593() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IGRelaxed() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4bd + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IGRelaxed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4bd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IGStanceAdjust() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4be + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsLayeredBlendGraphNode_3DA5B3F245B2CC67F22142B9B56A8B61() {
    return;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AM_Progression() {
    return *(float*)((uintptr_t)this + 0x6e4c0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_TimeSprinting() {
    return *(float*)((uintptr_t)this + 0x6e4c4);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_inMVGround() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4c8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_B1E5D7DE4FECC6BAF0E3519F2A96D2C0() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagScriptedAimOffsetSymmetrical() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4c9 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagUpsideDown() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4ca + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_A42B2E6E4391DC5BADE167B5FDC80E20() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_isLandAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4cb + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_isLandAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4cb + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4cb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsEvadeRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4cc + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsWorldMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4cd + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4cd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_MantisWalk() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4ce + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_MantisWalk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4ce + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4ce + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_BD1VestMotion() {
    return (void*)((uintptr_t)this + 0x6e4d0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsUnstable() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e500 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsUnstable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e500 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e500 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_2B61277040AD14E006F3F7AE8AC7A5FB() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_WasInCombatPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e501 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e501 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_XInput() {
    return *(float*)((uintptr_t)this + 0x6e508);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_D0131E5346B96B6B83E24FA20AF21595() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_2923151646DCE8E4D4732D97BB1EEFE4() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagWasInAir() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e50d + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagWasInAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e50d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e50d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsInHub(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e50e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e50e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_UseIdleAimOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e50f + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_notify_LedgePullupComplete() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_UseNAVSymmetricalAimOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e510 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_UseNAVSymmetricalAimOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e510 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e510 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_notify_Hero_AimOffsetON() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_AAA6E15841C3B6F0F9F76D8D38EDC93C() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_UseCheckingBehindAimOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e511 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_UseCheckingBehindAimOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e511 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e511 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_CA06DC19413CAB21CBD65FAF5B17904E() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_UseFlashlightAimOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e512 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e512 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagSaberThrowLeft() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e513 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagSaberThrowLeft(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e513 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e513 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_ropeGroundFaceForward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e514 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e514 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_isAnySlotActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e51c + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_ED42389349BDB9E675F27C928D71EC2D() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsSaberSlotActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e51e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e51e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Climb_BeginIdle() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SaberArmBlock() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e567 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IsCombatSlotActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e51f + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e51f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IsReactionsSlotActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e520 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_RotationOffsetBlendSpace_7547339344E3D5488202FF9DEC773EF8() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SlotAnimShouldCrouch() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e521 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SlotAnimShouldCrouch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e521 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e521 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_Contextual_BS_X_Value() {
    return *(float*)((uintptr_t)this + 0x6e530);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ropeAttachedToShortCut() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e539 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_ropeAttachedToShortCut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e539 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e539 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::DoubleJump_DisableNav() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_CF2B9AED42E0D411E48F5ABF2FF7174E() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsYoungCal() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e53a + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IGHairFix(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e53b + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e53b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IGStretch() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e53c + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_Rope_OnEnter() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IGStretch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e53c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e53c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagForcePullHold() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e560 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::animNotify_holsterJiggleOff() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SaberArmBaseNav() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e561 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SaberArmAirOrBalanceBeam() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e562 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SaberArmSlide() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e563 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_RotationOffsetBlendSpace_5DB0A600404B44C5CAA38DBC6787384D() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SaberArmSlide(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e563 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e563 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_SaberArmWindOrFlashlight() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e564 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::CheckingDirectionWhileMoving() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_SaberArmBlock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e567 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e567 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_ForcePowerTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e568 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_ForcePowerTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e568 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e568 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_isPreSlideEnter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e571 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e571 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_A21A743B4453A1F66CE4E88C539AC2A4() {
    return;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_CautiousWalkAlpha() {
    return *(float*)((uintptr_t)this + 0x6e574);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_isPreDiveEnter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e578 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e578 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_IGYoungBored() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e57a + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_LayeredBlendAlphaMultiplier() {
    return *(float*)((uintptr_t)this + 0x6e57c);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_RotationOffsetBlendSpace_CC9FA8FA487E6B3505D5B59E8152669E() {
    return;
}
bool _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_AtrTagIsUnsteadyIdle() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e581 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_AtrTagIsUnsteadyIdle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e581 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e581 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_HeroButtonPressAlpha() {
    return *(float*)((uintptr_t)this + 0x6e584);
}
void* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::get_HeroButtonPressVector() {
    return (void*)((uintptr_t)this + 0x6e588);
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_D761300A4BF240720A95C0BFEEEF82D8() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::set_IGHairMess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e594 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e594 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Characters/Hero/Logic/AB_Hero.AB_Hero_C");
    return result;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::CacheMotionParms() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::WindValues() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::BlueprintUpdateAnimation(float DeltaTimeX) {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::combineCurve(void* inputCurve1, void* inputCurve2, void* outputCurve, bool Debug, bool reverseInputCurve1, float& combinedValue) {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::HorizontalSpeed(float& Speed) {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_E78775BB41E0F009E9772AA64B06CA0E() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_86ABF9564B701EC75260E7802192EB89() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_F20354CC4C8180540699E78B0E97D821() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Ledge_PullUp_Committed() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TwoWayBlend_371BBBD24C634CB2FFD711A76F2D8043() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_429277624BDF190A18DF62AC932FD8DE() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_BDD22C8F400B59ECC2B911855AB0AB2C() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_B9B7AD9B44E3CCF62674B59703DB71C2() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_AnimGraph_NOGPMFIX() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_C29C1CDA48771591C4EE98BEF32D94D0() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsLayeredBlendGraphNode_D46E674643F9A7849FBA7B839F8D57DD() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::OnGameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_StateResult_1ED61D7D4EEFC7B1E9BD588E9E5E287D() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_DCC557CA4699B7A63B7DDFA814E3922A() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_2848322A4A61762C468DA4A22866707D() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_4BCAB29E4247E0F03FB9F888E38E8944() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_3AEB51FB44F4DA4063063FA0D51D22F6() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_9FC7483F4E3604E622986E9C99556D6D() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Climb_Movement_DisallowRetargeting() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_E06ADE2A48667EAD83A5F8A086E6B564() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsAnimMatcherGraphNode_ACCDA2C74B354772E13FDE8DBE5FFAED() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsLayeredBlendGraphNode_26573FE946CF5E5944153DA9CA5A5D39() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Climb_Movement_DisallowCanceling() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_D1368B214CB384BCE5D08286C4DB30B6() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_1F2AA1694C233A6577AFF589D32BD12F() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsLayeredBlendGraphNode_D17DE7CC4F30C44729EC1BAD708D38A1() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_02885EE24F8CCC8A41606AB86E09EC1A() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_PreSlideEnter() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_A39FAC0C4AB6ABC6AB018195132C15FC() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_C05779314914A7124979E5B6DDDE4D56() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_3B63DBD5450E7B1CCB5CFFB6652F07D2() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_837762414857C618EF3E32AC9703B6FA() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_774E0C5346E347195363E6AEE192DC9C() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_FD31F3DE4B6EC5911671958B1D08F5E3() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_157E24EC461959D0CE7ED2985428018A() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_D5D917D54AAF4D0B2C21268A7C528494() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_6218F7C54B4BFC1CF5843A9ADE99DDF6() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BoneDrivenController_2F0773A34D1803C2E8EA45848DE6C625() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_F733999143551183961DB7BBF62F65A5() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_24B988144B567400BA0298BDB914A7A0() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_8EA8F88C484CC9A7704067A55A685706() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_ModifyBone_CE47D11442DCBDDA7E2C90A9C167CD41() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_369A6EEE423305E6DF05D0A4D008834B() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_E2C9AB594B2C5023360EEABD9A4912B9() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsAnimMatcherGraphNode_28C5B8284D07BB594C17D29BAFA191C6() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_0CE29FB243021271A103B1AE47EF5C3B() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_81042A1B4A0C67F3AC3238B0BDE2C63F() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_B3E9D4014A440E06A71240BDEEF713B6() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_85A3C4FC484725C63929AA98C4DE85D7() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_AEE2BD704ECAB16215B1E291847C7274() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_20087833470BD58FE23769861BE619D0() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_FCD947794C0166234493FCB56F5E30A4() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_D744CE9641B1F165F9993AAEF42590D1() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_82889FC241AA0B27506F77AC0A398DDA() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_BB07FBFB47389F5D31657DA3FC139684() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_SequencePlayer_4150A9AC4170229B56E8E3BB7102CE81() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_TransitionResult_E507549C4EE03C12039204803CFC4586() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsAnimSynchronizerGraphNode_41AA2DE44061AA922A476FB0BE0531C5() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_notify_Hero_AimOffsetOFF() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_9E5E3A2A4E5DE2A1FD1B8E8627F3077B() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::NavTransition_UpdateProgression(float Progression) {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Ledge_PullUpComplete() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Climb_Movement_AllowRetargeting() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Climb_Movement_AllowCanceling() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendListByBool_9159FAD44AC0CE23ECAD97952A6D8515() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::Ledge_BeginIdle() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_AnimGraph_GPMFIX() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::LandFX_Impact() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::ClearForcePowerTransition() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_ForcePowerCombatPose() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::SlideStateExit(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::AnimNotify_DiveExit() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::ClearIsPreDiveEnter() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsLayeredBlendGraphNode_20F1D02A41B7E13A27FF938B99A2E383() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_BlendSpacePlayer_F5E1EBAB4DFD62085692789F7736928D() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_AnimGraphNode_RotationOffsetBlendSpace_8857BEE24329B1E64C1313B5B38D35FC() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_RsAnimMatcherGraphNode_44AF0B8443D540A2E189DABB39EFD1AF() {
    return;
}
