#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameplayTaskResource.hpp"
int32_t& _Script_GameplayTasks::GameplayTaskResource::get_ManualResourceID() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_GameplayTasks::GameplayTaskResource::get_AutoResourceID() {
    return (void*)((uintptr_t)this + 0x2c);
}
bool _Script_GameplayTasks::GameplayTaskResource::get_bManuallySetID() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_GameplayTasks::GameplayTaskResource::set_bManuallySetID(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_GameplayTasks::GameplayTaskResource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTasks.GameplayTaskResource");
    return result;
}
