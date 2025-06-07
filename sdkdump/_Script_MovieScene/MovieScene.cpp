#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene.hpp"
#include "MovieSceneSignedObject.hpp"
#include "MovieSceneTrack.hpp"
void* _Script_MovieScene::MovieScene::get_TickResolution() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_MovieScene::MovieScene::get_Spawnables() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_MovieScene::MovieScene::get_PlaybackRange() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_MovieScene::MovieScene::get_HeroClassName() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_MovieScene::MovieScene::get_Possessables() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_MovieScene::MovieScene::get_ObjectBindings() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_MovieScene::MovieScene::get_MasterTracks() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_MovieScene::MovieSceneTrack*& _Script_MovieScene::MovieScene::get_CameraCutTrack() {
    return *(_Script_MovieScene::MovieSceneTrack**)((uintptr_t)this + 0x90);
}
void* _Script_MovieScene::MovieScene::get_SelectionRange() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_MovieScene::MovieScene::get_DisplayRate() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_MovieScene::MovieScene::get_EvaluationType() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_MovieScene::MovieScene::get_ClockSource() {
    return (void*)((uintptr_t)this + 0xc9);
}
bool _Script_MovieScene::MovieScene::get_bSpawnSequenceObjectsInEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0xca + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieScene::set_bSpawnSequenceObjectsInEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xca + 0);
    *(uint8_t*)((uintptr_t)this + 0xca + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieScene::get_bIsParentingEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xcb + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieScene::set_bIsParentingEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcb + 0);
    *(uint8_t*)((uintptr_t)this + 0xcb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieScene::get_LevelSequenceActorPath() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_MovieScene::MovieScene::get_SpawnerBindings() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_MovieScene::MovieScene::get_HeroSequenceIdentifier() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_MovieScene::MovieScene::get_BuddyDroidClassName() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_MovieScene::MovieScene::get_BuddyDroidSequenceIdentifier() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_MovieScene::MovieScene::get_MantisSequenceIdentifier() {
    return (void*)((uintptr_t)this + 0x188);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieScene::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieScene");
    return result;
}
