#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelStreamingStatus.hpp"
_Script_CoreUObject::Class* _Script_Engine::LevelStreamingStatus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LevelStreamingStatus");
    return result;
}
void* _Script_Engine::LevelStreamingStatus::get_LODIndex() {
    return (void*)((uintptr_t)this + 0xc);
}
void _Script_Engine::LevelStreamingStatus::set_bShouldBeLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::LevelStreamingStatus::get_PackageName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::LevelStreamingStatus::get_bShouldBeLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::LevelStreamingStatus::set_bShouldBeVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::LevelStreamingStatus::get_bShouldBeVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
