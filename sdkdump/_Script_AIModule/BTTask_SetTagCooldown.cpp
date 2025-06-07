#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_SetTagCooldown.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTTask_SetTagCooldown::get_CooldownTag() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_AIModule::BTTask_SetTagCooldown::get_bAddToExistingDuration() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_AIModule::BTTask_SetTagCooldown::set_bAddToExistingDuration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_SetTagCooldown::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_SetTagCooldown");
    return result;
}
float& _Script_AIModule::BTTask_SetTagCooldown::get_CooldownDuration() {
    return *(float*)((uintptr_t)this + 0x7c);
}
