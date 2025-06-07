#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsWorldMapDoorComponent.hpp"
bool _Script_RsGameTechRT::RsWorldMapDoorComponent::get_bIsUnlockable() {
    return (*(uint8_t*)((uintptr_t)this + 0x171 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsWorldMapDoorComponent::get_bIsLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsWorldMapDoorComponent::set_bIsLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsWorldMapDoorComponent::set_bIsUnlockable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x171 + 0);
    *(uint8_t*)((uintptr_t)this + 0x171 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapDoorComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapDoorComponent");
    return result;
}
bool _Script_RsGameTechRT::RsWorldMapDoorComponent::get_bExcludeFromWorldMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x173 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsWorldMapDoorComponent::get_DoorType() {
    return (void*)((uintptr_t)this + 0x172);
}
void _Script_RsGameTechRT::RsWorldMapDoorComponent::set_bExcludeFromWorldMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x173 + 0);
    *(uint8_t*)((uintptr_t)this + 0x173 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsWorldMapDoorComponent::BroadcastDoorUnlocked() {
    return;
}
void _Script_RsGameTechRT::RsWorldMapDoorComponent::BroadcastDoorLocked() {
    return;
}
