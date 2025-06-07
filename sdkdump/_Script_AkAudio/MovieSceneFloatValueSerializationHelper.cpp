#include "..\FUObjectArray.hpp"
#include "MovieSceneFloatValueSerializationHelper.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AkAudio::MovieSceneFloatValueSerializationHelper::get_Value() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_AkAudio::MovieSceneFloatValueSerializationHelper::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_AkAudio::MovieSceneFloatValueSerializationHelper::get_TangentMode() {
    return (void*)((uintptr_t)this + 0x5);
}
void* _Script_AkAudio::MovieSceneFloatValueSerializationHelper::get_Tangent() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneFloatValueSerializationHelper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.MovieSceneFloatValueSerializationHelper");
    return result;
}
