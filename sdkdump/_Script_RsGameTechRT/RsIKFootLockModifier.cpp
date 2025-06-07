#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKFootLockModifier.hpp"
#include "RsIKModifier.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKFootLockModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKFootLockModifier");
    return result;
}
