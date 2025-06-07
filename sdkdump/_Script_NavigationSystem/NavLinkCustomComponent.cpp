#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavLinkCustomComponent.hpp"
#include "NavRelevantComponent.hpp"
bool _Script_NavigationSystem::NavLinkCustomComponent::get_bLinkEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1dc + 0)) & 1 != 0;
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_NavLinkUserId() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_EnabledAreaClass() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_DisabledAreaClass() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_LinkRelativeStart() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_LinkDirection() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_LinkRelativeEnd() {
    return (void*)((uintptr_t)this + 0x1cc);
}
void _Script_NavigationSystem::NavLinkCustomComponent::set_bLinkEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::NavLinkCustomComponent::get_bNotifyWhenEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1dc + 0)) & 2 != 0;
}
void _Script_NavigationSystem::NavLinkCustomComponent::set_bNotifyWhenEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1dc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NavigationSystem::NavLinkCustomComponent::get_bNotifyWhenDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1dc + 0)) & 4 != 0;
}
void _Script_NavigationSystem::NavLinkCustomComponent::set_bNotifyWhenDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1dc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NavigationSystem::NavLinkCustomComponent::get_bCreateBoxObstacle() {
    return (*(uint8_t*)((uintptr_t)this + 0x1dc + 0)) & 8 != 0;
}
void _Script_NavigationSystem::NavLinkCustomComponent::set_bCreateBoxObstacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1dc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_ObstacleOffset() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_ObstacleExtent() {
    return (void*)((uintptr_t)this + 0x1ec);
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_ObstacleAreaClass() {
    return (void*)((uintptr_t)this + 0x1f8);
}
float& _Script_NavigationSystem::NavLinkCustomComponent::get_BroadcastRadius() {
    return *(float*)((uintptr_t)this + 0x200);
}
float& _Script_NavigationSystem::NavLinkCustomComponent::get_BroadcastInterval() {
    return *(float*)((uintptr_t)this + 0x204);
}
void* _Script_NavigationSystem::NavLinkCustomComponent::get_BroadcastChannel() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavLinkCustomComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavLinkCustomComponent");
    return result;
}
