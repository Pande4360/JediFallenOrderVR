#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSectionEvalOptions.hpp"
bool _Script_MovieScene::MovieSceneSectionEvalOptions::get_bCanEditCompletionMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSectionEvalOptions::set_bCanEditCompletionMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSectionEvalOptions::get_CompletionMode() {
    return (void*)((uintptr_t)this + 0x1);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSectionEvalOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSectionEvalOptions");
    return result;
}
