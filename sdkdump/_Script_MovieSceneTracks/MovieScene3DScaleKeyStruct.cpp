#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneKeyStruct.hpp"
#include "MovieScene3DScaleKeyStruct.hpp"
void* _Script_MovieSceneTracks::MovieScene3DScaleKeyStruct::get_Scale() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieScene3DScaleKeyStruct::get_Time() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DScaleKeyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieScene3DScaleKeyStruct");
    return result;
}
