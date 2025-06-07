#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWorldMapDoorActor.hpp"
#include "RsWorldMapGatewayActor.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapDoorActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapDoorActor");
    return result;
}
void* _Script_RsGameTechRT::RsWorldMapDoorActor::get_DoorType() {
    return (void*)((uintptr_t)this + 0x390);
}
bool _Script_RsGameTechRT::RsWorldMapDoorActor::get_bIsUnlockable() {
    return (*(uint8_t*)((uintptr_t)this + 0x392 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsWorldMapDoorActor::get_bIsLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x391 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsWorldMapDoorActor::set_bIsUnlockable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x392 + 0);
    *(uint8_t*)((uintptr_t)this + 0x392 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsWorldMapDoorActor::set_bIsLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x391 + 0);
    *(uint8_t*)((uintptr_t)this + 0x391 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
