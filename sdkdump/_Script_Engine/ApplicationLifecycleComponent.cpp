#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "ApplicationLifecycleComponent.hpp"
void* _Script_Engine::ApplicationLifecycleComponent::get_OnTemperatureChangeDelegate() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationReceivedStartupArgumentsDelegate() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationWillDeactivateDelegate() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationHasReactivatedDelegate() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationWillTerminateDelegate() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationWillEnterBackgroundDelegate() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationHasEnteredForegroundDelegate() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationShouldUnloadResourcesDelegate() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_OnLowPowerModeDelegate() {
    return (void*)((uintptr_t)this + 0x1f0);
}
_Script_CoreUObject::Class* _Script_Engine::ApplicationLifecycleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ApplicationLifecycleComponent");
    return result;
}
