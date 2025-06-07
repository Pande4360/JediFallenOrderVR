#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsVolumePlacementData.hpp"
void* _Script_SwGame::RsVolumePlacementData::get_BoneName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_SwGame::RsVolumePlacementData::get_Tags() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::RsVolumePlacementData::get_OffsetFromBone() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_SwGame::RsVolumePlacementData::get_HalfSize() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_SwGame::RsVolumePlacementData::get_AdditionalRotation() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_SwGame::RsVolumePlacementData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsVolumePlacementData");
    return result;
}
