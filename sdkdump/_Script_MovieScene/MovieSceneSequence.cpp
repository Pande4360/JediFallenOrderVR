#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSequence.hpp"
#include "MovieSceneSignedObject.hpp"
void* _Script_MovieScene::MovieSceneSequence::get_PrecompiledEvaluationTemplate() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_MovieScene::MovieSceneSequence::SetFootstepsAllowed(bool bInAllowFootsteps) {
    return;
}
bool _Script_MovieScene::MovieSceneSequence::get_bParentContextsAreSignificant() {
    return (*(uint8_t*)((uintptr_t)this + 0x341 + 0)) & 1 != 0;
}
void* _Script_MovieScene::MovieSceneSequence::get_DefaultCompletionMode() {
    return (void*)((uintptr_t)this + 0x340);
}
void _Script_MovieScene::MovieSceneSequence::set_bParentContextsAreSignificant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x341 + 0);
    *(uint8_t*)((uintptr_t)this + 0x341 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSequence");
    return result;
}
void _Script_MovieScene::MovieSceneSequence::SetIsCinematicSequence(bool bInIsCinematicSequence) {
    return;
}
bool _Script_MovieScene::MovieSceneSequence::IsCinematicSequence() {
    return;
}
bool _Script_MovieScene::MovieSceneSequence::AreFootstepsAllowed() {
    return;
}
