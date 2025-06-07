#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ApplicationLifecycleComponent : public ActorComponent {
    private: char pad_170[0x90]; public:
    void* get_ApplicationWillDeactivateDelegate();
    void* get_ApplicationHasReactivatedDelegate();
    void* get_ApplicationWillEnterBackgroundDelegate();
    void* get_ApplicationHasEnteredForegroundDelegate();
    void* get_ApplicationWillTerminateDelegate();
    void* get_ApplicationShouldUnloadResourcesDelegate();
    void* get_ApplicationReceivedStartupArgumentsDelegate();
    void* get_OnTemperatureChangeDelegate();
    void* get_OnLowPowerModeDelegate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x200
#pragma pack(pop)
}
