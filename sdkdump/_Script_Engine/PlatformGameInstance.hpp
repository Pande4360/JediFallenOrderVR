#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GameInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlatformGameInstance : public GameInstance {
    private: char pad_b0[0xd0]; public:
    void* get_ApplicationWillDeactivateDelegate();
    void* get_ApplicationHasReactivatedDelegate();
    void* get_ApplicationWillEnterBackgroundDelegate();
    void* get_ApplicationHasEnteredForegroundDelegate();
    void* get_ApplicationWillTerminateDelegate();
    void* get_ApplicationShouldUnloadResourcesDelegate();
    void* get_ApplicationReceivedStartupArgumentsDelegate();
    void* get_ApplicationRegisteredForRemoteNotificationsDelegate();
    void* get_ApplicationRegisteredForUserNotificationsDelegate();
    void* get_ApplicationFailedToRegisterForRemoteNotificationsDelegate();
    void* get_ApplicationReceivedRemoteNotificationDelegate();
    void* get_ApplicationReceivedLocalNotificationDelegate();
    void* get_ApplicationReceivedScreenOrientationChangedNotificationDelegate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x180
#pragma pack(pop)
}
