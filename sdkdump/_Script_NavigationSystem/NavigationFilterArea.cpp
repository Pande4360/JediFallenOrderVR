#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationFilterArea.hpp"
bool _Script_NavigationSystem::NavigationFilterArea::get_bOverrideTravelCost() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 2 != 0;
}
void* _Script_NavigationSystem::NavigationFilterArea::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_NavigationSystem::NavigationFilterArea::set_bOverrideTravelCost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_NavigationSystem::NavigationFilterArea::get_TravelCostOverride() {
    return *(float*)((uintptr_t)this + 0x8);
}
void _Script_NavigationSystem::NavigationFilterArea::set_bIsExcluded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_NavigationSystem::NavigationFilterArea::get_EnteringCostOverride() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_NavigationSystem::NavigationFilterArea::get_bOverrideEnteringCost() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 4 != 0;
}
bool _Script_NavigationSystem::NavigationFilterArea::get_bIsExcluded() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavigationFilterArea::set_bOverrideEnteringCost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationFilterArea::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NavigationSystem.NavigationFilterArea");
    return result;
}
