#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsCameraModeSet.hpp"
#include "RsCameraModeSetDefinition.hpp"
_Script_RsGameTechRT::RsCameraModeSet*& _Script_RsGameTechRT::RsCameraModeSetDefinition::get_ModeSet() {
    return *(_Script_RsGameTechRT::RsCameraModeSet**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraModeSetDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCameraModeSetDefinition");
    return result;
}
