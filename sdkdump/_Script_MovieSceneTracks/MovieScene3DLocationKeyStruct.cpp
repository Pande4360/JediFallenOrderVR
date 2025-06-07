#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneKeyStruct.hpp"
#include "MovieScene3DLocationKeyStruct.hpp"
void* _Script_MovieSceneTracks::MovieScene3DLocationKeyStruct::get_Location() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieScene3DLocationKeyStruct::get_Time() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DLocationKeyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieScene3DLocationKeyStruct");
    return result;
}
