#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieSceneTracks\MovieSceneParameterSectionTemplate.hpp"
#include "MovieSceneWidgetMaterialSectionTemplate.hpp"
void* _Script_UMG::MovieSceneWidgetMaterialSectionTemplate::get_BrushPropertyNamePath() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_UMG::MovieSceneWidgetMaterialSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.MovieSceneWidgetMaterialSectionTemplate");
    return result;
}
