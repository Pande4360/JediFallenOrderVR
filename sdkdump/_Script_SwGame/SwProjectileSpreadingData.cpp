#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "SwProjectileSpreadingData.hpp"
float& _Script_SwGame::SwProjectileSpreadingData::get_OffsetY() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::SwProjectileSpreadingData::get_MinDeviationX() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::SwProjectileSpreadingData::get_TrackingPercentage() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::SwProjectileSpreadingData::get_MaxDeviationX() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::SwProjectileSpreadingData::get_MinDeviationY() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::SwProjectileSpreadingData::get_MaxDeviationY() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_SwGame::SwProjectileSpreadingData::get_OffsetX() {
    return *(float*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_SwGame::SwProjectileSpreadingData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwProjectileSpreadingData");
    return result;
}
