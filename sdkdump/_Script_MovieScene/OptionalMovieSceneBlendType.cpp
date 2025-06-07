#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OptionalMovieSceneBlendType.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::OptionalMovieSceneBlendType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.OptionalMovieSceneBlendType");
    return result;
}
void* _Script_MovieScene::OptionalMovieSceneBlendType::get_BlendType() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_MovieScene::OptionalMovieSceneBlendType::get_bIsValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_MovieScene::OptionalMovieSceneBlendType::set_bIsValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
