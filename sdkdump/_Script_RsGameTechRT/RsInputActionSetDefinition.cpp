#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsInputActionSetDefinition.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsInputActionSetDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsInputActionSetDefinition");
    return result;
}
void* _Script_RsGameTechRT::RsInputActionSetDefinition::get_Actions() {
    return (void*)((uintptr_t)this + 0x30);
}
