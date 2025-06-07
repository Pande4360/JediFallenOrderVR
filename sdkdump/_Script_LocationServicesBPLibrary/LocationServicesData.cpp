#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocationServicesData.hpp"
float& _Script_LocationServicesBPLibrary::LocationServicesData::get_HorizontalAccuracy() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_LocationServicesBPLibrary::LocationServicesData::get_Timestamp() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LocationServicesBPLibrary::LocationServicesData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LocationServicesBPLibrary.LocationServicesData");
    return result;
}
float& _Script_LocationServicesBPLibrary::LocationServicesData::get_Latitude() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_LocationServicesBPLibrary::LocationServicesData::get_Longitude() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_LocationServicesBPLibrary::LocationServicesData::get_VerticalAccuracy() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_LocationServicesBPLibrary::LocationServicesData::get_Altitude() {
    return *(float*)((uintptr_t)this + 0x14);
}
