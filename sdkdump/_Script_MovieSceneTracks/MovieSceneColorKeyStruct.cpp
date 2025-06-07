#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneKeyStruct.hpp"
#include "MovieSceneColorKeyStruct.hpp"
void* _Script_MovieSceneTracks::MovieSceneColorKeyStruct::get_Color() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieSceneColorKeyStruct::get_Time() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneColorKeyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneColorKeyStruct");
    return result;
}
