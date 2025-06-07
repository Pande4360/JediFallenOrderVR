#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DialogueWave.hpp"
bool _Script_Engine::DialogueWave::get_bOverride_SubtitleOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 2 != 0;
}
bool _Script_Engine::DialogueWave::get_bMature() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::DialogueWave::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DialogueWave");
    return result;
}
void* _Script_Engine::DialogueWave::get_LocalizationGUID() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_Engine::DialogueWave::set_bMature(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::DialogueWave::set_bOverride_SubtitleOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::DialogueWave::get_SpokenText() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::DialogueWave::get_SubtitleOverride() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::DialogueWave::get_ContextMappings() {
    return (void*)((uintptr_t)this + 0x50);
}
