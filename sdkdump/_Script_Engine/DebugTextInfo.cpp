#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "DebugTextInfo.hpp"
#include "Font.hpp"
float& _Script_Engine::DebugTextInfo::get_TimeRemaining() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::DebugTextInfo::get_DebugText() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_Engine::Actor*& _Script_Engine::DebugTextInfo::get_SrcActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
bool _Script_Engine::DebugTextInfo::get_bAbsoluteLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void* _Script_Engine::DebugTextInfo::get_SrcActorOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::DebugTextInfo::get_SrcActorDesiredOffset() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::DebugTextInfo::get_Duration() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::DebugTextInfo::get_TextColor() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::DebugTextInfo::set_bAbsoluteLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::DebugTextInfo::get_bKeepAttachedToActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 2 != 0;
}
void _Script_Engine::DebugTextInfo::set_bKeepAttachedToActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::DebugTextInfo::get_bDrawShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 4 != 0;
}
void _Script_Engine::DebugTextInfo::set_bDrawShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::DebugTextInfo::get_OrigActorLocation() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_Engine::Font*& _Script_Engine::DebugTextInfo::get_Font() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x50);
}
float& _Script_Engine::DebugTextInfo::get_FontScale() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::DebugTextInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DebugTextInfo");
    return result;
}
