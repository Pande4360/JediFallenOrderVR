#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsStreamingArea.hpp"
void* _Script_Engine::RsStreamingArea::get_AreaName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::RsStreamingArea::get_bInitiallyLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
bool _Script_Engine::RsStreamingArea::get_bIgnoreUnloadByOmission() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::RsStreamingArea::set_bIgnoreUnloadByOmission(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RsStreamingArea::set_bInitiallyLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RsStreamingArea::get_InitialLoadType() {
    return (void*)((uintptr_t)this + 0xa);
}
void* _Script_Engine::RsStreamingArea::get_InitialLoadTokens() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RsStreamingArea::get_LevelsToLoad() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingArea::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsStreamingArea");
    return result;
}
