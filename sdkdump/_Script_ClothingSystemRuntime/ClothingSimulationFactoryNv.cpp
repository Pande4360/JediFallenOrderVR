#include "..\FUObjectArray.hpp"
#include "ClothingSimulationFactoryNv.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingSimulationFactory.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothingSimulationFactoryNv::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv");
    return result;
}
