#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTrack.hpp"
#include "TestMovieSceneTrack.hpp"
bool _Script_MovieScene::TestMovieSceneTrack::get_bHighPassFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_MovieScene::TestMovieSceneTrack::set_bHighPassFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::TestMovieSceneTrack::get_SectionArray() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_MovieScene::TestMovieSceneTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.TestMovieSceneTrack");
    return result;
}
