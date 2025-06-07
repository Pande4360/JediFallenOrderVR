#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Dialogue.hpp"
#include "DialogueNode.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\GameInstance.hpp"
bool _Script_DialoguePlugin::Dialogue::get_DisplayIdleSplines() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
int32_t& _Script_DialoguePlugin::Dialogue::get_SubtitleAttenuationRange() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void _Script_DialoguePlugin::Dialogue::set_DisplayIdleSplines(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_DialoguePlugin::Dialogue::get_Delay() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_DialoguePlugin::Dialogue::get_OcclusionEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
bool _Script_DialoguePlugin::Dialogue::get_bReplayable() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_DialoguePlugin::Dialogue::set_bReplayable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DialoguePlugin::Dialogue::get_bDisablePlayerMovementControl() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
_Script_DialoguePlugin::DialogueNode _Script_DialoguePlugin::Dialogue::GetFirstNode() {
    return;
}
void _Script_DialoguePlugin::Dialogue::set_OcclusionEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_DialoguePlugin::Dialogue::set_bDisablePlayerMovementControl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DialoguePlugin::Dialogue::get_bDisablePlayerCameraControl() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b + 0)) & 1 != 0;
}
void _Script_DialoguePlugin::Dialogue::set_bDisablePlayerCameraControl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DialoguePlugin::Dialogue::get_bEndableEarly() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_DialoguePlugin::Dialogue::set_bEndableEarly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DialoguePlugin::Dialogue::get_bAutoPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
void _Script_DialoguePlugin::Dialogue::CallFunctionByName(_Script_CoreUObject::Object* Object, void* FunctionName) {
    return;
}
void _Script_DialoguePlugin::Dialogue::set_bAutoPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::GameInstance*& _Script_DialoguePlugin::Dialogue::get_PersistentGameInstance() {
    return *(_Script_Engine::GameInstance**)((uintptr_t)this + 0x80);
}
bool _Script_DialoguePlugin::Dialogue::get_bBackgroundConversation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e + 0)) & 1 != 0;
}
void _Script_DialoguePlugin::Dialogue::set_bBackgroundConversation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DialoguePlugin::Dialogue::get_Name() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_DialoguePlugin::Dialogue::CleanOuter() {
    return;
}
void* _Script_DialoguePlugin::Dialogue::get_Data() {
    return (void*)((uintptr_t)this + 0x60);
}
int32_t& _Script_DialoguePlugin::Dialogue::get_NextNodeId() {
    return *(int32_t*)((uintptr_t)this + 0x70);
}
int32_t& _Script_DialoguePlugin::Dialogue::get_Priority() {
    return *(int32_t*)((uintptr_t)this + 0x74);
}
int32_t& _Script_DialoguePlugin::Dialogue::get_SpeakersCount() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
int32_t& _Script_DialoguePlugin::Dialogue::get_SpeakersHash() {
    return *(int32_t*)((uintptr_t)this + 0x7c);
}
void _Script_DialoguePlugin::Dialogue::AssignPersistentOuter(_Script_Engine::GameInstance* inGameInstance) {
    return;
}
_Script_CoreUObject::Class* _Script_DialoguePlugin::Dialogue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DialoguePlugin.Dialogue");
    return result;
}
void* _Script_DialoguePlugin::Dialogue::GetNextNodes(_Script_DialoguePlugin::DialogueNode Node) {
    return;
}
