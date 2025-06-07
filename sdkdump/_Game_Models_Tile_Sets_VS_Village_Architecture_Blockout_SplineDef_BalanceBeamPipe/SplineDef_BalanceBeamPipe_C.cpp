#include "..\FUObjectArray.hpp"
#include "SplineDef_BalanceBeamPipe_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
float& _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe::SplineDef_BalanceBeamPipe_C::get_spacing() {
    return *(float*)((uintptr_t)this + 0x370);
}
_Script_Engine::SplineComponent*& _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe::SplineDef_BalanceBeamPipe_C::get_SplineComponentFence() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x360);
}
_Script_Engine::SceneComponent*& _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe::SplineDef_BalanceBeamPipe_C::get_RootSceneComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
float& _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe::SplineDef_BalanceBeamPipe_C::get_tangentScale() {
    return *(float*)((uintptr_t)this + 0x374);
}
_Script_Engine::MaterialInterface*& _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe::SplineDef_BalanceBeamPipe_C::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x378);
}
_Script_Engine::StaticMesh*& _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe::SplineDef_BalanceBeamPipe_C::get_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x380);
}
void* _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe::SplineDef_BalanceBeamPipe_C::get_IKComplexGeoCollisionProfileName() {
    return (void*)((uintptr_t)this + 0x388);
}
_Script_CoreUObject::Class* _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe::SplineDef_BalanceBeamPipe_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Models/Tile_Sets/VS_Village/Architecture/Blockout/SplineDef_BalanceBeamPipe.SplineDef_BalanceBeamPipe_C");
    return result;
}
void _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe::SplineDef_BalanceBeamPipe_C::UserConstructionScript0() {
    return;
}
