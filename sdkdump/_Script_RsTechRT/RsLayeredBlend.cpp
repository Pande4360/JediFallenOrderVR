#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
#include "RsLayeredBlend.hpp"
#include "RsLayeredBlendDefinition.hpp"
_Script_RsTechRT::RsLayeredBlendDefinition*& _Script_RsTechRT::RsLayeredBlend::get_Definition() {
    return *(_Script_RsTechRT::RsLayeredBlendDefinition**)((uintptr_t)this + 0x40);
}
void _Script_RsTechRT::RsLayeredBlend::set_bHasRelevantPoses(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsTechRT::RsLayeredBlend::get_BasePose() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsTechRT::RsLayeredBlend::get_BlendPoses() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RsTechRT::RsLayeredBlend::get_PoseActive() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_RsTechRT::RsLayeredBlend::get_bHasRelevantPoses() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void* _Script_RsTechRT::RsLayeredBlend::get_PoseBlendTimeMultiplier() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_RsTechRT::RsLayeredBlend::get_bBaseHasWeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x79 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsLayeredBlend::set_bBaseHasWeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79 + 0);
    *(uint8_t*)((uintptr_t)this + 0x79 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsLayeredBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsLayeredBlend");
    return result;
}
