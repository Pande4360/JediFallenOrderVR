#include "..\FUObjectArray.hpp"
#include "SpotlightWithTarget_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SpotLight.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
float& _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_Target_Point_Spawn_Distance() {
    return *(float*)((uintptr_t)this + 0x380);
}
bool _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_UseTargetPoint_() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 1 != 0;
}
void _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::SetTargetTransformEqualToPrevious() {
    return;
}
void _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::set_UseTargetPoint_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_TargetPointMode() {
    return (void*)((uintptr_t)this + 0x385);
}
bool _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_LockTargetPointToLight_() {
    return (*(uint8_t*)((uintptr_t)this + 0x386 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshActor*& _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_LookAtActor() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x388);
}
void _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::set_LockTargetPointToLight_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x386 + 0);
    *(uint8_t*)((uintptr_t)this + 0x386 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_UseLookAtActor_() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
void _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::set_UseLookAtActor_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_TargetPoint() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_PreviousActorTransform() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_PreviousTargetPoint() {
    return (void*)((uintptr_t)this + 0x400);
}
void* _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_DebugLineColor() {
    return (void*)((uintptr_t)this + 0x430);
}
float& _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_Target_Point_Size() {
    return *(float*)((uintptr_t)this + 0x440);
}
void* _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_PreviousSpotlightTransform() {
    return (void*)((uintptr_t)this + 0x450);
}
bool _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_PreviousUseTargetPoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x480 + 0)) & 1 != 0;
}
void _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::set_PreviousUseTargetPoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x480 + 0);
    *(uint8_t*)((uintptr_t)this + 0x480 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_temp_TargetPoint() {
    return (void*)((uintptr_t)this + 0x484);
}
void* _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::get_NewVar_0() {
    return (void*)((uintptr_t)this + 0x490);
}
_Script_CoreUObject::Class* _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Models/TechArt/Lighting/SpotlightWithTarget_BP.SpotlightWithTarget_BP_C");
    return result;
}
void _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::NewFunction_0() {
    return;
}
void _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::InitializeTransforms() {
    return;
}
void _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP::SpotlightWithTarget_BP_C::UserConstructionScript() {
    return;
}
