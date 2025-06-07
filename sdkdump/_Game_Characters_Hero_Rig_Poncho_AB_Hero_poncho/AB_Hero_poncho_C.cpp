#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_AB_Hero\AB_Hero_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "AB_Hero_poncho_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsTechRT\rsAnimInstance.hpp"
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::BlueprintInitializeAnimation() {
    return;
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x7a0);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_PoseDriver_C2B0D0324A2B0443D684D593DC750F46() {
    return (void*)((uintptr_t)this + 0xcb8);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_SaveCachedPose_4D8F86B1410EB06CD03C01AFCBC8B13B() {
    return (void*)((uintptr_t)this + 0x7a8);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_UseCachedPose_F4CA1DA14A7D8F1C2A15DCACB2EF3C89() {
    return (void*)((uintptr_t)this + 0x8c0);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_PoseDriver_F41F0618425053CB0D94C9AD999B1C0D() {
    return (void*)((uintptr_t)this + 0x908);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_PoseDriver_9B3F3D0C405D0C1A9ECECCAF78B57CD9() {
    return (void*)((uintptr_t)this + 0xe20);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_SequenceEvaluator_496AF84B4DB15451D5F5E09D5314C20C() {
    return (void*)((uintptr_t)this + 0x1790);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_RsLayeredBlendGraphNode_420A7E724043D1F2428AD4A72CF0EA3C() {
    return (void*)((uintptr_t)this + 0xa70);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_CopyPoseFromMesh_BD86CC8844F67084ED0389B5F033D025() {
    return (void*)((uintptr_t)this + 0x1660);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_PoseDriver_4DFF6D9D4232B307DF93699F1603C1A4() {
    return (void*)((uintptr_t)this + 0xb50);
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::set_isSteepSlope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1822 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1822 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_SequenceEvaluator_20D22FEF493CD6AB8E3101BAA1D91C7E() {
    return (void*)((uintptr_t)this + 0xf88);
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::ExecuteUbergraph_AB_Hero_poncho(int32_t EntryPoint) {
    return;
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_RsLayeredBlendGraphNode_7704998E44E3E9C5E084D8B7E7FBFE3D() {
    return (void*)((uintptr_t)this + 0x1000);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_AnimDynamics_43DB1D874BB1238CBC3BFF93059BBA2C() {
    return (void*)((uintptr_t)this + 0x10e0);
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_poncho_RsLayeredBlendGraphNode_420A7E724043D1F2428AD4A72CF0EA3C() {
    return;
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_LocalToComponentSpace_A90D3A024614CDB1BE6351B96D0B68C8() {
    return (void*)((uintptr_t)this + 0x1480);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_ComponentToLocalSpace_A7A742DB4D9D0ABF928DA795323FE3DD() {
    return (void*)((uintptr_t)this + 0x14c0);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_SequenceEvaluator_92600EF64ACE7138F1A894B62D493226() {
    return (void*)((uintptr_t)this + 0x1500);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_SequenceEvaluator_6FA00F714043213A1FE7D29CC9F2AF6A() {
    return (void*)((uintptr_t)this + 0x1578);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_Slot_C799043F49B3B5EF6DA750B1A36C1240() {
    return (void*)((uintptr_t)this + 0x15f0);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AnimGraphNode_Root_3916223E465ACB0E4B74EC8BA5AB7C17() {
    return (void*)((uintptr_t)this + 0x1748);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_HeroCharBP() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x1808);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_HeroStateQueries() {
    return (void*)((uintptr_t)this + 0x1810);
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_isLedge() {
    return (*(uint8_t*)((uintptr_t)this + 0x181f + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::set_isLedge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x181f + 0);
    *(uint8_t*)((uintptr_t)this + 0x181f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_isClimb() {
    return (*(uint8_t*)((uintptr_t)this + 0x1820 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::set_isClimb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1820 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1820 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_isAir() {
    return (*(uint8_t*)((uintptr_t)this + 0x1821 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::set_isAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1821 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1821 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_isSteepSlope() {
    return (*(uint8_t*)((uintptr_t)this + 0x1822 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_IsCocooned() {
    return (*(uint8_t*)((uintptr_t)this + 0x1823 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::set_IsCocooned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1823 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1823 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_Stairs() {
    return (void*)((uintptr_t)this + 0x1828);
}
_Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_AB_HeroREF() {
    return *(_Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C**)((uintptr_t)this + 0x1838);
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::get_debugBoolean() {
    return (*(uint8_t*)((uintptr_t)this + 0x1840 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::set_debugBoolean(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1840 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1840 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Characters/Hero/Rig/Poncho/AB_Hero_poncho.AB_Hero_poncho_C");
    return result;
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho::AB_Hero_poncho_C::BlueprintUpdateAnimation(float DeltaTimeX) {
    return;
}
