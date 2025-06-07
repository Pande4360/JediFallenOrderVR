#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
#include "MovieSceneByteChannel.hpp"
#include "MovieSceneChannel.hpp"
void* _Script_MovieScene::MovieSceneByteChannel::get_Times() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieScene::MovieSceneByteChannel::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_MovieScene::MovieSceneByteChannel::get_bHasDefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneByteChannel::set_bHasDefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Enum*& _Script_MovieScene::MovieSceneByteChannel::get_Enum() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0x30);
}
void* _Script_MovieScene::MovieSceneByteChannel::get_Values() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneByteChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneByteChannel");
    return result;
}
