#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationLinkBase.hpp"
#include "NavigationSegmentLink.hpp"
void* _Script_Engine::NavigationSegmentLink::get_RightEnd() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::NavigationSegmentLink::get_LeftStart() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::NavigationSegmentLink::get_LeftEnd() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::NavigationSegmentLink::get_RightStart() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::NavigationSegmentLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavigationSegmentLink");
    return result;
}
