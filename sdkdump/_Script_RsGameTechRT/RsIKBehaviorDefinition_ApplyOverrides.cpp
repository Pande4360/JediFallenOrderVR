#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorDefinition.hpp"
#include "RsIKBehaviorDefinition_ApplyOverrides.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorDefinition_ApplyOverrides::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorDefinition_ApplyOverrides");
    return result;
}
