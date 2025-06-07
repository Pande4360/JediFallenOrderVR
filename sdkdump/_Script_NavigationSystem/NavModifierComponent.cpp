#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavModifierComponent.hpp"
#include "NavRelevantComponent.hpp"
void* _Script_NavigationSystem::NavModifierComponent::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_NavigationSystem::NavModifierComponent::get_FailsafeExtent() {
    return (void*)((uintptr_t)this + 0x1a8);
}
bool _Script_NavigationSystem::NavModifierComponent::get_bIncludeAgentHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b4 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavModifierComponent::SetAreaClass(void* NewAreaClass) {
    return;
}
void _Script_NavigationSystem::NavModifierComponent::set_bIncludeAgentHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavModifierComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavModifierComponent");
    return result;
}
