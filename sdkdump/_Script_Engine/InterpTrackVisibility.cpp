#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrack.hpp"
#include "InterpTrackVisibility.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackVisibility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackVisibility");
    return result;
}
void _Script_Engine::InterpTrackVisibility::set_bFireEventsWhenBackwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::InterpTrackVisibility::get_VisibilityTrack() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_Engine::InterpTrackVisibility::get_bFireEventsWhenForwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::InterpTrackVisibility::set_bFireEventsWhenJumpingForwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::InterpTrackVisibility::get_bFireEventsWhenBackwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
void _Script_Engine::InterpTrackVisibility::set_bFireEventsWhenForwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InterpTrackVisibility::get_bFireEventsWhenJumpingForwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 4 != 0;
}
