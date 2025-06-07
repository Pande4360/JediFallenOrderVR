#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneKeyStruct.hpp"
#include "MovieSceneVectorKeyStructBase.hpp"
void* _Script_MovieSceneTracks::MovieSceneVectorKeyStructBase::get_Time() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVectorKeyStructBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneVectorKeyStructBase");
    return result;
}
