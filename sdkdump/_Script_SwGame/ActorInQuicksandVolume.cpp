#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorInQuicksandVolume.hpp"
void* _Script_SwGame::ActorInQuicksandVolume::get_ActorPtr() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SwGame::ActorInQuicksandVolume::get_IsAffectedByQuicksand() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
float& _Script_SwGame::ActorInQuicksandVolume::get_TimeInQuicksand() {
    return *(float*)((uintptr_t)this + 0x10);
}
void _Script_SwGame::ActorInQuicksandVolume::set_IsAffectedByQuicksand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::ActorInQuicksandVolume::get_BoundingVolumeImmersionCoef() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SwGame::ActorInQuicksandVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.ActorInQuicksandVolume");
    return result;
}
