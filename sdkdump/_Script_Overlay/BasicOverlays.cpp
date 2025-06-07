#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BasicOverlays.hpp"
#include "Overlays.hpp"
_Script_CoreUObject::Class* _Script_Overlay::BasicOverlays::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Overlay.BasicOverlays");
    return result;
}
void* _Script_Overlay::BasicOverlays::get_Overlays() {
    return (void*)((uintptr_t)this + 0x28);
}
