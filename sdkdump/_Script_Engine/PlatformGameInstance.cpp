#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameInstance.hpp"
#include "PlatformGameInstance.hpp"
void* _Script_Engine::PlatformGameInstance::get_ApplicationWillDeactivateDelegate() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationWillEnterBackgroundDelegate() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationHasReactivatedDelegate() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedStartupArgumentsDelegate() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationHasEnteredForegroundDelegate() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationWillTerminateDelegate() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationShouldUnloadResourcesDelegate() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationRegisteredForRemoteNotificationsDelegate() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationRegisteredForUserNotificationsDelegate() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationFailedToRegisterForRemoteNotificationsDelegate() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedRemoteNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedLocalNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedScreenOrientationChangedNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_Engine::PlatformGameInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlatformGameInstance");
    return result;
}
