#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTrackEvalOptions.hpp"
bool _Script_MovieScene::MovieSceneTrackEvalOptions::get_bCanEvaluateNearestSection() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_MovieScene::MovieSceneTrackEvalOptions::get_bEvaluateInPreroll() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_MovieScene::MovieSceneTrackEvalOptions::set_bCanEvaluateNearestSection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneTrackEvalOptions::get_bEvalNearestSection() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_MovieScene::MovieSceneTrackEvalOptions::set_bEvalNearestSection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_MovieScene::MovieSceneTrackEvalOptions::set_bEvaluateInPreroll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_MovieScene::MovieSceneTrackEvalOptions::get_bEvaluateInPostroll() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_MovieScene::MovieSceneTrackEvalOptions::set_bEvaluateInPostroll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_MovieScene::MovieSceneTrackEvalOptions::get_bEvaluateNearestSection() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_MovieScene::MovieSceneTrackEvalOptions::set_bEvaluateNearestSection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackEvalOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTrackEvalOptions");
    return result;
}
