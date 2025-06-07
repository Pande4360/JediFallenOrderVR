#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "SwTelekinesisAbilityWeightData.hpp"
float& _Script_SwGame::SwTelekinesisAbilityWeightData::get_MaxMovementSpeed() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwTelekinesisAbilityWeightData::get_ForceMeterRow() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SwGame::SwTelekinesisAbilityWeightData::get_CameraMode() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_SwGame::SwTelekinesisAbilityWeightData::get_ReleaseScale() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_SwGame::SwTelekinesisAbilityWeightData::get_ControlData() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SwGame::SwTelekinesisAbilityWeightData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwTelekinesisAbilityWeightData");
    return result;
}
