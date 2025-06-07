#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDisabledConstrainedJumpDirections.hpp"
void* _Script_RsGameTechRT::RsDisabledConstrainedJumpDirections::get_DisabledDirections() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDisabledConstrainedJumpDirections::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDisabledConstrainedJumpDirections");
    return result;
}
