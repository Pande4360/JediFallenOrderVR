#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorInstance.hpp"
#include "RsIKBehaviorInstance_Smoothing.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorInstance_Smoothing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorInstance_Smoothing");
    return result;
}
