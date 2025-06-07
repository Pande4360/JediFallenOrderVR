#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsFocusGroupNavigation.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsFocusGroupNavigation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsFocusGroupNavigation");
    return result;
}
void* _Script_RsGameTechRT::RsFocusGroupNavigation::get_FocusGroup() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsFocusGroupNavigation::get_NavigationInput() {
    return (void*)((uintptr_t)this + 0x8);
}
