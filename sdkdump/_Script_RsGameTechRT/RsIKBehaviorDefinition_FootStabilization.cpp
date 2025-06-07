#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorDefinition.hpp"
#include "RsIKBehaviorDefinition_FootStabilization.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorDefinition_FootStabilization::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorDefinition_FootStabilization");
    return result;
}
