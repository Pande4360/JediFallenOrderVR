#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "PlatformEventsComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::PlatformEventsComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlatformEventsComponent");
    return result;
}
void* _Script_Engine::PlatformEventsComponent::get_PlatformChangedToLaptopModeDelegate() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Engine::PlatformEventsComponent::get_PlatformChangedToTabletModeDelegate() {
    return (void*)((uintptr_t)this + 0x180);
}
bool _Script_Engine::PlatformEventsComponent::SupportsConvertibleLaptops() {
    return;
}
bool _Script_Engine::PlatformEventsComponent::IsInTabletMode() {
    return;
}
bool _Script_Engine::PlatformEventsComponent::IsInLaptopMode() {
    return;
}
