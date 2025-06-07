#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrack.hpp"
#include "InterpTrackEvent.hpp"
void* _Script_Engine::InterpTrackEvent::get_EventTrack() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_Engine::InterpTrackEvent::set_bFireEventsWhenBackwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::InterpTrackEvent::get_bFireEventsWhenForwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
bool _Script_Engine::InterpTrackEvent::get_bUseCustomEventName() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 8 != 0;
}
void _Script_Engine::InterpTrackEvent::set_bFireEventsWhenForwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InterpTrackEvent::get_bFireEventsWhenBackwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
bool _Script_Engine::InterpTrackEvent::get_bFireEventsWhenJumpingForwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 4 != 0;
}
void _Script_Engine::InterpTrackEvent::set_bFireEventsWhenJumpingForwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::InterpTrackEvent::set_bUseCustomEventName(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackEvent");
    return result;
}
