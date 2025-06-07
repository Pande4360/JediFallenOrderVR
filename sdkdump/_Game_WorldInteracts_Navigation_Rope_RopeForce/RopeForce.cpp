#include "..\FUObjectArray.hpp"
#include "RopeForce.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::get_DebugDraw_22_0877CCD047884F326B762CBE241362A7() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::get_ForceDirection_2_53B094CF47BFE05DECC0C8A7E793DAFF() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::get_ForceMagnitude_5_859848E74352FFD3C9EAE29DEB985B7F() {
    return *(float*)((uintptr_t)this + 0xc);
}
int32_t& _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::get_ApplyToParticleIndex_12_CDAD1CA243EC8F365EF6DEA466EC1D21() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::get_AffectedParticlesRadius_20_27CEFDA54FC7E943DAB08681B066D425() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
float& _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::get_INTERNAL_InitialDuration_28_BDCDE2C74CE71098246B668CCAA09708() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::get_AffectedParticlesDropoff_19_17DA74364594C06241261AB1676714C7() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::get_Duration_16_4C663D334A4DC01404A2CD915705194B() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::get_ScaleForceWithTimeRatio_30_DF12AEDD41581E408635A59E2E94ED64() {
    return *(float*)((uintptr_t)this + 0x20);
}
void _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::set_DebugDraw_22_0877CCD047884F326B762CBE241362A7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/WorldInteracts/Navigation/Rope/RopeForce.RopeForce");
    return result;
}
