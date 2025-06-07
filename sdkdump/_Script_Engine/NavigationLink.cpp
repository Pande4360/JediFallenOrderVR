#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationLink.hpp"
#include "NavigationLinkBase.hpp"
void* _Script_Engine::NavigationLink::get_Left() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::NavigationLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavigationLink");
    return result;
}
void* _Script_Engine::NavigationLink::get_Right() {
    return (void*)((uintptr_t)this + 0x44);
}
