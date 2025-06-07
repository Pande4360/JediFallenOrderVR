#include "..\FUObjectArray.hpp"
#include "MovieSceneTangentDataSerializationHelper.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AkAudio::MovieSceneTangentDataSerializationHelper::get_ArriveTangent() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_AkAudio::MovieSceneTangentDataSerializationHelper::get_LeaveTangent() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_AkAudio::MovieSceneTangentDataSerializationHelper::get_TangentWeightMode() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_AkAudio::MovieSceneTangentDataSerializationHelper::get_ArriveTangentWeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneTangentDataSerializationHelper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.MovieSceneTangentDataSerializationHelper");
    return result;
}
float& _Script_AkAudio::MovieSceneTangentDataSerializationHelper::get_LeaveTangentWeight() {
    return *(float*)((uintptr_t)this + 0x10);
}
