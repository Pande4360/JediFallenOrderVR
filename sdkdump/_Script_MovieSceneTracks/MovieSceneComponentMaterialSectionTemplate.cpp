#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneComponentMaterialSectionTemplate.hpp"
#include "MovieSceneParameterSectionTemplate.hpp"
int32_t& _Script_MovieSceneTracks::MovieSceneComponentMaterialSectionTemplate::get_MaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneComponentMaterialSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate");
    return result;
}
