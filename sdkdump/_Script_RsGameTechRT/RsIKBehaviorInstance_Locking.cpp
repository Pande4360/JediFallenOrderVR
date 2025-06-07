#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorInstance.hpp"
#include "RsIKBehaviorInstance_Locking.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorInstance_Locking::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorInstance_Locking");
    return result;
}
