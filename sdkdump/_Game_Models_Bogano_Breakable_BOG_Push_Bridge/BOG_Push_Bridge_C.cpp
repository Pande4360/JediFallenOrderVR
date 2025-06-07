#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP\EmpirePullBridge_BP_C.hpp"
#include "BOG_Push_Bridge_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_SwGame\RsAbilityUserComponent.hpp"
void _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::ReceiveBeginPlay() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::get_StaticMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3f0);
}
void* _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3d8);
}
_Script_Engine::StaticMeshComponent*& _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::get_StaticMesh2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3e0);
}
_Script_Engine::StaticMeshComponent*& _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::get_StaticMesh1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3e8);
}
_Script_SwGame::RsAbilityUserComponent*& _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::get_PlayerAbilityUser() {
    return *(_Script_SwGame::RsAbilityUserComponent**)((uintptr_t)this + 0x3f8);
}
void _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::UserConstructionScript() {
    return;
}
_Script_CoreUObject::Class* _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Models/Bogano/Breakable/BOG_Push_Bridge.BOG_Push_Bridge_C");
    return result;
}
void _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::Highlight_SetToPush() {
    return;
}
void _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::Highlight_SetToPull() {
    return;
}
void _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::BeginPlay_Highlight() {
    return;
}
void _Game_Models_Bogano_Breakable_BOG_Push_Bridge::BOG_Push_Bridge_C::ExecuteUbergraph_BOG_Push_Bridge(int32_t EntryPoint) {
    return;
}
