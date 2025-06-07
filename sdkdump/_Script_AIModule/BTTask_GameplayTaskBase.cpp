#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_GameplayTaskBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AIModule::BTTask_GameplayTaskBase::get_bWaitForGameplayTask() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_AIModule::BTTask_GameplayTaskBase::set_bWaitForGameplayTask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_GameplayTaskBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_GameplayTaskBase");
    return result;
}
