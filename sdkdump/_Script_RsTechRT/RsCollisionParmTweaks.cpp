#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCollisionParmTweaks.hpp"
#include "RsJSONTweaksBook.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsCollisionParmTweaks::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsCollisionParmTweaks");
    return result;
}
