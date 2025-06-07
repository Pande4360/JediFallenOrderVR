#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSlaveSyncInstance.hpp"
#include "RsSyncInstance.hpp"
void* _Script_RsGameTechRT::RsSlaveSyncInstance::get_OffsetTransform() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_RsGameTechRT::RsSlaveSyncInstance::get_ConstrainedBoneName() {
    return (void*)((uintptr_t)this + 0x270);
}
bool _Script_RsGameTechRT::RsSlaveSyncInstance::get_MaintainRelativeRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x278 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSlaveSyncInstance::set_MaintainRelativeRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x278 + 0);
    *(uint8_t*)((uintptr_t)this + 0x278 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSlaveSyncInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSlaveSyncInstance");
    return result;
}
