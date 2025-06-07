#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataAsset.hpp"
#include "RsStreamingDefinition.hpp"
bool _Script_Engine::RsStreamingDefinition::get_bIsStatic() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_Engine::RsStreamingDefinition::get_LevelColor() {
    return (void*)((uintptr_t)this + 0x34);
}
void _Script_Engine::RsStreamingDefinition::set_bIsStatic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsStreamingDefinition::get_bIsLevelContainer() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_Engine::RsStreamingDefinition::set_bIsLevelContainer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RsStreamingDefinition::get_LODs() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::RsStreamingDefinition::get_StreamingAreas() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::RsStreamingDefinition::get_LevelsToLoadAfter() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::RsStreamingDefinition::get_AudioBanksToLoad() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::RsStreamingDefinition::get_StreamingSubLevelDefinitions() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::RsStreamingDefinition::get_LevelName() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::RsStreamingDefinition::get_LevelPackageName() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::RsStreamingDefinition::get_WorldAsset() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsStreamingDefinition");
    return result;
}
