#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "RsVolumeBlueprintBase.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsVolumeBlueprintBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsVolumeBlueprintBase");
    return result;
}
void _Script_RsTechRT::RsVolumeBlueprintBase::SetVolumeColor(_Script_CoreUObject::Color newVolumeColor) {
    return;
}
