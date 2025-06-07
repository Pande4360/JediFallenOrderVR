#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_KeepInCone.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::BTDecorator_KeepInCone::get_ConeHalfAngle() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_AIModule::BTDecorator_KeepInCone::get_ConeOrigin() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_AIModule::BTDecorator_KeepInCone::get_bUseSelfAsOrigin() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void* _Script_AIModule::BTDecorator_KeepInCone::get_Observed() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_AIModule::BTDecorator_KeepInCone::set_bUseSelfAsOrigin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::BTDecorator_KeepInCone::get_bUseSelfAsObserved() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 2 != 0;
}
void _Script_AIModule::BTDecorator_KeepInCone::set_bUseSelfAsObserved(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_KeepInCone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_KeepInCone");
    return result;
}
