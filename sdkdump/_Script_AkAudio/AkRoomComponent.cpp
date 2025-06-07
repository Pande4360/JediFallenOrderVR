#include "..\FUObjectArray.hpp"
#include "AkRoomComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
bool _Script_AkAudio::AkRoomComponent::get_bEnable() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkRoomComponent::set_bEnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkRoomComponent*& _Script_AkAudio::AkRoomComponent::get_NextLowerPriorityComponent() {
    return *(_Script_AkAudio::AkRoomComponent**)((uintptr_t)this + 0x2d0);
}
float& _Script_AkAudio::AkRoomComponent::get_Priority() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
float& _Script_AkAudio::AkRoomComponent::get_WallOcclusion() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkRoomComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkRoomComponent");
    return result;
}
