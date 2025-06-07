#include "..\FUObjectArray.hpp"
#include "ClothingSimulationInteractor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
    return result;
}
void _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::PhysicsAssetUpdated() {
    return;
}
void _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::ClothConfigUpdated() {
    return;
}
