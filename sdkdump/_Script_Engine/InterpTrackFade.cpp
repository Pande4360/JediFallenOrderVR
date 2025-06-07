#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackFade.hpp"
#include "InterpTrackFloatBase.hpp"
void* _Script_Engine::InterpTrackFade::get_FadeColor() {
    return (void*)((uintptr_t)this + 0x94);
}
bool _Script_Engine::InterpTrackFade::get_bPersistFade() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_Engine::InterpTrackFade::set_bPersistFade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InterpTrackFade::get_bFadeAudio() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 2 != 0;
}
void _Script_Engine::InterpTrackFade::set_bFadeAudio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackFade::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackFade");
    return result;
}
