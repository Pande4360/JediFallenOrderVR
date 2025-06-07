#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicalMaterial.hpp"
#include "SwTelekinesisControlData.hpp"
float& _Script_SwGame::SwTelekinesisControlData::get_MaxDepthDistance() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwTelekinesisControlData::get_MaxHeightDistance() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwTelekinesisControlData::get_MaxStartLateralDistance() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwTelekinesisControlData::get_MaxDepth() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_SwGame::SwTelekinesisControlData::get_MaxEndLateralDistance() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwTelekinesisControlData::get_MinHeight() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_SwGame::SwTelekinesisControlData::get_MaxHeight() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwTelekinesisControlData::get_AngularSlerpDamping() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_SwGame::SwTelekinesisControlData::get_HeightSpeed() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwTelekinesisControlData::get_MinDepth() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_SwGame::SwTelekinesisControlData::get_DepthSpeed() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_SwGame::SwTelekinesisControlData::get_LateralMovementSpeed() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_SwGame::SwTelekinesisControlData::get_QuicksandSpeedMultiplier() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_SwGame::SwTelekinesisControlData::get_MaxRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::SwTelekinesisControlData::get_MinRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::SwTelekinesisControlData::get_Springiness() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::SwTelekinesisControlData::get_SpringDampening() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::SwTelekinesisControlData::get_LinearDampening() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_SwGame::SwTelekinesisControlData::get_LinearStiffness() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_SwGame::SwTelekinesisControlData::get_AngularSlerpStiffness() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::SwTelekinesisControlData::get_InterpolationSpeed() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_SwGame::SwTelekinesisControlData::get_OverrideInertiaTensorScale() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_Engine::PhysicalMaterial*& _Script_SwGame::SwTelekinesisControlData::get_PhysMaterialOverride() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_SwGame::SwTelekinesisControlData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwTelekinesisControlData");
    return result;
}
