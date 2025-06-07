#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "WidgetNavigation.hpp"
void* _Script_UMG::WidgetNavigation::get_Up() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_UMG::WidgetNavigation::get_Next() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_UMG::WidgetNavigation::get_Down() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_UMG::WidgetNavigation::get_Left() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_UMG::WidgetNavigation::get_Right() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_UMG::WidgetNavigation::get_Previous() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetNavigation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetNavigation");
    return result;
}
