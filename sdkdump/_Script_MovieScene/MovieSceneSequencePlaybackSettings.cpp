#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneSequencePlaybackSettings.hpp"
float& _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_StartTime() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bDisableMovementInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
int32_t& _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_LoopCount() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bRestoreState() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
float& _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Object*& _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_InstanceData() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x18);
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bRestoreState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bRandomStartTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bRandomStartTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bDisableMovementInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bDisableLookAtInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x12 + 0)) & 1 != 0;
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bHidePlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x13 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bDisableLookAtInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12 + 0);
    *(uint8_t*)((uintptr_t)this + 0x12 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bHidePlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13 + 0);
    *(uint8_t*)((uintptr_t)this + 0x13 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequencePlaybackSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSequencePlaybackSettings");
    return result;
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bHideHud() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bHideHud(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bPauseAtEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 1 != 0;
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bDisableCameraCuts() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bDisableCameraCuts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bPauseAtEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_BindingOverrides() {
    return (void*)((uintptr_t)this + 0x20);
}
