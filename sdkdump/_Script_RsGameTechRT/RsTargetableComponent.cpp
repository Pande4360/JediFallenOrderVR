#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsTargetableComponent.hpp"
void* _Script_RsGameTechRT::RsTargetableComponent::get_OnPreFactionChangedEvent() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_RsGameTechRT::RsTargetableComponent::get_OnFactionChangedEvent() {
    return (void*)((uintptr_t)this + 0x2e0);
}
bool _Script_RsGameTechRT::RsTargetableComponent::get_bCanBePlayerZTargeted() {
    return (*(uint8_t*)((uintptr_t)this + 0x304 + 0)) & 4 != 0;
}
bool _Script_RsGameTechRT::RsTargetableComponent::get_bCanBetargeted() {
    return (*(uint8_t*)((uintptr_t)this + 0x304 + 0)) & 2 != 0;
}
void* _Script_RsGameTechRT::RsTargetableComponent::get_DefaultFactionTag() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void _Script_RsGameTechRT::RsTargetableComponent::set_bCanBetargeted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x304 + 0);
    *(uint8_t*)((uintptr_t)this + 0x304 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_RsGameTechRT::RsTargetableComponent::set_bCanBePlayerZTargeted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x304 + 0);
    *(uint8_t*)((uintptr_t)this + 0x304 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsTargetableComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsTargetableComponent");
    return result;
}
void _Script_RsGameTechRT::RsTargetableComponent::SetFactionTag(_Script_GameplayTags::GameplayTag NewFactionTag) {
    return;
}
void _Script_RsGameTechRT::RsTargetableComponent::ResetFactionTagToDefault() {
    return;
}
_Script_GameplayTags::GameplayTag _Script_RsGameTechRT::RsTargetableComponent::GetFactionTag() {
    return;
}
_Script_GameplayTags::GameplayTag _Script_RsGameTechRT::RsTargetableComponent::GetDefaultFactionTag() {
    return;
}
void _Script_RsGameTechRT::RsTargetableComponent::GetAllTargetableActors(_Script_CoreUObject::Object* WorldContextObject, void*& OutActors) {
    return;
}
void _Script_RsGameTechRT::RsTargetableComponent::GetAllHostileTargetableActors(_Script_CoreUObject::Object* WorldContextObject, _Script_GameplayTags::GameplayTag FactionTag, void*& OutActors) {
    return;
}
