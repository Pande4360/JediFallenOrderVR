#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "RsAnimNotify_UpdateChildTransforms.hpp"
bool _Script_RsGameTechRT::RsAnimNotify_UpdateChildTransforms::get_UpdateChildTransforms() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAnimNotify_UpdateChildTransforms::set_UpdateChildTransforms(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotify_UpdateChildTransforms::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotify_UpdateChildTransforms");
    return result;
}
