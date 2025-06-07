#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsLayeredBlendDefinition.hpp"
bool _Script_RsTechRT::RsLayeredBlendDefinition::get_bBlendRootMotionByOriginBoneWeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void* _Script_RsTechRT::RsLayeredBlendDefinition::get_Layers() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_RsTechRT::RsLayeredBlendDefinition::set_bBlendRootMotionByOriginBoneWeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsLayeredBlendDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsLayeredBlendDefinition");
    return result;
}
