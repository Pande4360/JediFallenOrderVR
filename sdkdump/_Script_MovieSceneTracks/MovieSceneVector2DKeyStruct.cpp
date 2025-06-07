#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneVector2DKeyStruct.hpp"
#include "MovieSceneVectorKeyStructBase.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVector2DKeyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneVector2DKeyStruct");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneVector2DKeyStruct::get_Vector() {
    return (void*)((uintptr_t)this + 0x28);
}
