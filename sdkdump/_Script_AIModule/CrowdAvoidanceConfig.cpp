#include "..\FUObjectArray.hpp"
#include "CrowdAvoidanceConfig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::CrowdAvoidanceConfig::get_AdaptiveDivisions() {
    return (void*)((uintptr_t)this + 0x19);
}
float& _Script_AIModule::CrowdAvoidanceConfig::get_SideBiasWeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_AIModule::CrowdAvoidanceConfig::get_VelocityBias() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_AIModule::CrowdAvoidanceConfig::get_DesiredVelocityWeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AIModule::CrowdAvoidanceConfig::get_CurrentVelocityWeight() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_AIModule::CrowdAvoidanceConfig::get_ImpactTimeWeight() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_AIModule::CrowdAvoidanceConfig::get_CustomPatternIdx() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_AIModule::CrowdAvoidanceConfig::get_AdaptiveDepth() {
    return (void*)((uintptr_t)this + 0x1b);
}
float& _Script_AIModule::CrowdAvoidanceConfig::get_ImpactTimeRange() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_AIModule::CrowdAvoidanceConfig::get_AdaptiveRings() {
    return (void*)((uintptr_t)this + 0x1a);
}
_Script_CoreUObject::Class* _Script_AIModule::CrowdAvoidanceConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.CrowdAvoidanceConfig");
    return result;
}
