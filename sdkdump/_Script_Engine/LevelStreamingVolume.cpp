#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelStreamingVolume.hpp"
#include "Volume.hpp"
void* _Script_Engine::LevelStreamingVolume::get_VolumeType() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_Engine::LevelStreamingVolume::get_StreamingAreas() {
    return (void*)((uintptr_t)this + 0x398);
}
bool _Script_Engine::LevelStreamingVolume::get_bDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a9 + 0)) & 1 != 0;
}
void _Script_Engine::LevelStreamingVolume::set_bDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::LevelStreamingVolume::GetStreamingAreaNames(_Script_CoreUObject::Object* ContextObject, void*& OutAreaNames) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::LevelStreamingVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelStreamingVolume");
    return result;
}
