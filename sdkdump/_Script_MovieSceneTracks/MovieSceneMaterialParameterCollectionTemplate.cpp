#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialParameterCollection.hpp"
#include "MovieSceneMaterialParameterCollectionTemplate.hpp"
#include "MovieSceneParameterSectionTemplate.hpp"
_Script_Engine::MaterialParameterCollection*& _Script_MovieSceneTracks::MovieSceneMaterialParameterCollectionTemplate::get_MPC() {
    return *(_Script_Engine::MaterialParameterCollection**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneMaterialParameterCollectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate");
    return result;
}
