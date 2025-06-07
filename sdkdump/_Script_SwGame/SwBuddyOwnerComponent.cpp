#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "SwBuddyOwnerComponent.hpp"
int32_t& _Script_SwGame::SwBuddyOwnerComponent::get_MinPointsForOpenness() {
    return *(int32_t*)((uintptr_t)this + 0x1ac);
}
void* _Script_SwGame::SwBuddyOwnerComponent::get_OnBuddyOwnerEnteredNavMesh() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_SwGame::SwBuddyOwnerComponent::get_OnBuddyOwnerLeftNavMesh() {
    return (void*)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBuddyOwnerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBuddyOwnerComponent");
    return result;
}
void* _Script_SwGame::SwBuddyOwnerComponent::get_QueryExtentEnterNavMesh() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_SwGame::SwBuddyOwnerComponent::get_QueryExtentExitNavMesh() {
    return (void*)((uintptr_t)this + 0x19c);
}
float& _Script_SwGame::SwBuddyOwnerComponent::get_OpennessQueryInterval() {
    return *(float*)((uintptr_t)this + 0x1a8);
}
void _Script_SwGame::SwBuddyOwnerComponent::OnTopologyChanged(void* previousMode, void* newMode, float Proximity) {
    return;
}
bool _Script_SwGame::SwBuddyOwnerComponent::IsLocationValidToDetachBuddy() {
    return;
}
