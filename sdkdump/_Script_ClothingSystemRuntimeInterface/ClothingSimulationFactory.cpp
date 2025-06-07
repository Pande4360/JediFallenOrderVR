#include "..\FUObjectArray.hpp"
#include "ClothingSimulationFactory.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothingSimulationFactory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory");
    return result;
}
