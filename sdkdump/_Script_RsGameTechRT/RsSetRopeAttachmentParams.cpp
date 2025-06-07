#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsRopeAttachmentComponent.hpp"
#include "RsSetRopeAttachmentParams.hpp"
_Script_RsGameTechRT::RsRopeAttachmentComponent*& _Script_RsGameTechRT::RsSetRopeAttachmentParams::get_RopeAttachment() {
    return *(_Script_RsGameTechRT::RsRopeAttachmentComponent**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsSetRopeAttachmentParams::get_AttachmentPointLocal() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSetRopeAttachmentParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSetRopeAttachmentParams");
    return result;
}
bool _Script_RsGameTechRT::RsSetRopeAttachmentParams::get_bApplyRotationalConstraint() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSetRopeAttachmentParams::set_bApplyRotationalConstraint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsSetRopeAttachmentParams::get_SwingAxis() {
    return (void*)((uintptr_t)this + 0x18);
}
