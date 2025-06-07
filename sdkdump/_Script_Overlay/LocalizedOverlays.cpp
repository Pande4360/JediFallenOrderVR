#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BasicOverlays.hpp"
#include "LocalizedOverlays.hpp"
#include "Overlays.hpp"
_Script_Overlay::BasicOverlays*& _Script_Overlay::LocalizedOverlays::get_DefaultOverlays() {
    return *(_Script_Overlay::BasicOverlays**)((uintptr_t)this + 0x28);
}
void* _Script_Overlay::LocalizedOverlays::get_LocaleToOverlaysMap() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Overlay::LocalizedOverlays::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Overlay.LocalizedOverlays");
    return result;
}
