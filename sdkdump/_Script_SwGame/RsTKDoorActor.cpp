#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsModelSwapActor.hpp"
#include "RsTKDoorActor.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RsTKDoorActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsTKDoorActor");
    return result;
}
void* _Script_SwGame::RsTKDoorActor::get_ModelSwapOut() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Script_SwGame::RsTKDoorActor::get_ModelSwapIn() {
    return (void*)((uintptr_t)this + 0x380);
}
bool _Script_SwGame::RsTKDoorActor::SwapAndSpawnObjects() {
    return;
}
float& _Script_SwGame::RsTKDoorActor::get_SpawnedActorLifetime() {
    return *(float*)((uintptr_t)this + 0x398);
}
void* _Script_SwGame::RsTKDoorActor::get_SpawnedActors() {
    return (void*)((uintptr_t)this + 0x3a0);
}
bool _Script_SwGame::RsTKDoorActor::get_bIsActivated() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c5 + 0)) & 1 != 0;
}
void _Script_SwGame::RsTKDoorActor::set_bIsActivated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsTKDoorActor::IsActivated() {
    return;
}
void* _Script_SwGame::RsTKDoorActor::GetSpawnedActors() {
    return;
}
