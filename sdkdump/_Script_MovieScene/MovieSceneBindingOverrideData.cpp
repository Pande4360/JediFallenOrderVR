#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBindingOverrideData.hpp"
void* _Script_MovieScene::MovieSceneBindingOverrideData::get_ObjectBindingId() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneBindingOverrideData::get_Object() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_MovieScene::MovieSceneBindingOverrideData::get_bOverridesDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneBindingOverrideData::set_bOverridesDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneBindingOverrideData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneBindingOverrideData");
    return result;
}
