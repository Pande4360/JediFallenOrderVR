#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "LocationServices.hpp"
#include "LocationServicesData.hpp"
#include "LocationServicesImpl.hpp"
bool _Script_LocationServicesBPLibrary::LocationServices::InitLocationServices(void* Accuracy, float UpdateFrequency, float MinDistanceFilter) {
    return;
}
_Script_CoreUObject::Class* _Script_LocationServicesBPLibrary::LocationServices::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LocationServicesBPLibrary.LocationServices");
    return result;
}
bool _Script_LocationServicesBPLibrary::LocationServices::StopLocationServices() {
    return;
}
_Script_LocationServicesBPLibrary::LocationServicesData _Script_LocationServicesBPLibrary::LocationServices::GetLastKnownLocation() {
    return;
}
bool _Script_LocationServicesBPLibrary::LocationServices::StartLocationServices() {
    return;
}
bool _Script_LocationServicesBPLibrary::LocationServices::AreLocationServicesEnabled() {
    return;
}
bool _Script_LocationServicesBPLibrary::LocationServices::IsLocationAccuracyAvailable(void* Accuracy) {
    return;
}
_Script_LocationServicesBPLibrary::LocationServicesImpl* _Script_LocationServicesBPLibrary::LocationServices::GetLocationServicesImpl() {
    return;
}
