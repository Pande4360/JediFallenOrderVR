#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieSceneTracks\MovieSceneMaterialTrack.hpp"
#include "MovieSceneWidgetMaterialTrack.hpp"
void* _Script_UMG::MovieSceneWidgetMaterialTrack::get_TrackName() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_UMG::MovieSceneWidgetMaterialTrack::get_BrushPropertyNamePath() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_UMG::MovieSceneWidgetMaterialTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MovieSceneWidgetMaterialTrack");
    return result;
}
