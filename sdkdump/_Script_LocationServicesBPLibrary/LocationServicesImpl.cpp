#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LocationServicesImpl.hpp"
void* _Script_LocationServicesBPLibrary::LocationServicesImpl::get_OnLocationChanged() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LocationServicesBPLibrary::LocationServicesImpl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LocationServicesBPLibrary.LocationServicesImpl");
    return result;
}
