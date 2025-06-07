#include "..\FUObjectArray.hpp"
#include "BlackboardKeySelector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BlackboardKeySelector::get_SelectedKeyName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AIModule::BlackboardKeySelector::get_AllowedTypes() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_AIModule::BlackboardKeySelector::get_bNoneIsAllowedValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void* _Script_AIModule::BlackboardKeySelector::get_SelectedKeyType() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_AIModule::BlackboardKeySelector::get_SelectedKeyID() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_AIModule::BlackboardKeySelector::set_bNoneIsAllowedValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::BlackboardKeySelector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.BlackboardKeySelector");
    return result;
}
