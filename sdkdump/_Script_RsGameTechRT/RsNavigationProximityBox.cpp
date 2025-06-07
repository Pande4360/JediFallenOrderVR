#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsNavigationProximityBox.hpp"
void* _Script_RsGameTechRT::RsNavigationProximityBox::get_FaceWindow() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsNavigationProximityBox::get_HorizontalDifference() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsNavigationProximityBox::get_TopWindow() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_RsGameTechRT::RsNavigationProximityBox::get_CenterOffset() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsNavigationProximityBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsNavigationProximityBox");
    return result;
}
