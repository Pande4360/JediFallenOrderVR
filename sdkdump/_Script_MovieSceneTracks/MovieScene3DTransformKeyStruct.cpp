#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneKeyStruct.hpp"
#include "MovieScene3DTransformKeyStruct.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DTransformKeyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct");
    return result;
}
void* _Script_MovieSceneTracks::MovieScene3DTransformKeyStruct::get_Location() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformKeyStruct::get_Rotation() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformKeyStruct::get_Scale() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformKeyStruct::get_TeleportationType() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformKeyStruct::get_Time() {
    return (void*)((uintptr_t)this + 0x30);
}
