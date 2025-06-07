#include "..\FUObjectArray.hpp"
#include "MovieSceneFloatChannelSerializationHelper.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::MovieSceneFloatChannelSerializationHelper::get_Values() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_AkAudio::MovieSceneFloatChannelSerializationHelper::get_PostInfinityExtrap() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_AkAudio::MovieSceneFloatChannelSerializationHelper::get_PreInfinityExtrap() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneFloatChannelSerializationHelper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper");
    return result;
}
void* _Script_AkAudio::MovieSceneFloatChannelSerializationHelper::get_Times() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_AkAudio::MovieSceneFloatChannelSerializationHelper::get_DefaultValue() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_AkAudio::MovieSceneFloatChannelSerializationHelper::get_bHasDefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_AkAudio::MovieSceneFloatChannelSerializationHelper::set_bHasDefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
