#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorDefinition.hpp"
#include "RsIKBehaviorDefinition_IkToSurface.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorDefinition_IkToSurface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorDefinition_IkToSurface");
    return result;
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_IkToSurface::get_AllowedFootPenetration() {
    return *(float*)((uintptr_t)this + 0x30);
}
