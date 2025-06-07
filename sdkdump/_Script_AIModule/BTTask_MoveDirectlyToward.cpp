#include "..\FUObjectArray.hpp"
#include "BTTask_MoveDirectlyToward.hpp"
#include "BTTask_MoveTo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AIModule::BTTask_MoveDirectlyToward::get_bDisablePathUpdateOnGoalLocationChange() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_MoveDirectlyToward::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_MoveDirectlyToward");
    return result;
}
void _Script_AIModule::BTTask_MoveDirectlyToward::set_bProjectVectorGoalToNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_AIModule::BTTask_MoveDirectlyToward::set_bDisablePathUpdateOnGoalLocationChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::BTTask_MoveDirectlyToward::get_bProjectVectorGoalToNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 2 != 0;
}
bool _Script_AIModule::BTTask_MoveDirectlyToward::get_bUpdatedDeprecatedProperties() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 4 != 0;
}
void _Script_AIModule::BTTask_MoveDirectlyToward::set_bUpdatedDeprecatedProperties(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
