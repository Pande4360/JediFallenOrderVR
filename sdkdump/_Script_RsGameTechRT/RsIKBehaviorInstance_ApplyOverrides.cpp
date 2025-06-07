#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorInstance.hpp"
#include "RsIKBehaviorInstance_ApplyOverrides.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorInstance_ApplyOverrides::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorInstance_ApplyOverrides");
    return result;
}
