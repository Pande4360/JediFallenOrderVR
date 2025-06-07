#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator_Cone.hpp"
#include "EnvQueryGenerator_ProjectedPoints.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryGenerator_Cone::get_Range() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_AIModule::EnvQueryGenerator_Cone::get_AlignedPointsDistance() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_Cone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_Cone");
    return result;
}
void _Script_AIModule::EnvQueryGenerator_Cone::set_bIncludeContextLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x148 + 0);
    *(uint8_t*)((uintptr_t)this + 0x148 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::EnvQueryGenerator_Cone::get_bIncludeContextLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x148 + 0)) & 1 != 0;
}
void* _Script_AIModule::EnvQueryGenerator_Cone::get_ConeDegrees() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_AIModule::EnvQueryGenerator_Cone::get_CenterActor() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_AIModule::EnvQueryGenerator_Cone::get_AngleStep() {
    return (void*)((uintptr_t)this + 0xe0);
}
