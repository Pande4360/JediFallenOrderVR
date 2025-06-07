#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsNuMagnitude.hpp"
void* _Script_RsTechRT::RsNuMagnitude::get_Negative() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsTechRT::RsNuMagnitude::get_Positive() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsNuMagnitude::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsNuMagnitude");
    return result;
}
