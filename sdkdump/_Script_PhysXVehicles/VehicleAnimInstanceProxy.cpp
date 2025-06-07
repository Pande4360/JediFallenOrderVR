#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
#include "VehicleAnimInstanceProxy.hpp"
_Script_CoreUObject::Class* _Script_PhysXVehicles::VehicleAnimInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.VehicleAnimInstanceProxy");
    return result;
}
