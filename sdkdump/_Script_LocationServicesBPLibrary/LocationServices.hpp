#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "LocationServicesData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LocationServicesBPLibrary {
struct LocationServicesImpl;
}
namespace _Script_LocationServicesBPLibrary {
#pragma pack(push, 1)
struct LocationServices : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool StopLocationServices();
    bool StartLocationServices();
    bool IsLocationAccuracyAvailable(void* Accuracy);
    bool InitLocationServices(void* Accuracy, float UpdateFrequency, float MinDistanceFilter);
    _Script_LocationServicesBPLibrary::LocationServicesImpl* GetLocationServicesImpl();
    _Script_LocationServicesBPLibrary::LocationServicesData GetLastKnownLocation();
    bool AreLocationServicesEnabled();
}; // Size: 0x28
#pragma pack(pop)
}
