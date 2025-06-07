#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OverlayItem.hpp"
void* _Script_Overlay::OverlayItem::get_StartTime() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Overlay::OverlayItem::get_EndTime() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Overlay::OverlayItem::get_Text() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Overlay::OverlayItem::get_Position() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Overlay::OverlayItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Overlay.OverlayItem");
    return result;
}
