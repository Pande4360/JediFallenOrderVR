#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct VRNotificationsComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x90]; public:
    void* get_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate();
    void* get_HMDTrackingInitializedDelegate();
    void* get_HMDRecenteredDelegate();
    void* get_HMDLostDelegate();
    void* get_HMDReconnectedDelegate();
    void* get_HMDConnectCanceledDelegate();
    void* get_HMDPutOnHeadDelegate();
    void* get_HMDRemovedFromHeadDelegate();
    void* get_VRControllerRecenteredDelegate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x200
#pragma pack(pop)
}
