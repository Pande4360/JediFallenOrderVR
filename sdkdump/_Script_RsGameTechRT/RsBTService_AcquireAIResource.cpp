#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTService_AcquireAIResource.hpp"
void _Script_RsGameTechRT::RsBTService_AcquireAIResource::set_bRequestWhenUnacquired(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsBTService_AcquireAIResource::get_AcquireResourceParameters() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_RsGameTechRT::RsBTService_AcquireAIResource::get_bRequestWhenUnacquired() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTService_AcquireAIResource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTService_AcquireAIResource");
    return result;
}
