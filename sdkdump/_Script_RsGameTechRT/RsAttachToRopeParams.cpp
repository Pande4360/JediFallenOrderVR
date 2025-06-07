#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAttachToRopeParams.hpp"
#include "RsRopeComponent.hpp"
_Script_RsGameTechRT::RsRopeComponent*& _Script_RsGameTechRT::RsAttachToRopeParams::get_Rope() {
    return *(_Script_RsGameTechRT::RsRopeComponent**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAttachToRopeParams::get_AttachmentPointLocal() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_RsGameTechRT::RsAttachToRopeParams::set_bForceRopeUnattach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_RsGameTechRT::RsAttachToRopeParams::get_AttachmentBone() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsAttachToRopeParams::get_SwingDirection() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_RsGameTechRT::RsAttachToRopeParams::get_bApplyRotationalConstraint() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAttachToRopeParams::set_bApplyRotationalConstraint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAttachToRopeParams::get_bForceRopeUnattach() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAttachToRopeParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAttachToRopeParams");
    return result;
}
