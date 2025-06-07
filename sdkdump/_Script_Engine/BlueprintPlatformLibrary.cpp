#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "BlueprintPlatformLibrary.hpp"
void _Script_Engine::BlueprintPlatformLibrary::ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow, void*& Title, void*& Body, void*& Action, void* ActivationEvent) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintPlatformLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlueprintPlatformLibrary");
    return result;
}
void _Script_Engine::BlueprintPlatformLibrary::ClearAllLocalNotifications() {
    return;
}
void _Script_Engine::BlueprintPlatformLibrary::ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, void* ActivationEvent) {
    return;
}
void _Script_Engine::BlueprintPlatformLibrary::ScheduleLocalNotificationBadgeAtTime(_Script_CoreUObject::DateTime& FireDateTime, bool LocalTime, void* ActivationEvent) {
    return;
}
void _Script_Engine::BlueprintPlatformLibrary::ScheduleLocalNotificationAtTime(_Script_CoreUObject::DateTime& FireDateTime, bool LocalTime, void*& Title, void*& Body, void*& Action, void* ActivationEvent) {
    return;
}
void _Script_Engine::BlueprintPlatformLibrary::GetLaunchNotification(bool& NotificationLaunchedApp, void*& ActivationEvent, int32_t& FireDate) {
    return;
}
void* _Script_Engine::BlueprintPlatformLibrary::GetDeviceOrientation() {
    return;
}
void _Script_Engine::BlueprintPlatformLibrary::CancelLocalNotification(void* ActivationEvent) {
    return;
}
