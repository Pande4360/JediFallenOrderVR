#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsModelSwapActor.hpp"
#include "RsTKPushPullDoorActor.hpp"
void _Script_SwGame::RsTKPushPullDoorActor::SwapDented() {
    return;
}
void* _Script_SwGame::RsTKPushPullDoorActor::get_ModelSwapOut() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Script_SwGame::RsTKPushPullDoorActor::get_ModelSwapDented() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_SwGame::RsTKPushPullDoorActor::get_ModelSwapBent() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_SwGame::RsTKPushPullDoorActor::get_DoorState() {
    return (void*)((uintptr_t)this + 0x3b0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsTKPushPullDoorActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsTKPushPullDoorActor");
    return result;
}
void _Script_SwGame::RsTKPushPullDoorActor::SetSimulatingPhysics(bool Enabled) {
    return;
}
void _Script_SwGame::RsTKPushPullDoorActor::SwapBent() {
    return;
}
bool _Script_SwGame::RsTKPushPullDoorActor::IsSimulatingPhysics() {
    return;
}
