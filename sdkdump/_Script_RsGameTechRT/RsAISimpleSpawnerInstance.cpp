#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacterDefinition.hpp"
#include "RsAISensorDefinition_Vision.hpp"
#include "RsAISimpleSpawnerInstance.hpp"
#include "RsAISpawnerInstance.hpp"
bool _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_bCanNeverAwake() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 2 != 0;
}
_Script_RsGameTechRT::RsAICharacterDefinition*& _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_AICharacterDefinition() {
    return *(_Script_RsGameTechRT::RsAICharacterDefinition**)((uintptr_t)this + 0xc0);
}
void* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_AICharacterDefinitionAssetPtr() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_IntroSettings() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_ScriptingOptions() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_CinematicOptions() {
    return (void*)((uintptr_t)this + 0xf4);
}
void* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_POISettings() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_PatrolSettings() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_DialogueSettings() {
    return (void*)((uintptr_t)this + 0x120);
}
void _Script_RsGameTechRT::RsAISimpleSpawnerInstance::set_bCanNeverAwake(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_WanderSettings() {
    return (void*)((uintptr_t)this + 0x148);
}
bool _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_bSpawnOnStartPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAISimpleSpawnerInstance::set_bSpawnOnStartPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsAISensorDefinition_Vision*& _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_OverrideVisionDefinition() {
    return *(_Script_RsGameTechRT::RsAISensorDefinition_Vision**)((uintptr_t)this + 0x158);
}
void* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::get_OverrideVisionDefinitionAssetPtr() {
    return (void*)((uintptr_t)this + 0x160);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISimpleSpawnerInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISimpleSpawnerInstance");
    return result;
}
