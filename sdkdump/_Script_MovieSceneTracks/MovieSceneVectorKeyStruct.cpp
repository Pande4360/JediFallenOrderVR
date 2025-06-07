#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneVectorKeyStruct.hpp"
#include "MovieSceneVectorKeyStructBase.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVectorKeyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneVectorKeyStruct");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneVectorKeyStruct::get_Vector() {
    return (void*)((uintptr_t)this + 0x28);
}
