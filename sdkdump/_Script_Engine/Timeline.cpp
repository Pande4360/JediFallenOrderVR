#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Property.hpp"
#include "Timeline.hpp"
void* _Script_Engine::Timeline::get_LengthMode() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::Timeline::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_Engine::Timeline::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Timeline::get_bPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 4 != 0;
}
bool _Script_Engine::Timeline::get_bReversePlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 2 != 0;
}
void _Script_Engine::Timeline::set_bReversePlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::Timeline::set_bPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::Timeline::get_Length() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::Timeline::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::Timeline::get_Position() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::Timeline::get_Events() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::Timeline::get_InterpVectors() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::Timeline::get_InterpFloats() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::Timeline::get_InterpLinearColors() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::Timeline::get_TimelinePostUpdateFunc() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::Timeline::get_TimelineFinishedFunc() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::Timeline::get_PropertySetObject() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::Timeline::get_DirectionPropertyName() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Property*& _Script_Engine::Timeline::get_DirectionProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::Timeline::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.Timeline");
    return result;
}
