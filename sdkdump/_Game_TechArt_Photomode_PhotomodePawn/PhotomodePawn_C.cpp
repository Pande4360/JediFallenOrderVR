#include "..\FUObjectArray.hpp"
#include "PhotomodePawn_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SpectatorPawn.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3e8);
}
_Script_CoreUObject::Class* _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/TechArt/Photomode/PhotomodePawn.PhotomodePawn_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::get_FocusPlaneMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::SceneComponent*& _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::get_RotationComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3f8);
}
float& _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::get_MaxCameraDistance() {
    return *(float*)((uintptr_t)this + 0x400);
}
void* _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::get_BaseLocation() {
    return (void*)((uintptr_t)this + 0x404);
}
void _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::UserConstructionScript() {
    return;
}
void _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::ReceiveBeginPlay() {
    return;
}
void _Game_TechArt_Photomode_PhotomodePawn::PhotomodePawn_C::ExecuteUbergraph_PhotomodePawn(int32_t EntryPoint) {
    return;
}
