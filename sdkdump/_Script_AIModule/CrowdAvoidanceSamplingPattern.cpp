#include "..\FUObjectArray.hpp"
#include "CrowdAvoidanceSamplingPattern.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::CrowdAvoidanceSamplingPattern::get_Angles() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AIModule::CrowdAvoidanceSamplingPattern::get_Radii() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AIModule::CrowdAvoidanceSamplingPattern::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.CrowdAvoidanceSamplingPattern");
    return result;
}
