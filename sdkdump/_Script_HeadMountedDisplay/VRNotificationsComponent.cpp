#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "VRNotificationsComponent.hpp"
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDRemovedFromHeadDelegate() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDConnectCanceledDelegate() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDLostDelegate() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDTrackingInitializedDelegate() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDRecenteredDelegate() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDReconnectedDelegate() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDPutOnHeadDelegate() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_VRControllerRecenteredDelegate() {
    return (void*)((uintptr_t)this + 0x1f0);
}
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::VRNotificationsComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.VRNotificationsComponent");
    return result;
}
