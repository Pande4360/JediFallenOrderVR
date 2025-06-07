#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneVector4KeyStruct.hpp"
#include "MovieSceneVectorKeyStructBase.hpp"
void* _Script_MovieSceneTracks::MovieSceneVector4KeyStruct::get_Vector() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVector4KeyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneVector4KeyStruct");
    return result;
}
