#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "NavRelevantComponent.hpp"
bool _Script_NavigationSystem::NavRelevantComponent::get_bAttachToOwnersRoot() {
    return (*(uint8_t*)((uintptr_t)this + 0x194 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavRelevantComponent::set_bAttachToOwnersRoot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x194 + 0);
    *(uint8_t*)((uintptr_t)this + 0x194 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Object*& _Script_NavigationSystem::NavRelevantComponent::get_CachedNavParent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavRelevantComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavRelevantComponent");
    return result;
}
void _Script_NavigationSystem::NavRelevantComponent::SetNavigationRelevancy(bool bRelevant) {
    return;
}
