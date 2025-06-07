#include "..\FUObjectArray.hpp"
#include "BP_RotatingSpheres_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_RotatingSpheres::BP_RotatingSpheres_C::get_StaticMesh1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_RotatingSpheres::BP_RotatingSpheres_C::get_StaticMesh3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_RotatingSpheres::BP_RotatingSpheres_C::get_StaticMesh2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_RotatingSpheres::BP_RotatingSpheres_C::get_Sphere() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x380);
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_RotatingSpheres::BP_RotatingSpheres_C::get_StaticMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::SceneComponent*& _Game_UI_GameMenu_Levels_BP_BP_RotatingSpheres::BP_RotatingSpheres_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x388);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Levels_BP_BP_RotatingSpheres::BP_RotatingSpheres_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/UI/GameMenu/Levels/BP/BP_RotatingSpheres.BP_RotatingSpheres_C");
    return result;
}
void _Game_UI_GameMenu_Levels_BP_BP_RotatingSpheres::BP_RotatingSpheres_C::UserConstructionScript0() {
    return;
}
