#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsDynamicDeformerBase.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsDynamicDeformerBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsDynamicDeformerBase");
    return result;
}
