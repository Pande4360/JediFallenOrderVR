#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorInstance.hpp"
#include "RsIKBehaviorInstance_WeaponIk.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorInstance_WeaponIk::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorInstance_WeaponIk");
    return result;
}
